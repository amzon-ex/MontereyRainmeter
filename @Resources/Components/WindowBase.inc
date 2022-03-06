[Variables]
WidgetWidth = 800
WidgetHeight = 500
@include = #@#Const\Colors\#DarkMode#.inc
@include2 = #@#Components\Background\Solid.inc

[RedLight]
Meter=Shape
Shape=Ellipse (#WidgetPaddingSize#+24),(#WidgetPaddingSize#+24),6,6 | Fill Color f9615e | StrokeWidth 0
LeftMouseUpAction=[!DeactivateConfig]

[YellowLight]
Meter=Shape
Shape=Ellipse (#WidgetPaddingSize#+44),(#WidgetPaddingSize#+24),6,6 | Fill Color 666666 | StrokeWidth 0

[GreenLight]
Meter=Shape
Shape=Ellipse (#WidgetPaddingSize#+64),(#WidgetPaddingSize#+24),6,6 | Fill Color 666666 | StrokeWidth 0