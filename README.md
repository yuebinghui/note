# note
考研学习笔记

crontab -l 展示
crontab -e 编辑
crontab -r 删除

```
*/2 * * * * /bin/bash /Users/yuebinghui/Documents/program/github/note/my_cron_script.sh > /Users/yuebinghui/Documents/program/github/note/logfile 2>&1
*/4 * * * * /bin/bash /Users/yuebinghui/Documents/program/github/note/my_cron_script2.sh > /Users/yuebinghui/Documents/program/github/note/logfile 2>&1

*/20 * * * * /bin/bash /Users/yuebinghui/Documents/program/github/note/my_cron_script.sh > /Users/yuebinghui/Documents/program/github/note/logfile 2>&1

*/20 * * * * /bin/bash /Users/yuebinghui/Documents/program/github/note/my_cron_script.sh > /Users/yuebinghui/Documents/program/github/note/logfile 2>&1

```



my_cron_script.sh的文件内容
```sh
#!/bin/bash
cd /Users/yuebinghui/Documents/program/github/note          
git add .

source /etc/profile
. ~/.bash_profile

echo "当前时1111间：$(date)" >> /Users/yuebinghui/Documents/program/github/note/time.txt

```