[Variables]
; -------------------------------------------------------------------------------
; VariablesData.inc is used to store variables for your app that are not user-specific or user-configurable.
; Variables in this document should be used to control the app's general functionality.
; -------------------------------------------------------------------------------

CopyActive=0

CopyCommand0=

CopyCommand1=[!SetClip "[#*Translation1*]"][!SetVariable NotificationText "Text copied to the clipboard" "Droptop\DropdownBar"][!CommandMeasure MeasureActionTimer "Execute 1" "Droptop\DropdownBar"][!UpdateMeter Notification "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"]

ListenCommand0=

ListenCommand1=[!CommandMeasure Script2 "Listen"]