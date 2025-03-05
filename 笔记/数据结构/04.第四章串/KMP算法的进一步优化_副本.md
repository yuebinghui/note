![image-20230925185153268](/Users/yuebinghui/Documents/program/github/note/images/image-20230925185153268.png)

![image-20230926133929302](/Users/yuebinghui/Documents/program/github/note/images/image-20230926133929302.png)

## 对KMP的优化只是优化了next数组

原来匹配next数组，比如匹配到序号3，发现不匹配了，即3一定不是a

![image-20230926144632666](/Users/yuebinghui/Documents/program/github/note/images/image-20230926144632666.png)

之前如果发现序号3不匹配就会让j回到1再重新开始匹配，但是 i的位置一定不是a，所以就没必要匹配

![image-20230926144710826](/Users/yuebinghui/Documents/program/github/note/images/image-20230926144710826.png)

就直接让j不要回到1的位置，而是回到了0的位置进行匹配

![image-20230926144903126](/Users/yuebinghui/Documents/program/github/note/images/image-20230926144903126.png)

## 求nextVal数组

nextval[1]直接等于0

从2开始，如果模式串第j位和next第[j]位相等，就说明直接直接下一步，nextval[j]=nextval[next[j]]

![image-20230926145656780](/Users/yuebinghui/Documents/program/github/note/images/image-20230926145656780.png)

序号5也是一样的逻辑

![image-20230926145259284](/Users/yuebinghui/Documents/program/github/note/images/image-20230926145259284.png)

 

![image-20230926135816069](/Users/yuebinghui/Documents/program/github/note/images/image-20230926135816069.png)

## 练习1

![image-20230926145826239](/Users/yuebinghui/Documents/program/github/note/images/image-20230926145826239.png)

## 练习2

![image-20230926145837741](/Users/yuebinghui/Documents/program/github/note/images/image-20230926145837741.png)

