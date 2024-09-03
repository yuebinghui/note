#!/bin/bash
source /etc/profile
. ~/.bash_profile

cd /Users/yuebinghui/Documents/program/github/note          
git push git@github.com:yuebinghui/note.git dev/1.0.0

echo "git push当前时间：$(date)" >> /Users/yuebinghui/Documents/program/github/note/time_my_cron_script2.txt

