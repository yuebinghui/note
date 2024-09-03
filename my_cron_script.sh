#!/bin/bash
source /etc/profile
. ~/.bash_profile

cd /Users/yuebinghui/Documents/program/github/note          
git add .
git commit -m "$(date)"

echo "git commit 当前时间：$(date)" >> /Users/yuebinghui/Documents/program/github/note/time_my_cron_script.txt

