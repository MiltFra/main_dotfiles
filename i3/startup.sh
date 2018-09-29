#!/usr/bin/env bash
setxkbmap -layout us,de
setxkbmap -option 'grp:win_space_toggle'
i3-msg "workspace 2:shell; append_layout ~/.config/i3/ws2v2.json" 
termite --name "htop" -e "htop" &
termite --name "ranger" -e ranger &
sleep 1
termite -c "wal -R" &
termite &
code-oss &
firefox &
thunderbird &
spotify &
polybar -r default & 
sleep 40
wpg -s $(cat ~/.config/bg)
