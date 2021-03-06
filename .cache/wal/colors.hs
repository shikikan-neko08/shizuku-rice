--Place this file in your .xmonad/lib directory and import module Colors into .xmonad/xmonad.hs config
--The easy way is to create a soft link from this file to the file in .xmonad/lib using ln -s
--Then recompile and restart xmonad.

module Colors
    ( wallpaper
    , background, foreground, cursor
    , color0, color1, color2, color3, color4, color5, color6, color7
    , color8, color9, color10, color11, color12, color13, color14, color15
    ) where

-- Shell variables
-- Generated by 'wal'
wallpaper="/home/shikikan/wallpaper/shizuku.png"

-- Special
background="#1f2129"
foreground="#e9e7e7"
cursor="#e9e7e7"

-- Colors
color0="#1f2129"
color1="#9EB5C8"
color2="#A8C7D8"
color3="#BBDFEF"
color4="#BAE1F3"
color5="#DAC0C1"
color6="#D1CCD6"
color7="#e9e7e7"
color8="#a3a1a1"
color9="#9EB5C8"
color10="#A8C7D8"
color11="#BBDFEF"
color12="#BAE1F3"
color13="#DAC0C1"
color14="#D1CCD6"
color15="#e9e7e7"
