DeviceFilePath = os.path.abspath((os.chdir(os.path.join(os.path.dirname(sys.argv[0]) + '\\..\\..\\AR202A_MicroCtrlrSuprt_Impl\\tools\\P1M\\R7F701311'))))
self_dbw.RunCmd('connect 850eserv2  -df="DR7F701311.DVF" -e1lpd4=11000 -RH850 -dclock=16000,0,swoff -noiop -id ffffffffffffffffffffffffffffffff -ip='+DeviceFilePath)

ret = winreg.GetProjectManagerWindow().YesNo("Do you want to flash option bytes?")
winreg.GetProjectManagerWindow().IconifyWindow(False,False)
if ret==True:
	self_dbw.RunCmd('target opbyte 0 0x7F8FFFFB')
	

