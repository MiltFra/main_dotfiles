#!/usr/bin/env bash
setxkbmap -layout us,de
setxkbmap -option 'grp:win_space_toggle'
i3-msg "workspace 2:shell; append_layout ~/.config/i3/ws2v2.json" 
termite --name "htop" -e "vis" &
termite --name "ranger" -e ranger &
sleep 1
termite &
termite &
code-oss &
polybar -r default & 
/home/vrelda/.config/wpg/wp_init.sh
