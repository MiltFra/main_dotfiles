#!/usr/bin/env bash
~/.config/screenlayout.sh 
feh -bg-fill ~/dotfiles/wallpapers/bg.jpg &
compton 
setxkbmap -layout us,de
setxkbmap -option 'grp:win_space_toggle' 