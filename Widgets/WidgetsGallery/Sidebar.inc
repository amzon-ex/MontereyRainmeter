[Variables]
SidebarWidth=160

[BackgroundMeter]
Shape=Rectangle 0,0,#WidgetWidth#,#WidgetHeight#,#WidgetBorderRadius# | Fill Color #BackgroundColor# | Stroke Color 808080
OnUpdateAction=[!SetOption #Tab# SolidColor "#ForegroundColor#20"]

[SidebarMeter]
Meter=Shape
Shape=Rectangle 0,0,#SidebarWidth#,#WidgetHeight#,#WidgetBorderRadius# | Fill Color 80808040 | Stroke Color 808080
Shape2=Rectangle (#SidebarWidth#/2),0,(#SidebarWidth#/2),#WidgetHeight#
Shape3=Combine Shape | Union Shape2
Padding = #WidgetPaddingSize#,#WidgetPaddingSize#,#WidgetPaddingSize#,#WidgetPaddingSize#
UpdateDivider=-1

[MenuItem]
Meter=String
AntiAlias=1
FontFace=#FontFace#
FontSize=(#SidebarWidth#*0.07)
FontColor=#ForegroundColor#
Y=(#WidgetPaddingSize#+45)
X=#WidgetPaddingSize#
W=(#SidebarWidth#-60)
Padding=44,8,16,8

[Welcome]
Meter=String
MeterStyle=MenuItem
Text=#Welcome#
Y=(#WidgetPaddingSize#+45)
LeftMouseUpAction=[!WriteKeyValue Variables Tab "Welcome" "#@#Settings.inc"][!Refresh]

[WelcomeIcon]
Meter=Image
ImageName=#@#Images\Icons\Welcome.png
ImageTint=#ForegroundColor#
Y=(#WidgetPaddingSize#+52)
X=(#WidgetPaddingSize#+18)
W=(#SidebarWidth#*0.12)

[Settings]
Meter=String
MeterStyle=MenuItem
Text=#Settings#
Y=(#WidgetPaddingSize#+80)
LeftMouseUpAction=[!WriteKeyValue Variables Tab "Settings" "#@#Settings.inc"][!Refresh]

[SettingsIcon]
Meter=Image
MeterStyle=WelcomeIcon
ImageName=#@#Images\Icons\Settings.png
Y=(#WidgetPaddingSize#+87)

[About]
Meter=String
MeterStyle=MenuItem
Text=#About#
Y=(#WidgetPaddingSize#+115)
LeftMouseUpAction=[!WriteKeyValue Variables Tab "About" "#@#Settings.inc"][!Refresh]

[AboutIcon]
Meter=Image
MeterStyle=WelcomeIcon
ImageName=#@#Images\Icons\About.png
Y=(#WidgetPaddingSize#+122)

[WidgetsGroup]
Meter=String
Text=#Widgets#
StringCase=Upper
AntiAlias=1
FontFace=#FontFace#
FontSize=(#SidebarWidth#*0.05)
FontWeight=800
FontColor=#ForegroundColor#80
Y=(#WidgetPaddingSize#+150)
X=#WidgetPaddingSize#
W=(#SidebarWidth#-32)
Padding=16,8,16,8

[Clock]
Meter=String
MeterStyle=MenuItem
Text=#Clock#
Y=(#WidgetPaddingSize#+180)
LeftMouseUpAction=[!WriteKeyValue Variables Tab "Clock" "#@#Settings.inc"][!Refresh]

[ClockIcon]
Meter=Image
ImageName=#@#Images\Icons\Clock.png
Y=(#WidgetPaddingSize#+188)
X=(#WidgetPaddingSize#+18)
W=(#SidebarWidth#*0.12)

[Calendar]
Meter=String
MeterStyle=MenuItem
Text=#Calendar#
Y=(#WidgetPaddingSize#+215)
LeftMouseUpAction=[!WriteKeyValue Variables Tab "Calendar" "#@#Settings.inc"][!Refresh]

[CalendarIcon]
Meter=Image
MeterStyle=ClockIcon
ImageName=#@#Images\Icons\Calendar.png
Y=(#WidgetPaddingSize#+222)

[ActivityMonitor]
Meter=String
MeterStyle=MenuItem
Text=#ActivityMonitor#
Y=(#WidgetPaddingSize#+250)
LeftMouseUpAction=[!WriteKeyValue Variables Tab "ActivityMonitor" "#@#Settings.inc"][!Refresh]

[ActivityMonitorIcon]
Meter=Image
MeterStyle=ClockIcon
ImageName=#@#Images\Icons\ActivityMonitor.png
Y=(#WidgetPaddingSize#+258)

[Weather]
Meter=String
MeterStyle=MenuItem
Text=#Weather#
Y=(#WidgetPaddingSize#+285)
LeftMouseUpAction=[!WriteKeyValue Variables Tab "Weather" "#@#Settings.inc"][!Refresh]

[WeatherIcon]
Meter=Image
MeterStyle=ClockIcon
ImageName=#@#Images\Icons\Weather.png
Y=(#WidgetPaddingSize#+292)