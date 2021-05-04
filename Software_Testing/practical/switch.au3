#cs ----------------------------------------------------------------------------

 AutoIt Version: 3.3.14.5
 Author:         myName

 Script Function:
	Template AutoIt script.

#ce ----------------------------------------------------------------------------

; Script Start - Add your code below here
#include <MsgBoxConstants.au3>

Local $sMsg = ""

Switch @HOUR
    Case 6 To 11
        $sMsg = "Good Morning"
    Case 12 To 17
        $sMsg = "Good Afternoon"
    Case 18 To 21
        $sMsg = "Good Evening"
    Case Else
        $sMsg = "What are you still doing up?"
EndSwitch

MsgBox($MB_SYSTEMMODAL, "", $sMsg)
