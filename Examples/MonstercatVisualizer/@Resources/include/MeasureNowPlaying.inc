[MeasureState]
Measure=Plugin
Plugin=NowPlaying
PlayerName=#PlayerName#
PlayerType=State
UpdateDivider=10

[MeasureStateButton]
Measure=Plugin
Plugin=NowPlaying
PlayerName=#PlayerName#
PlayerType=STATE
Substitute="0":"Play","1":"Pause","2":"Play"

[MeasureTrack]
Measure=Plugin
Plugin=NowPlaying
PlayerName=#PlayerName#
PlayerType=TITLE
Substitute="":"#NoTrackNameText#"
UpdateDivider=100

[MeasureArtist]
Measure=Plugin
Plugin=NowPlaying
PlayerName=#PlayerName#
PlayerType=ARTIST
Substitute="":"#NoArtistNameText#"
UpdateDivider=100

[MeasureCover]
Measure=Plugin
Plugin=NowPlaying
PlayerName=#PlayerName#
PlayerType=COVER
Substitute="":"#@#images\nocover.png"
UpdateDivider=50

[MeasureCoverAbs]
Measure=Plugin
Plugin=NowPlaying
PlayerName=#PlayerName#
PlayerType=COVER
Substitute="":"#@#images\nocover.png"
UpdateDivider=50

[MeasurePosition]
Measure=Plugin
Plugin=NowPlaying
PlayerName=#PlayerName#
PlayerType=Position

;Redundant, just here to fix a spotify related bug
[MeasurePositionDec]
Measure=Calc
Formula=MeasurePosition
DynamicVariables=1

[MeasureDuration]
Measure=Plugin
Plugin=NowPlaying
PlayerName=#PlayerName#
PlayerType=DURATION
UpdateDivider=10

[MeasureProgress]
Measure=Plugin
Plugin=NowPlaying
PlayerName=#PlayerName#
PlayerType=Progress

[MeasureAutoHideNowPlaying]
Measure=Plugin
Plugin=NowPlaying
PlayerName=#PlayerName#
PlayerType=STATE
IfBelowValue=1
IfBelowAction=[!HideFade][!HideFade "#ROOTCONFIG#\Song Information"]
IfEqualValue=1
IfEqualAction=[!ShowFade][!ShowFade "#ROOTCONFIG#\Song Information"]
IfAboveValue=1
IfAboveAction=[!ShowFade][!ShowFade "#ROOTCONFIG#\Song Information"]
Disabled=#DisableAutoHide#
UpdateDivider=100
