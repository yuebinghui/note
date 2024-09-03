#!/bin/bash
source /etc/profile
. ~/.bash_profile

cd /Users/yuebinghui/Documents/program/github/note          
git add .
git commit -m "$(date)"
git push

echo "当前时间：$(date)" >> /Users/yuebinghui/Documents/program/github/note/time.txt

