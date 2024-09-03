#!/bin/bash
source /etc/profile
. ~/.bash_profile

cd /Users/yuebinghui/Documents/program/github/note          
git add .
git commit -m "$(date)"

echo "my_cron_script当前时间：$(date)" >> /Users/yuebinghui/Documents/program/github/note/time.txt

