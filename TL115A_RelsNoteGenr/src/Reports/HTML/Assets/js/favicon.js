/* This file allows me to embed the Nexteer X logo as a favicon image. */

var favIcon = "\
AAABAAEAEBAAAAEAGABoAwAAFgAAACgAAAAQAAAAIAAAAAEAGAAAAAAAAAAAABMLAAATCwAAAAAA\
AAAAAADZ1PpEJ+f///////92Ye03GeU3GeU3GeU3GeU3GeU3GeU3GeU3GeU3GeU3GeU3GeX///9d\
ROq0qPX///+0qPU3GeU3GeU3GeU3GeU3GeU3GeU3GeU3GeU3GeU3GeU3GeX///+0qPVdROr////y\
8f03GeU3GeVEJ+fAt/fNxfjNxfjNxfjNxfibjPI3GeU3GeXm4vz///9QNui0qPX///+CcO83GeW0\
qPX///////////////////9pU+w3GeU3GeVpU+z////NxfhEJ+fy8f3m4vxQNuj/////////////\
///////Nxfg3GeU3GeU3GeU3GeWbjPL///+PfvB2Ye3////m4vz///////////////////9pU+w3\
GeU3GeU3GeU3GeU3GeW0qPX///9dROqbjPL////////////////////Nxfg3GeU3GeU3GeU3GeU3\
GeU3GeU3GeW0qPXy8f1dROq0qPX///////////////9pU+w3GeU3GeU3GeU3GeU3GeU3GeU3GeU3\
GeW0qPXy8f1dROqPfvD////////Nxfg3GeU3GeU3GeU3GeU3GeU3GeU3GeU3GeU3GeWbjPL////y\
8f2CcO9pU+zm4vzAt/c3GeU3GeU3GeU3GeU3GeU3GeU3GeU3GeVEJ+fy8f3////////////At/dQ\
NuibjPLAt/dpU+w3GeU3GeU3GeU3GeU3GeU3GeWbjPL////////////////////Nxfi0qPVQNuh2\
Ye2bjPKPfvBpU+w3GeU3GeVEJ+fy8f3////////////////Nxfg3GeVEJ+eCcO+bjPKCcO9pU+xQ\
Nug3GeU3GeVdROqbjPKbjPKbjPKbjPKbjPJEJ+c3GeU3GeU3GeU3GeU3GeVQNuhpU+w3GeU3GeU3\
GeU3GeU3GeU3GeU3GeU3GeU3GeU3GeU3GeU3GeU3GeU3GeU3GeU3GeU3GeU3GeU3GeU3GeU3GeU3\
GeU3GeU3GeU3GeU3GeU3GeU3GeU3GeU3GeU3GeU3GeUAAK4BAACAPgAAAAAAAAAAAAAAAAAAAAAA\
AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";

var docHead = document.getElementsByTagName('head')[0];
var newLink = document.createElement('link');
newLink.rel = 'shortcut icon';
newLink.href = 'data:image/png;base64,'+favIcon;
docHead.appendChild(newLink);

/* End of File: favicon.js */