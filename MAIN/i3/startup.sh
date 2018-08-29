#!/usr/bin/env bash
setxkbmap -layout us,de
setxkbmap -option 'grp:win_space_toggle'
wal -R
i3-msg "workspace 2:shell; append_layout ~/.config/i3/ws2.json" 
termite --name "update" -e "tty-clock -scDa 100000000 -C 2" &
termite --name "terminal" -e fish &
termite --name "ranger" -e ranger &
wal -R
code-oss &
firefox &
thunderbird &
spotify &
polybar -r default 
sleep 9
wal -R