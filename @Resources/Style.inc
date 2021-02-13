[Rainmeter]
Update=100
BackgroundMode=2

@include1=#@#Variables.inc

SolidColor=#colorBackground#

[Variables]
;fontName="Accidental Presidency"
fontName="BigNoodleToo"
fontSizeMult=0.78

;general dimensions
paddingX=4
fullWidth=80

;Heights: 
;If you use a horizontal layout, you should change this to the same number!
fullHeightGeneric=90
fullHeightHDD=80
fullHeightTemp=47
fullHeightButton=36

;Alignements
titleX=(#fullWidth#/2)
titleW=#fullWidth#

tempY=42

valueX=(#fullWidth#-#paddingX#)

barPadding=(#paddingX#+3)
barX=#barPadding#
barY=64
barW=(#fullWidth#-(2*#barPadding#))
barH=12

abarX=#barX#
abarY=(#tempY#+6)
abarW=13
abarH=13

smallX=(#fullWidth#/2)
smallY=73
smallW=#fullWidth#
smallH=16

buttonW=38
buttonH=#buttonW#
buttonX=((#fullWidth#-#buttonW#)/2)
buttonY=4

;--------
; Styles
;--------

[styleTitle]
FontColor=#colorText#
FontSize=(Floor(43*#fontSizeMult#))
StringCase=None
StringStyle=Normal
StringEffect=None
FontFace=#fontName#
AntiAlias=1
ClipString=0

[styleValue]
StringAlign=Right
FontColor=#colorText#
FontSize=(Floor(20*#fontSizeMult#))
X=#valueX#
Y=#tempY#
StringCase=None
StringStyle=Normal
StringEffect=None
FontFace=#fontName#
AntiAlias=1
ClipString=0

[styleTemp]
FontColor=#colorText#
FontSize=(Floor(20*#fontSizeMult#))
X=#paddingX#
Y=#tempY#
StringCase=None
StringStyle=Normal
StringEffect=None
FontFace=#fontName#
AntiAlias=1
ClipString=0

[styleSmallCenter]
StringAlign=Center
FontColor=#colorText#
FontSize=(Floor(15*#fontSizeMult#))
X=#smallX#
Y=#smallY#
W=#smallW#
H=#smallH#
StringCase=None
StringStyle=Normal
StringEffect=None
FontFace=#fontName#
AntiAlias=1
ClipString=0

[styleBar]
BarColor=#colorBar#
BarOrientation=HORIZONTAL
SolidColor=#colorBarBackground#
X=#barX#
Y=#barY#
W=#barW#
H=#barH#

[styleAccessBar]
SolidColor=#hddLedColor#
X=#abarX#
Y=#abarY#
W=#abarW#
H=#abarH#

[styleBg]
X=0
Y=0
W=#fullWidth#
H=(#fullHeightGeneric#)
SolidColor=#colorBackground#
MouseOverAction=[!SetOption meterBg Solidcolor #colorHoverBackground#]
MouseLeaveAction=[!SetOption meterBg Solidcolor #colorBackground#]

[styleButton]
StringAlign=Center
X=#buttonX#
Y=#buttonY#
W=#buttonW#
H=#buttonH#

ImageName=#CURRENTPATH#Button.png
Tile=0
PreserveAspectRatio=1
leftmouseupaction=[!RefreshApp][!CommandMeasure MeasureButton "Run"]