#!/usr/bin/env bash
wpg -s $(cat ~/.config/bg)
~/.config/screenlayout.sh 
compton 
setxkbmap -layout us,de
setxkbmap -option 'grp:win_space_toggle' 
killall polybar
polybar default -r
wpg -s $(cat ~/.config/bg)
sleep 2
wpg -s $(cat ~/.config/bg)
sleep 20
wpg -s $(cat ~/.config/bg)
