#!/bin/sh
dunst &
setxkbmap -layout us,ru -option 'grp:ctrl_shift_toggle' &
xset r rate 250 30 &
exec i3
