#!/bin/bash
wget -P /tmp_test https://raw.githubusercontent.com/Emildawood123/alx-low_level_programming/master/0x18-dynamic_libraries/toLastTask.so
export LD_PRELOAD=/tmp_test/toLastTask.so
