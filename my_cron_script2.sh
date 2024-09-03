#!/bin/bash
source /etc/profile
. ~/.bash_profile

cd /Users/yuebinghui/Documents/program/github/note          
git push

echo "git push当前时间：$(date)" >> /Users/yuebinghui/Documents/program/github/note/time.txt

