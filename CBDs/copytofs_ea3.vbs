' copytofs.vbs
'
' This script will copy the subprojects of the specified project into the directory of the user's choice
'
'  Last updated - 01/09/2015
'  Last updated - 07/27/2105 For Dev 72 projects migrated to EA3 DB.
' ----------------------------------------------------------------------------------------------------------------------


' ----------------------------------------------------------------------------------------------------------------------
'   DESIGN NOTES
' ----------------------------------------------------------------------------------------------------------------------
'
' This script is designed to invoke itself, possibly multiple times.  If it was started with WScript.exe and was passed
' no arguments, it will reload itself with CScript.exe in order to collect a username and password (as they cannot be
' masked with a standard input box in WScript).  Once this is done, it will re-invoke itself in WScript with the
' username and password passed as arguments.  If the script is started in CScript with any arguments, or if it is
' started in WScript with the wrong number of arguments, it will provide a usage statement and exit.
' 
' It is possible to create a shortcut such that the user will not have to enter a username and password, but this
' requires that both username and password be saved in the shortcut in plain text.  The target would look like this:
'     "C:\PathToScript\copytofs.vbs" username password
' 
' The script can be invoked from another scripting process and proceed without interaction if all arguments are supplied
' initially:
'     cscript.exe copytofs.vbs username password projectname-version[:project:instance] "C:\Destination\Directory"


' ----------------------------------------------------------------------------------------------------------------------
'   SETUP - variables that configure the operation of the script
' ----------------------------------------------------------------------------------------------------------------------

sDatabasePath =		"\\usmisag-ap58\ccmdb72\ses_dev_ea3"	' Database Path for the synergy connection
sWorkingArea =		"C:\ccm_wa"							' Default Local Working Area for the synergy connection
iCScriptWaitTime =	3000								' Time (in ms) to display a command line message before quitting
sCCMexe =			"ccm.exe"                           ' Name of CLI executable
sTitle =			"Copy to File System"				' Title of Dialog Windows

bDebug =			True
sDebugFile =		"copytofsdebug.txt"



' ----------------------------------------------------------------------------------------------------------------------
'   INITIALIZE - set up global variables
' ----------------------------------------------------------------------------------------------------------------------

On Error Resume Next
bTryDisconnect = False
Set oShl = WScript.CreateObject("WScript.Shell")
Set oFSO = WScript.CreateObject("Scripting.FileSystemObject")
Set oShlApp = WScript.CreateObject("Shell.Application")
sScriptPath = Wscript.ScriptFullName


ErrorCheck "setup"


If bDebug = True Then
	'open debug output file for (over)writing
	Set tsDebug = oFSO.OpenTextFile(sDebugFile, 2, True)
	ErrorCheck "debug init"
End If



' ----------------------------------------------------------------------------------------------------------------------
'   FIND CCM - look for ccm.exe in the PATH environment variable.  If it is not there, look in the default
'              installation directory C:\Program Files\Telelogic (if it exists).  If it is still not found, quit.
' ----------------------------------------------------------------------------------------------------------------------

bFound = False
sPathEnvVar = oShl.ExpandEnvironmentStrings("%PATH%")
sPaths = Split(sPathEnvVar, ";")
i = LBound(sPaths)

Do While i <= UBound(sPaths) And bFound = False
	sPaths(i) = Trim(sPaths(i))
	If Right(sPaths(i), 1) <> "\" Then
		sPaths(i) = sPaths(i) & "\"
	End If
	If oFSO.FileExists(sPaths(i) & sCCMexe) Then
		bFound = True
	End If
	i = i + 1
Loop

If bFound = False Then
	' try looking for it manually
	If oFSO.FolderExists("C:\Program Files") Then
		If oFSO.FolderExists("C:\Program Files\IBM") Then
			sCCMsearch = SearchFolder("C:\Program Files\IBM", sCCMexe, False)
			If sCCMsearch <> "" Then
				bFound = True
				sCCMexe = """" & sCCMsearch & """"
			End If
		End If
	End If
End If

If bFound = False Then
	' try looking for it manually (64 bit operating systems)
	If oFSO.FolderExists("C:\Program Files (x86)") Then
		If oFSO.FolderExists("C:\Program Files (x86)\IBM") Then
			sCCMsearch = SearchFolder("C:\Program Files (x86)\IBM", sCCMexe, False)
			If sCCMsearch <> "" Then
				bFound = True
				sCCMexe = """" & sCCMsearch & """"
			End If
		End If
	End If
