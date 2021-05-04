#cs ----------------------------------------------------------------------------

 AutoIt Version: 3.3.14.5
 Author:         myName

 Script Function:
	Template AutoIt script.

#ce ----------------------------------------------------------------------------

; Script Start - Add your code below here
#include <MsgBoxConstants.au3>

For $i = 5 To 1 Step -1
    MsgBox($MB_SYSTEMMODAL, "", "Count down!" & @CRLF & $i)
Next
MsgBox($MB_SYSTEMMODAL, "", "Blast Off!")