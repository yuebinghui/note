首先需要根据模式串的值，求出与之模式串相对应的next数组，接下来，再基于next数组对模式串进行匹配

![image-20230925171822896](/Users/yuebinghui/Documents/program/github/note/images/image-20230925171822896.png)

## 手算next数组的方法

next[1]的含义就是   当模式串的第一个字符发生匹配失败的时候，模式串指针j应该指向什么位置

![image-20230925172445086](/Users/yuebinghui/Documents/program/github/note/images/image-20230925172445086.png)

![image-20230925172504511](/Users/yuebinghui/Documents/program/github/note/images/image-20230925172504511.png)

![image-20230925172512984](/Users/yuebinghui/Documents/program/github/note/images/image-20230925172512984.png)

![image-20230925172521567](/Users/yuebinghui/Documents/program/github/note/images/image-20230925172521567.png)

![image-20230925172529966](/Users/yuebinghui/Documents/program/github/note/images/image-20230925172529966.png)

![image-20230925172544030](/Users/yuebinghui/Documents/program/github/note/images/image-20230925172544030.png)

![image-20230925172633928](/Users/yuebinghui/Documents/program/github/note/images/image-20230925172633928.png)

![image-20230925172646762](/Users/yuebinghui/Documents/program/github/note/images/image-20230925172646762.png)

![image-20230925172654751](/Users/yuebinghui/Documents/program/github/note/images/image-20230925172654751.png)

## 所以next[1]都是0

![image-20230925172709042](/Users/yuebinghui/Documents/program/github/note/images/image-20230925172709042.png)

![image-20230925172817564](/Users/yuebinghui/Documents/program/github/note/images/image-20230925172817564.png)

## 接下来求next[2]的值



next[2]的含义就是   当模式串的第二个字符发生匹配失败的时候，模式串指针j应该指向什么位置

![image-20230925172925199](/Users/yuebinghui/Documents/program/github/note/images/image-20230925172925199.png)

![image-20230925173035765](/Users/yuebinghui/Documents/program/github/note/images/image-20230925173035765.png)

![image-20230925173144147](/Users/yuebinghui/Documents/program/github/note/images/image-20230925173144147.png)

## 接下来求next[3]的值

![image-20230925173348110](/Users/yuebinghui/Documents/program/github/note/images/image-20230925173348110.png)

能不能匹配的上

![image-20230925173507671](/Users/yuebinghui/Documents/program/github/note/images/image-20230925173507671.png)

![image-20230925173703556](/Users/yuebinghui/Documents/program/github/note/images/image-20230925173703556.png)

![image-20230925173824030](/Users/yuebinghui/Documents/program/github/note/images/image-20230925173824030.png)

## 接下来求next[4]的值

next[4]的含义就是   当模式串的第四个字符发生匹配失败的时候，模式串指针j应该指向什么位置

![image-20230925174014392](/Users/yuebinghui/Documents/program/github/note/images/image-20230925174014392.png)

![image-20230925174227834](/Users/yuebinghui/Documents/program/github/note/images/image-20230925174227834.png)

![image-20230925174350896](/Users/yuebinghui/Documents/program/github/note/images/image-20230925174350896.png)

## 接下来求next[5]的值

next[5]的含义就是   当模式串的第五个字符发生匹配失败的时候，模式串指针j应该指向什么位置

![image-20230925174419373](/Users/yuebinghui/Documents/program/github/note/images/image-20230925174419373.png)

![image-20230925174814555](/Users/yuebinghui/Documents/program/github/note/images/image-20230925174814555.png)

![image-20230925174835647](/Users/yuebinghui/Documents/program/github/note/images/image-20230925174835647.png)

![image-20230925174848588](/Users/yuebinghui/Documents/program/github/note/images/image-20230925174848588.png)

![image-20230925174943777](/Users/yuebinghui/Documents/program/github/note/images/image-20230925174943777.png)

## 接下来求next[6]的值

next[6]的含义就是   当模式串的第六个字符发生匹配失败的时候，模式串指针j应该指向什么位置

![image-20230925175001607](/Users/yuebinghui/Documents/program/github/note/images/image-20230925175001607.png)

![image-20230925175409822](/Users/yuebinghui/Documents/program/github/note/images/image-20230925175409822.png)

## 使用next数组

![image-20230925175534483](/Users/yuebinghui/Documents/program/github/note/images/image-20230925175534483.png)

![image-20230925180014266](/Users/yuebinghui/Documents/program/github/note/images/image-20230925180014266.png)

![image-20230925180037044](/Users/yuebinghui/Documents/program/github/note/images/image-20230925180037044.png)

![image-20230925180114396](/Users/yuebinghui/Documents/program/github/note/images/image-20230925180114396.png)

![image-20230925180146494](/Users/yuebinghui/Documents/program/github/note/images/image-20230925180146494.png)

![image-20230925180156980](/Users/yuebinghui/Documents/program/github/note/images/image-20230925180156980.png)

![image-20230925180327736](/Users/yuebinghui/Documents/program/github/note/images/image-20230925180327736.png)

![image-20230925180343074](/Users/yuebinghui/Documents/program/github/note/images/image-20230925180343074.png)

![image-20230925180426567](/Users/yuebinghui/Documents/program/github/note/images/image-20230925180426567.png)

![image-20230925180456639](/Users/yuebinghui/Documents/program/github/note/images/image-20230925180456639.png)

![image-20230925180522935](/Users/yuebinghui/Documents/program/github/note/images/image-20230925180522935.png)

## 习题

![image-20230925182423125](/Users/yuebinghui/Documents/program/github/note/images/image-20230925182423125.png)

![image-20230925182518365](/Users/yuebinghui/Documents/program/github/note/images/image-20230925182518365.png)

![image-20230925182615800](/Users/yuebinghui/Documents/program/github/note/images/image-20230925182615800.png)

![image-20230925182728120](/Users/yuebinghui/Documents/program/github/note/images/image-20230925182728120.png)

## 另一个习题

![image-20230925183136622](/Users/yuebinghui/Documents/program/github/note/images/image-20230925183136622.png)

![image-20230925183156933](/Users/yuebinghui/Documents/program/github/note/images/image-20230925183156933.png)

![image-20230925183313373](/Users/yuebinghui/Documents/program/github/note/images/image-20230925183313373.png)