End If

If bFound = False Then
	sMsg = "Error: can't find " & sCCMexe & " - add it to the PATH environment variable"
	Message sMsg
	ErrorCheck "find ccm.exe"
	WScript.Quit 1
End If


ErrorCheck "find ccm.exe"



' ----------------------------------------------------------------------------------------------------------------------
'   GET CREDENTIALS - get password in command prompt with ScriptPW (on XP machines) and via StdIn on other machines.
' ----------------------------------------------------------------------------------------------------------------------

If WScript.Arguments.Count = 0 Then
	
	'script is starting up with no arguments - ensure that we are running in CScript and reload if necessary
	If LCase(Right(WScript.FullName, 11)) <> "cscript.exe" Then
		oShl.Run("cscript.exe /NoLogo """ & sScriptPath & """")
		WScript.Quit 0
	End If
	
	'script is starting up with no arguments, and we are definitely running in CScript
	
	sUsername = ""
	sPassword = ""
	
	WScript.StdOut.WriteLine
	WScript.StdOut.WriteLine("              ****************************************************")
	WScript.StdOut.WriteLine("              *                                                  *")
	WScript.StdOut.WriteLine("              *  copytofs.vbs - Copy Subprojects to File System  *")
	WScript.StdOut.WriteLine("              *                                                  *")
	WScript.StdOut.WriteLine("              ****************************************************")
	WScript.StdOut.WriteLine
	
	WScript.StdOut.Write("Username: ")
	sUsername = WScript.StdIn.ReadLine
	
	ErrorCheck "get credentials"
	Set oPassword = CreateObject("ScriptPW.Password")
	If Err.Number = 0 Then
		WScript.StdOut.Write("Password: ")
		sPassword = oPassword.GetPassword()
		WScript.StdOut.WriteLine
	Else
		'if we can't get the password via ScriptPW, just get it from StdIn (unmasked)
		WScript.StdOut.Write("Password (UNMASKED): ")
		Err.Clear
		sPassword = WScript.StdIn.ReadLine
	End If
	
	If sUsername = "" Or sPassword = "" Then
		WScript.StdOut.WriteLine("Username or Password was not entered - operation cancelled")
		WScript.Sleep iCScriptWaitTime
		WScript.Quit 2
	End If
	
	' username and password are entered - reload script with WScript
	oShl.Run("wscript.exe """ & sScriptPath & """ " & sUsername & " " & sPassword)
	ErrorCheck "get credentials"
	WScript.Quit 0
	
ElseIf WScript.Arguments.Count = 4 Then
	
	' run in autonomous mode
	bAutoMode = True
	
	' ensure that we're running in CScript
	If LCase(Right(WScript.FullName, 11)) <> "cscript.exe" Then
		Message "This script must be run with cscript.exe for autonomous mode" & vbCrLf & "Usage:" & vbCrLf &_
				"  cscript copytofs.vbs uname passwd projname-ver[:project:inst] ""C:\Directory"""
		WScript.Quit 3
	End If
	
Else
	'ensure that we are running in WScript - reload if necessary
	If LCase(Right(WScript.FullName, 11)) <> "wscript.exe" Then
		If WScript.Arguments.Count <> 2 Then
			WScript.StdOut.WriteLine("Usage:" & vbCrLf & "  copytofs.vbs [username password]")
			WScript.Sleep iCScriptWaitTime
			WScript.Quit 3
		Else
			oShl.Run("wscript.exe """ & sScriptPath & """ " & WScript.Arguments(0) & " " & WScript.Arguments(1))
			WScript.Quit 0
		End If
	End If
	
	If WScript.Arguments.Count <> 2 Then
		Message "Usage:" & vbCrLf & "  copytofs.vbs [username password]"
		WScript.Quit 3
	End If
	
	' run in interactive mode
	bAutoMode = False
	
End If


ErrorCheck "get credentials"



' ----------------------------------------------------------------------------------------------------------------------
'   LOG IN - establish a connection to the synergy server
' ----------------------------------------------------------------------------------------------------------------------

ccmparams = "-q -nogui -d " & sDatabasePath ' & " -u " & sWorkingArea
sCommand = sCCMexe & " start " & ccmparams & " -n " & WScript.Arguments(0) & " -pw " & WScript.Arguments(1)

Set oExec = oShl.Exec(sCommand)
Do While oExec.Status = 0
    WScript.Sleep 100
Loop

sStdOut = oExec.StdOut.ReadAll
sStdErr = oExec.StdErr.ReadAll

If bDebug = True Then
	sDebug = Left(sCommand, InStr(1, sCommand, " -pw ") + 4) & "********"
	sMsg = "Log In Command:" & vbCrLf & sDebug & vbCrLf & vbCrLf &_
		   "Return Code:" & vbCrLf & oExec.ExitCode & vbCrLf & vbCrLf &_
		   "Response:" & vbCrLf & sStdOut & vbCrLf & vbCrLf &_
		   "StdErr:" & vbCrLf & sStdErr & vbCrLf & vbCrLf & vbCrLf
	tsDebug.Write(sMsg)
	ErrorCheck "debug login"
End If

If oExec.ExitCode <> 0 Then
	'we didn't connect successfully - quit
	sMsg = "Error - unable to establish a connection to the synergy server" & vbCrLf & vbCrLf &_
		   "StdErr Output:" & vbCrLf & sStdErr
	Message sMsg
	WScript.Quit 4
End If

' logged in successfully - from now on, if we encounter an error, we must end the synergy connection before quitting
bTryDisconnect = True
ErrorCheck "login"



' ----------------------------------------------------------------------------------------------------------------------
'   FIND LOCAL DB DIRECTORY - if the directory sWorkingArea doesn't exist, ask for another one to be selected
' ----------------------------------------------------------------------------------------------------------------------

REM If Not oFSO.FolderExists(sWorkingArea) Then
	REM If bAutoMode = True Then
		REM sMsg = "Error - unable to find the local database folder: " & vbCrLf & "   " & sWorkingArea & vbCrLf &_
			   REM "Update the value of the sWorkingArea parameter in copytofs.vbs" & vbCrLf & sStdErr
		REM Message sMsg
		REM WScript.Quit 6
	REM End If
	
	REM sMsg = "Select the local database folder for Synergy" & vbCrLf & "(C:\ccm_wa by default)"
	REM Set oFolder = oShlApp.BrowseForFolder(0, sMsg, 1, 17)
	REM If oFolder Is Nothing Then
		REM Disconnect
		REM WScript.Quit 0
	REM End If
	REM sWorkingArea = oFolder.Self.Path
REM End If

REM ErrorCheck "find local DB directory"



' ----------------------------------------------------------------------------------------------------------------------
'   GET PROJECT NAME - search the path of the script for a folder with a dash ("-") in the name.  If found, display it
'                      as the default text in the input box.  If more than one is found, use the youngest folder.
' ----------------------------------------------------------------------------------------------------------------------

If bAutoMode = True Then
	sProjectName = WScript.Arguments(2)
Else
	sDefText = ""
	sDirs = Split(sScriptPath, "\")
	For i = LBound(sDirs) To UBound(sDirs)
		If InStr(1, sDirs(i), "-") > 0 Then
			sDefText = Trim(sDirs(i))
		End If
	Next

	sMsg = "Enter the integration project name" & vbCrLf & vbCrLf & _
		   "  Format:    Project_Name-version:project:instance" & vbCrLf & _
		   ""
	sProjectName = GetLine(sMsg, sDefText)
End If

If sProjectName = "" Then
	Disconnect
	WScript.Quit 0
'ElseIf InStr(1, sProjectName, ":") Then
'	sProjectNameShort = Left(sProjectName, InStr(1, sProjectName, ":") - 1)
Else
	sProjectNameShort = sProjectName
End If

ErrorCheck "get project name"



' ----------------------------------------------------------------------------------------------------------------------
'   SYNERGY QUERY - send the query with the "query" command and parse the returned values in the format
'                   #) projectname-version
' ----------------------------------------------------------------------------------------------------------------------

Dim SubProjects()
ReDim SubProjects(0)
SubProjects(0) = ""


sCommand = sCCMexe & " query -f ""%displayname"" ""is_member_of('" & sProjectName & "') and type='project'"""

Set oExec = oShl.Exec(sCommand)
sStdOut = ""
Do While oExec.Status = 0
    WScript.Sleep 100
	' the 4KB StdOut buffer could potentially get filled with this request - empty it regularly
	sStdOut = sStdOut & oExec.StdOut.ReadAll
Loop

sStdErr = oExec.StdErr.ReadAll

If bDebug = True Then
	sMsg = "Synergy Query Command:" & vbCrLf & sCommand & vbCrLf & vbCrLf &_
		   "Return Code:" & vbCrLf & oExec.ExitCode & vbCrLf & vbCrLf &_
		   "Response:" & vbCrLf & sStdOut & vbCrLf & vbCrLf &_
		   "StdErr:" & vbCrLf & sStdErr & vbCrLf & vbCrLf & vbCrLf
	tsDebug.Write(sMsg)
	ErrorCheck "debug synergy query"
End If

If oExec.ExitCode <> 0 Then
	sMsg = "Error - unable to query the synergy server" & vbCrLf & vbCrLf &_
		   "StdErr Output:" & vbCrLf & sStdErr
	Message sMsg
	Disconnect
	WScript.Quit 5
End If

bCopyParent = False
If bAutoMode = True Then
	SubProjects(0) = sProjectNameShort
	bCopyParent = True
Else
	sMsg = "Copy parent project to file system?" & vbCrLf &_
		   "(" & sProjectNameShort & ")"
	If GetResponse(sMsg) = True Then
		SubProjects(0) = sProjectNameShort
		bCopyParent = True
	End If
End If

sNvMMgr = ""
sLines = Split(sStdOut, vbCrLf)
For Each sLine in sLines
	
	If InStr(1, sLine, ")") > 0 Then
		sLine = Right(sLine, Len(sLine) - InStr(1, sLine, ")"))
	End If
	
	sLine = Trim(sLine)
	
	If Len(sLine) > 0 Then
		If InStr(1, sLine, "-") > 0 And _
		Left(sLine, InStr(1, sLine, "-") - 1) <> Left(sProjectName, InStr(1, sProjectName, "-") - 1) Then
			
			bFound = False
			If SubProjects(0) <> "" Then
				For i = LBound(SubProjects) To UBound(SubProjects)
					If Left(sLine, InStr(1, sLine, "-") - 1) = _
					Left(SubProjects(i), InStr(1, SubProjects(i), "-") - 1) Then
						
						bFound = True
						
						sMsg = "Two versions of the same project were found.  Use the newer one?" & vbCrLf &_
							   "Older: " & SubProjects(i) & vbCrLf &_
							   "Newer: " & sLine
						
						If bAutoMode = True Then
							SubProjects(i) = sLine
						ElseIf GetResponse(sMsg) = True Then
							SubProjects(i) = sLine
						End If
						
					End If
				Next
			End If
			
			If bFound = False Then
				If SubProjects(0) <> "" Then
					ReDim Preserve SubProjects(UBound(SubProjects) + 1)
				End If
				SubProjects(UBound(SubProjects)) = sLine
				
				If Left(sLine, InStr(1, sLine, "-") - 1) = "NvMMgr" Then
					sNvMMgr = sLine
				End If
			End If
			
		End If
	End If
	
	ErrorCheck "synergy query loop"
Next

If sNvMMgr <> "" Then
	
	sCommand = sCCMexe & " query -f ""%displayname"" ""is_member_of('" & sNvMMgr & "') and type='project'"""
	
	Set oExec = oShl.Exec(sCommand)
	sStdOut = ""
	Do While oExec.Status = 0
		WScript.Sleep 100
		' the 4KB StdOut buffer could potentially get filled with this request - empty it regularly
		sStdOut = sStdOut & oExec.StdOut.ReadAll
	Loop
	
	sStdErr = oExec.StdErr.ReadAll
	
	If bDebug = True Then
		sMsg = "Synergy Query Command:" & vbCrLf & sCommand & vbCrLf & vbCrLf &_
			   "Return Code:" & vbCrLf & oExec.ExitCode & vbCrLf & vbCrLf &_
			   "Response:" & vbCrLf & sStdOut & vbCrLf & vbCrLf &_
			   "StdErr:" & vbCrLf & sStdErr & vbCrLf & vbCrLf & vbCrLf
		tsDebug.Write(sMsg)
		ErrorCheck "second debug synergy query"
	End If
	
	If oExec.ExitCode <> 0 Then
		sMsg = "Error - unable to query the synergy server" & vbCrLf & vbCrLf &_
			   "StdErr Output:" & vbCrLf & sStdErr
		Message sMsg
		Disconnect
		WScript.Quit 105
	End If
	
	sLines = Split(sStdOut, vbCrLf)
	For Each sLine in sLines
		
		If InStr(1, sLine, ")") > 0 Then
			sLine = Right(sLine, Len(sLine) - InStr(1, sLine, ")"))
		End If
		
		sLine = Trim(sLine)
		
		If Len(sLine) > 0 Then
			If InStr(1, sLine, "-") > 0 And _
			Left(sLine, InStr(1, sLine, "-") - 1) <> Left(sProjectName, InStr(1, sProjectName, "-") - 1) Then
				
				bFound = False
				If SubProjects(0) <> "" Then
					For i = LBound(SubProjects) To UBound(SubProjects)
						If Left(sLine, InStr(1, sLine, "-") - 1) = _
						Left(SubProjects(i), InStr(1, SubProjects(i), "-") - 1) Then
							bFound = True
						End If
					Next
				End If
				
				If bFound = False Then
					If Left(sLine, InStr(1, sLine, "-") - 1) <> "QAC" Then
						If Left(sLine, InStr(1, sLine, "-") - 1) <> "UnitTestEnv" Then
							
							If SubProjects(0) <> "" Then
								ReDim Preserve SubProjects(UBound(SubProjects) + 1)
							End If
							SubProjects(UBound(SubProjects)) = sLine
							
						End If
					End If
				End If
				
			End If
		End If
		
		ErrorCheck "second synergy query loop"
	Next
	
End If


If SubProjects(0) = "" Then
	Message "Nothing to Copy"
	Disconnect
	WScript.Quit 0
End If


If UBound(SubProjects) - LBound(SubProjects) > 20 Then
	
	sMsg = (UBound(SubProjects) - LBound(SubProjects) + 1) & " projects selected to be copied"
	
	iNxtrLib = -1
	iStdDef = -1
	For i = LBound(SubProjects) To UBound(SubProjects)
		If Left(SubProjects(i), InStr(1, SubProjects(i), "-") - 1) = "NxtrLib" Then
			iNxtrLib = i
		ElseIf Left(SubProjects(i), InStr(1, SubProjects(i), "-") - 1) = "StdDef" Then
			iStdDef = i
		End If
	Next
	
	If bCopyParent = True Or iNxtrLib >= 0 Or iStdDef >= 0 Then
		sMsg = sMsg & ", including:" & vbCrLf
	End If
	
	If bCopyParent = True Then
		sMsg = sMsg & vbCrLf & "   " & sProjectNameShort
	End If
	
	If iNxtrLib >= 0 Then
		sMsg = sMsg & vbCrLf & "   " & SubProjects(iNxtrLib)
	End If
	
	If iStdDef >= 0 Then
		sMsg = sMsg & vbCrLf & "   " & SubProjects(iStdDef)
	End If
	
Else
	sMsg = "Projects to be copied:" & vbCrLf
	For i = LBound(SubProjects) To UBound(SubProjects)
		sMsg = sMsg & vbCrLf & "   " & SubProjects(i)
	Next
End If
Message sMsg


ErrorCheck "synergy query"



' ----------------------------------------------------------------------------------------------------------------------
'   GET DIRECTORY - open a 'browse folder' dialog to select the save folder
' ----------------------------------------------------------------------------------------------------------------------

If bAutoMode = True Then
	
	sSavePath = WScript.Arguments(3)
	
	If Not oFSO.FolderExists(sSavePath) Then
		Message "Error - specified save folder does not exist"
		Disconnect
		WScript.Quit 7
	End If
	
	If Right(sSavePath, 1) <> "\" Then
		sTempSavePath = sSavePath & "\"
	Else
		sTempSavePath = sSavePath
	End If
	
	' Check Folder Permissions - create and read back a temp folder
	i = 0
	sTempFolder = "temp"
	Do While oFSO.FileExists(sTempSavePath & sTempFolder & i) Or oFSO.FolderExists(sTempSavePath & sTempFolder & i)
		i = i + 1
	Loop
	sTempFolder = sTempSavePath & sTempFolder & i
	oFSO.CreateFolder sTempFolder
	If oFSO.FolderExists(sTempFolder) Then
		oFSO.DeleteFolder sTempFolder, True
	Else
		sMsg = "You do not have permission to write to the specified folder"
		Message sMsg
		Disconnect
		WScript.Quit 8
	End If
	
Else
	sTempSavePath = ""
	Do While sTempSavePath = ""
		Set oFolder = oShlApp.BrowseForFolder(0, "Select a folder to save the subprojects", 1, 0)
		If oFolder Is Nothing Then
			Disconnect
			WScript.Quit 0
		End If
		sSavePath = oFolder.Self.Path
		sTempSavePath = sSavePath
		If Right(sTempSavePath, 1) <> "\" Then
			sTempSavePath = sTempSavePath & "\"
		End If
		
		' Check Folder Permissions - create and read back a temp folder
		i = 0
		sTempFolder = "temp"
		Do While oFSO.FileExists(sTempSavePath & sTempFolder & i) Or oFSO.FolderExists(sTempSavePath & sTempFolder & i)
			i = i + 1
		Loop
		sTempFolder = sTempSavePath & sTempFolder & i
		oFSO.CreateFolder sTempFolder
		If oFSO.FolderExists(sTempFolder) Then
			oFSO.DeleteFolder sTempFolder, True
		Else
			sMsg = "You do not have permission to write to the selected folder." & vbCrLf & vbCrLf & _
				   "                            Select another folder."
			Message sMsg
			sTempSavePath = ""
			Err.Clear
		End If
	Loop
End If


ErrorCheck "save folder selection"



' ----------------------------------------------------------------------------------------------------------------------
'   COPY PROJECTS - prompt the user one last time, then perform the copy operations
' ----------------------------------------------------------------------------------------------------------------------

If bAutoMode = True Then
	bCopy = True
Else
	sMsg = "Copy Projects to File System?  This will overwrite" & vbCrLf & _
		   "any existing projects in the selected folder" & vbCrLf & sSavePath
	bCopy = GetResponse(sMsg)
End If

If bCopy = True Then
	sCommand = sCCMexe & " copy_to_file_system "
	
	For i = LBound(SubProjects) To UBound(SubProjects)
		sCommand = sCommand & SubProjects(i) & " "
		
		sFolder = sSavePath & "\" & Left(SubProjects(i), InStr(1, SubProjects(i), "-") - 1)
		If oFSO.FolderExists(sFolder) Then
			oFSO.DeleteFolder sFolder, True
		End If
	Next
	
	sCommand = sCommand & "-path """ & sSavePath & """"
	
	If bDebug = True Then
		Set oExec = oShl.Exec(sCommand)
		sStdOut = ""
		Do While oExec.Status = 0
			WScript.Sleep 100
			' the 4KB StdOut buffer could potentially get filled with this request - empty it regularly
			sStdOut = sStdOut & oExec.StdOut.ReadAll
		Loop
		sMsg = "Copy Projects Command:" & vbCrLf & sCommand & vbCrLf & vbCrLf &_
			   "Return Code:" & vbCrLf & oExec.ExitCode & vbCrLf & vbCrLf &_
			   "Response:" & vbCrLf & sStdOut & vbCrLf & vbCrLf &_
			   "StdErr:" & vbCrLf &	oExec.StdErr.ReadAll & vbCrLf & vbCrLf & vbCrLf
		tsDebug.Write(sMsg)
	Else
		oShl.Run sCommand, 0, True
	End If
	
End If


ErrorCheck "copy"



' ----------------------------------------------------------------------------------------------------------------------
'   END
' ----------------------------------------------------------------------------------------------------------------------

Disconnect

If bDebug = True Then
	tsDebug.Close
End If

Message "Finished"
WScript.Quit 0



' ----------------------------------------------------------------------------------------------------------------------
'   ERROR CHECKING - if an error is found, display an error and quit
' ----------------------------------------------------------------------------------------------------------------------

Private Sub ErrorCheck(sSection)
	If Err.Number <> 0 Then
		If LCase(Right(WScript.FullName, 11)) = "cscript.exe" Then
			sMsg = "Runtime Error during " & sSection & ":" & vbCrLf & _
				   "     Error No:  " & Err.Number & vbCrLf & _
				   "  Description:  " & Err.Description
			Message sMsg
			WScript.Sleep iCScriptWaitTime
		Else
			sMsg = "Runtime Error during " & sSection & ":" & vbCrLf & _
				   "        Error No:   " & Err.Number & vbCrLf & _
				   "    Description:   " & Err.Description
			Message sMsg
		End If
		
		If bTryDisconnect = True Then
			Err.Clear
			Disconnect
		End If
		
		If bDebug = True Then
			tsDebug.Close
		End If
		WScript.Quit -1
	End If
End Sub



' ----------------------------------------------------------------------------------------------------------------------
'   DISCONNECT - send the stop command and check to see if it was successful - if not, display an error
' ----------------------------------------------------------------------------------------------------------------------

Private Sub Disconnect
	sCommand = sCCMexe & " stop"
	Set oExec = oShl.Exec(sCommand)
	Do While oExec.Status = 0
		WScript.Sleep 100
	Loop
	
	sStdOut = oExec.StdOut.ReadAll
	sStdErr = oExec.StdErr.ReadAll
	
	If bDebug = True Then
		sMsg = "Disconnect Command:" & vbCrLf & sCommand & vbCrLf & vbCrLf &_
			   "Response:" & vbCrLf & sStdOut & vbCrLf & vbCrLf &_
			   "StdErr:" & vbCrLf & sStdErr & vbCrLf & vbCrLf & vbCrLf
		tsDebug.Write(sMsg)
	End If
	
	If oExec.ExitCode <> 0 Then
		Message "The script was unable to end the synergy session successfully" & vbCrLf & vbCrLf &_
				"StdErr Output:" & vbCrLf & sStdErr, 0, sTitle
	End If
	
	bTryDisconnect = False
	
	ErrorCheck "disconnect"
End Sub



' ----------------------------------------------------------------------------------------------------------------------
'   SEARCH FOLDER - search a folder recursively for a given file name (including extension)
' ----------------------------------------------------------------------------------------------------------------------

Private Function SearchFolder(sFolder, sFileName, bCaseSensitive)
	
	sPath = ""
	
	Set oFolder = oFSO.GetFolder(sFolder)
	
	For Each oFile in oFolder.Files
		If oFile.Name = sFileName Or (bCaseSensitive = False And LCase(oFile.Name) = LCase(sFileName)) Then
			SearchFolder = oFile.Path
			Exit Function
		End If
	Next
	
	For Each oSubFolder in oFolder.SubFolders
		sPath = SearchFolder(oSubFolder.Path, sFileName, bCaseSensitive)
		If sPath <> "" Then
			SearchFolder = sPath
			Exit Function
		End If
	Next
	
	SearchFolder = sPath
	
End Function



' ----------------------------------------------------------------------------------------------------------------------
'   DISPLAY MESSAGE - display the passed message
' ----------------------------------------------------------------------------------------------------------------------

Private Sub Message(sMessage)
	
	If LCase(Right(WScript.FullName, 11)) = "cscript.exe" Then
		WScript.StdOut.Write(sMessage & vbCrLf)
	Else
		MsgBox sMessage, 0, sTitle
	End If
	
End Sub



' ----------------------------------------------------------------------------------------------------------------------
'   GET RESPONSE - prompt user with Y/N prompt and return response
' ----------------------------------------------------------------------------------------------------------------------

Private Function GetResponse(sMessage)
	
	If LCase(Right(WScript.FullName, 11)) = "cscript.exe" Then
		
		WScript.StdOut.Write(sMessage & vbCrLf & "(y/n): ")
		If LCase(WScript.StdIn.Read(1)) = "y" Then
			GetResponse = True
		Else
			GetResponse = False
		End If
		WScript.StdOut.Write(vbCrLf)
		
	Else
		
		If MsgBox(sMessage, 4, sTitle) = vbYes Then
			GetResponse = True
		Else
			GetResponse = False
		End If
		
	End If
	
End Function



' ----------------------------------------------------------------------------------------------------------------------
'   GET USER INPUT - get one line of user input
' ----------------------------------------------------------------------------------------------------------------------

Private Function GetLine(sMessage, sDefault)
	
	If LCase(Right(WScript.FullName, 11)) = "cscript.exe" Then
		WScript.StdOut.Write(sMessage & vbCrLf)
		GetLine = WScript.StdIn.ReadLine
	Else
		GetLine = InputBox(sMessage, sTitle, sDefault)
	End If
	
End Function


