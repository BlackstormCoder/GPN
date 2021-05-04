#cs ----------------------------------------------------------------------------

 AutoIt Version: 3.3.14.5
 Author:         myName

 Script Function:
	Template AutoIt script.

#ce ----------------------------------------------------------------------------

; Script Start - Add your code below here
#include <MsgBoxConstants.au3>

Local $iNumber = 25

If $iNumber > 0 Then
    MsgBox($MB_SYSTEMMODAL, "Example", "$iNumber was positive!")
ElseIf $iNumber < 0 Then
    MsgBox($MB_SYSTEMMODAL, "Example", "$iNumber was negative!")
Else
    MsgBox($MB_SYSTEMMODAL, "Example", "$iNumber was zero.")
EndIf