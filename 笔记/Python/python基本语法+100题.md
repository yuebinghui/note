差不多得了，已经休息了

## windows命令

## 什么是编程语言

用于人类和计算机进行交流的一种语言，
通过编写编程语言的代码，去指挥计算机工作。
它无法直接和计算机沟通，需要翻译工具（解释器或编译器）将代码翻译成二进制，从而实现和计算机的畅顺沟通

## 第一个Python程序

windows系统
打开CMD（命令提示符）程序，输入Python并回车，然后会出现>>>，然后在里面输入代码回车即可立即执行
比如print("Hello World!!! ")

## Python解释器_JvvSPyDa

退出Python解释器，输入：       exit()即可

## Python 开发环境_7i49DGRD



## PyCharm 快捷键_N20cqtMU



## 字面量_LJDnDY7o

```python
# 这就是字面量
666
13.14
"hello world"

# 下载print()的括号里面的也是字面量
print(666)
print(13.14)
print("hello world")
```

 

## 注释_jls4gdqV

#这个是单行注释



## 变量_aAcDVY9f

```python

# 变量名后面直接+等号，然后复制即可
money = 50
print("钱包还有：",money)

money -= 10 # money = money - 10

print("买了冰淇淋花费 10 元，还剩",money,"元")

```

## 数据类型_JCVuF5uV

### type()语句

```python
# 方式1： 使用print直接输出类型信息
print(type("黑马程序员"))
print(type(666))
print(type(11.345))
print("=====")

# 方式2： 使用变量存储type()语句的结果
string_type = type("黑马程序员")
int_type = type(666)
float_type = type(11.345)
print(string_type)
print(int_type)
print(float_type)
print("=====")

# 方式3： 使用type()语句，查看变量中存储的数据类型信息
name = "ybh"
name_type = type(name)
print(name_type)
```

## 数据类型转换_QC5cDkkw

```python
# 将数字类型转换成字符串
num_str = str(11)
print(type(num_str), num_str)

float_str = str(11.345)
print(type(float_str), float_str)

# 将字符串转换成数字
num = int("11")
print(type(num), num)

num2 = float("11.345")
print(type(num2), num2)

# 错误示例，想要将字符串转换成数字，必须要求字符串内的内容都是数字
#num3 = int("黑马程序员")
#print(type(num3), num3)

# 整数转浮点数
float_num = float(11)
print(type(float_num), float_num) # 多了个.0

# 浮点数转整数
int_num = int(11.345)
print(type(int_num), int_num) # 精度丢失，直接剩下11了
```



## 标识符_yOHfCQqp

```python
# 规则1：内容限定，限定只能使用：中文、英文、数字、下划线，注意：不能以数字开头
# 错误的代码示范：1_name = "张三"
# 错误的代码示范：name_! = "张三"
name_ = "张三"
_name = "张三"
name_1 = "张三"

# 规则2：大小写敏感
Itheima = "黑马程序员"
itheima = 666
print(Itheima)
print(itheima)

# 规则3：不可使用关键字
# 错误的示例，使用了关键字：class = 1
# 错误的示例，使用了关键字：def = 1
Class = 1 # 但是大写Class却可以，因为大小写敏感
```

## 运算符_C28IY25I

```python
"""
演示Python中的各类运算符
"""
# 算术（数学）运算符
print("1 + 1 = ", 1 + 1)
print("2 - 1 = ", 2 - 1)
print("3 * 3 = ", 3 * 3)
print("4 / 2 = ", 4 / 2)
print("11 // 2 = ", 11 // 2)
print("9 % 2 = ", 9 % 2)
print("2 ** 2 = ", 2 ** 2)

# 赋值运算符

num = 1 + 2 * 3
print(num)

# 复合赋值运算符
# +=
num = 1
num += 1  # num = num + 1
print("num += 1: ", num)

num -= 1
print("num -= 1: ", num)

num *= 4
print("num *= 4: ", num)

num /= 2
print("num /= 2: ", num)

num = 3
num %= 2
print("num %= 2: ", num)

num **= 2 # 幂
print("num **=2: ", num)

num = 9 
num //= 2 #	整除
print("num //= 2:", num)
```

## 字符串的三种定义方式_QoZmOE7W

```python
"""
演示字符串的三种定义方式：
- 单引号定义法
- 双引号定义法
- 三引号定义法
"""

# 单引号定义法，使用单引号进行包围
name = '黑马程序员'
print(type(name))

# 双引号定义法
name = "黑马程序员"
print(type(name))

# 三引号定义法，写法和多行注释是一样的
name = """
我是
黑马
程序员
"""
print(type(name))
```

### 字符串的引号嵌套

```python
# 在字符串内 包含双引号
name = '"黑马程序员"'
print(name)

# 在字符串内 包含单引号
name = "'黑马程序员'"
print(name)

# 使用转义字符 \ 解除引号的效用
name = "\"黑马程序员\""
print(name)
name = "\'黑马程序员\'"
print(name)
```

## 字符串拼接_bzNQqSyz

```python
# 字符串字面量之间的拼接
print("学IT来黑马" + "月薪过万")

# 字符串字面量和字符串变量的拼接
name = "黑马程序员"
address = "建材城东路9号院"
tel = 4006189090
print("我是：" + name + "，我的地址是：" + address + "，我的电话是：" + tel)

"""
   这段代码运行会报错，因为变量tel是数字类型，无法直接和字符串拼接。
   把tel去掉不拼接就不报错了
"""
```

## 字符串格式化_b4Q86jOg

```python
# 通过占位的形式，完成拼接
name = "黑马程序员"
message = "学IT来：%s" % name
print(message)

# 通过占位的形式，完成数字和字符串的拼接
class_num = 57
avg_salary = 16781
message = "Python大数据学科，北京%s期，毕业平均工资：%s" % (class_num, avg_salary)
print(message)

name = "传智播客"
setup_year = 2006
stock_price = 19.99
message = "%s，成立于：%d，我今天的股价是：%f" % (name, setup_year, stock_price)
print(message) 
```

### 字符串格式化的精度控制

```python
num1 = 11
num2 = 11.345

print("数字11宽度限制5，结果是：%5d" % num1)
print("数字11宽度限制1，结果是：%1d" % num1)
print("数字11.345宽度限制7，小数精度2，结果是：%7.2f" % num2)
print("数字11.345不限制，小数精度2，结果是：%.2f" % num2)
```

### 字符串格式化 - 快速写法

```python
"""
演示第二种字符串格式化的方式：f"{占位}"
"""
name = "传智播客"
set_up_year = 2006
stock_price = 19.99
# f: format
print(f"我是{name}，我成立于：{set_up_year}年，我今天的股价是：{stock_price}")
```

### 字符串格式化 - 表达式的格式化

```python
"""
演示对表达式进行字符串格式化
"""
print("1 * 1 的结果是：%d" % (1 * 1))
print(f"1 * 2 的结果是：{1 * 2}")
print("字符串在Python中的类型名是：%s" % type("字符串"))
```

### 综合练习

```python
"""
讲解字符串格式化的课后练习题
"""
# 定义需要的变量
name = "传智播客"
stock_price = 19.99
stock_code = "003032" # 因为00这样的写法是8进制，所以不能写出数字，会报错，要写成字符串才行
# 股票价格每日增长因子
stock_price_daily_growth_factor = 1.2
growth_days = 7

finally_stock_price = stock_price * stock_price_daily_growth_factor ** growth_days

print(f"公司：{name}，股票代码：{stock_code}，当前股价：{stock_price}")
print("每日增长系数：%.1f，经过%d天的增长后，股价达到了：%.2f" % (stock_price_daily_growth_factor, growth_days, finally_stock_price))
```

## input语句（函数）_TWy4qMTn

```python
"""
演示Python的input语句
获取键盘的输入信息
"""
print("请告诉我你是谁？")
name = input()
print("我知道了，你是:%s" % name)
```

```python
"""
演示Python的input语句
获取键盘的输入信息
"""
name = input("请告诉我你是谁？")
print("我知道了，你是:%s" % name)

# 输入数字类型
num = input("请告诉我你的银行卡密码：")


# 数据类型转换
num = int(num)  # 如果不用数据类型转换的话，下面打印出来的是 <class 'str'>
print("你的银行卡密码的类型是：", type(num))
```

## 布尔类型_hsGU2Rrx



### 比较运算符

```python
"""
演示布尔类型的定义
以及比较运算符的应用
"""

# 定义变量存储布尔类型的数据
bool_1 = True
bool_2 = False

print(f"bool_1变量的内容是：{bool_1}，类型是：{type(bool_1)}")
print(f"bool_2变量的内容是：{bool_2}，类型是：{type(bool_2)}")

# 比较运算符的使用
# == , !=, >, <, >=, <=
# 演示进行内容的相等比较
num1 = 10
num2 = 10
print(f"10 == 10的结果是：{num1 == num2}")

num1 = 10
num2 = 15
print(f"10 != 15的结果是：{num1 != num2}")

name1 = "itcast"
name2 = "itheima"
print(f"itcast == itheima 结果是：{name1 == name2}")
```

## if判断语句_szhuzQkb

```python
age = input()
age = int(age)
if age >= 18:
    print("我已经成年了")
print("时间真快啊")
```

```python
"""
演示if elif else 多条件判断语句的使用
"""
height = int(input("请输入你的身高（cm）："))
vip_level = int(input("请输入你的VIP等级（1-5）："))
day = int(input("请告诉我今天几号："))

# 通过if判断，可以使用多条件判断的语法
# 第一个条件就是if
if height < 120:
    print("身高小于120cm，可以免费。")
elif vip_level > 3:
    print("vip级别大于3，可以免费。")
elif day == 1:
    print("今天是1号免费日，可以免费")
else:
    print("不好意思，条件都不满足，需要买票10元。")
    
    
    

# 还可以不用变量存，直接把height vip_level day 放到条件判断里
"""
    这样的话，只有进到这个条件才执行input，没进入条件判断就不用执行input
    避免上面一次性执行三个input的情况
"""

if int(input("请输入你的身高（cm）：")) < 120 :
    print("身高小于120cm，可以免费。")
elif int(input("请输入你的VIP等级（1-5）："))  > 3:
    print("vip级别大于3，可以免费。")
elif int(input("请告诉我今天几号：")) == 1:
    print("今天是1号免费日，可以免费")
else:
    print("不好意思，条件都不满足，需要买票10元。")

```

### 练习案例：猜猜心里数字

```python
"""
演示if elif else练习题：猜猜心里数字
"""
# 定义一个变量数字
num = 5

# 通过键盘输入获取猜想的数字，通过多次if 和 elif的组合进行猜想比较
if int(input("请猜一个数字：")) == num:
    print("恭喜第一次就猜对了呢")
elif int(input("猜错了，再猜一次：")) == num:
    print("猜对了")
elif int(input("猜错了，再猜一次：")) == num:
    print("恭喜，最后一次机会，你猜对了")
else:
    print("Sorry 猜错了")
```

### if elif else 综合案例

```python
# 1. 构建一个随机的数字变量
import random
num = random.randint(1, 10)

guess_num = int(input("输入你要猜测的数字："))

# 2. 通过if判断语句进行数字的猜测
if guess_num == num:
    print("恭喜，第一次就猜中了")
else:
    if guess_num > num:
        print("你猜测的数字大了")
    else:
        print("你猜测的数字小了")

    guess_num = int(input("再次输入你要猜测的数字："))

    if guess_num == num:
        print("恭喜，第二次猜中了")
    else:
        if guess_num > num:
            print("你猜测的数字大了")
        else:
            print("你猜测的数字小了")

        guess_num = int(input("第三次输入你要猜测的数字："))

        if guess_num == num:
            print("第三次猜中了")
        else:
            print("三次机会用完了，没有猜中。")
```

## while循环语句_46HfcWre

```python
i = 0

while i < 100:
    print(f"{i}:ceshi")
    i += 1

```

### 猜数字案例

```python
"""
演示while循环的基础案例 - 猜数字
"""
# 获取范围在1-100的随机数字
import random
num = random.randint(1, 100)
# 定义一个变量，记录总共猜测了多少次
count = 0

# 通过一个布尔类型的变量，做循环是否继续的标记
flag = True
while flag:
    guess_num = int(input("请输入你猜测的数字:"))
    count += 1
    if guess_num == num:
        print("猜中了")
        # 设置为False就是终止循环的条件
        flag = False
    else:
        if guess_num > num:
            print("你猜的大了")
        else:
            print("你猜的小了")

print(f"你总共猜测了{count}次")
```

### while循环的嵌套案例

#### 补充知识-print输出不换行

```python
# 这里world后没加end参数，所以打印有换行
print("hello", end="")
print("world")
```

```python
print("hello", end=" ")
print("world")

# 本来打印后是有一行空格的，加了end参数，这个空行就没了
print("hello", end="")
print("world", end="")
```

#### 补充知识-制表符\t

#### 练习案例-打印九九乘法表

```python
# i = 0
# j = 1
# while i < 9:
#     i += 1 # 只要把这个写到下面，那么就可以变成i=1，i<=9了
#     j = 1
#
#     while j <= i:
#         print(f"{j}*{i}={i * j}", end=" ")
#         j += 1
#     print("\n", end="")

"""
演示使用while的嵌套循环
打印输出九九乘法表
"""

# 定义外层循环的控制变量
i = 1
while i <= 9:
    # 定义内层循环的控制变量
    j = 1
    while j <= i:
        # 内层循环的print语句，不要换行，通过\t制表符进行对齐
        print(f"{j}*{i}={j * i}\t", end='')
        j += 1
    i += 1
    print()  # print空内容，就是输出一个换行
```

## for循环的基础语法_27WUfVaE

```python
name = "abcdefghijklmnopqrstuv"

for x in name:
    print(x)
```

### 案例

```python
name = "itheima is a brand of itcast"

count = 0
for x in name:
    if x == "a":
        count += 1

print(count)
```

## range语句_MrAyI9lC

```python
"""
演示Python中的range()语句的基本使用
"""

# range语法1 range(num)
# for x in range(10):
#     print(x)

# range 语法2 range(num1, num2)
# for x in range(5, 10):
#     # 从5开始，到10结束（不包含10本身）的一个数字序列，数字之间间隔是1
#     print(x)

# range 语法3 range(num1, num2, step)
for x in range(5, 10, 2):
    # 从5开始，到10结束（不包含10本身）的一个数字序列，数字之间的间隔是2
    print(x)
```

### 案例





## for循环的变量作用域_sbATvDu9

```python
"""
演示Python for循环临时变量的作用域
"""
for i in range(5):
    print(i)
print(i) # 能访问，但不推荐
```

```python
"""
演示Python for循环临时变量的作用域
"""
i = 0 # 这样定义下就可以正常访问了
for i in range(5):
    print(i)
print(i)  
```

## for循环的嵌套_nL29X7MD

```py
"""
演示for循环打印九九乘法表
"""

# 通过外层循环控制行数
for i in range(1, 10):
    # 通过内层循环控制每一行的数据
    for j in range(1, i + 1):
        # 在内层循环中输出每一行的内容
        print(f"{j} * {i} = {j * i}\t", end='')
    # 外层循环可以通过print输出一个回车符
    print()
```

## continue和break关键字_kBGHRkbO



## 循环综合案例_zu97Wf1l

```py
import random

money = 10000
# for循环对员工发放工资
for i in range(1, 21):
    score = random.randint(1, 10)

    if score < 5:
        print(f"员工{i}绩效分{score}，不满足，不发工资，下一位")
        # continue跳过发放
        continue

    # 要判断余额足不足
    if money >= 1000:
        money -= 1000
        print(f"员工{i}，满足条件发放工资1000，公司账户余额：{money}")
    else:
        print(f"余额不足，当前余额：{money}元，不足以发工资，不发了，下个月再来")
        # break结束发放
        break
```

## 函数_2mAwy0cG

```python
"""
演示：快速体验函数的开发及应用
"""
# 需求，统计字符串的长度，不使用内置函数len()
# 定义目标字符串
str1 = "itheima"
str2 = "itcast"
str3 = "python"

# 定义一个计数的变量
count = 0
for i in str1:
    count += 1
print(f"字符串{str1}的长度是：{count}")

count = 0
for i in str2:
    count += 1
print(f"字符串{str2}的长度是：{count}")

count = 0
for i in str3:
    count += 1
print(f"字符串{str3}的长度是：{count}")


# 可以使用函数，来优化这个过程
def my_len(data):
    count = 0
    for i in data:
        count += 1
    print(f"字符串{data}的长度是{count}")

my_len(str1)
my_len(str2)
my_len(str3)

```

```py
"""
演示函数的定义语法
"""

# 定义一个函数，输出相关信息
def say_hi():
    print("Hi 我是黑马程序员，学Python来黑马")

# 调用函数，让定义的函数开始工作
say_hi()
```

### 函数返回值之None类型 🌟 

```py
"""
演示特殊字面量：None
"""

# 无return语句的函数返回值
def say_hi():
    print("你好呀")

result = say_hi()
print(f"无返回值函数，返回的内容是：{result}")
print(f"无返回值函数，返回的内容类型是：{type(result)}")

# 主动返回None的函数
def say_hi2():
    print("你好呀")
    return None

result = say_hi2()
print(f"无返回值函数，返回的内容是：{result}")
print(f"无返回值函数，返回的内容类型是：{type(result)}")

# None用于if判断
def check_age(age):
    if age > 18:
        return "SUCCESS"
    else:
        return None

result = check_age(16)
if not result:
    # 进入if表示result是None值 也就是False
    print("未成年，不可以进入")
    
# None 用于声明无初始内容的变量
name = None
```

### 函数的说明文档

```py
"""
演示对函数进行文档说明
"""

# 定义函数，进行文档说明
def add(x, y):
    """
    add函数可以接收2个参数，进行2数相加的功能
    :param x: 形参x表示相加的其中一个数字
    :param y: 形参y表示相加的另一个数字
    :return: 返回值是2数相加的结果
    """
    result = x + y
    print(f"2数相加的结果是：{result}")
    return result
```

### 局部变量

```py
"""
演示在函数使用的时候，定义的变量作用域
"""

# 演示局部变量
def test_a():
    num = 100
    print(num)

test_a()

# 出了函数体，局部变量就无法使用了
# print(num)
```

### 全局变量

```py
# 演示全局变量
num = 200

def test_a():
    print(f"test_a: {num}")

def test_b():
    print(f"test_b: {num}")

test_a()
test_b()
print(num)
```

### 在函数内修改全局变量（这样不会改掉）

```py
# 在函数内修改全局变量
num = 200

def test_a():
    print(f"test_a: {num}")

def test_b():
    num = 500    # 局部变量
    print(f"test_b: {num}")

test_a()
test_b()
print(num)
```

### global关键字 🌟 

```py
# global关键字，在函数内声明变量为全局变量
num = 200

def test_a():
    print(f"test_a: {num}")

def test_b():
    global num    # 设置内部定义的变量为全局变量
    num = 500    # 修改全局变量的值
    print(f"test_b: {num}")

test_a()
test_b()
print(num)
```

## 综合案例：黑马ATM_K6NGmFaf

```py
"""
演示函数综合案例开发
"""

# 定义全局变量money name
money = 5000000
name = None
# 要求客户输入姓名
name = input("请输入您的姓名：")
# 定义查询函数
def query(show_header):
    if show_header:
        print("-------------查询余额------------")
    print(f"{name}，您好，您的余额剩余：{money}元")


# 定义存款函数
def saving(num):
    global money    # money在函数内部定义为全局变量
    money += num
    print("-------------存款------------")
    print(f"{name}，您好，您存款{num}元成功。")

    # 调用query函数查询余额
    query(False)

# 定义取款函数
def get_money(num):
    global money
    money -= num
    print("-------------取款------------")
    print(f"{name}，您好，您取款{num}元成功。")

    # 调用query函数查询余额
    query(False)
# 定义主菜单函数
def main():
    print("-------------主菜单------------")
    print(f"{name}，您好，欢迎来到黑马银行ATM。请选择操作：")
    print("查询余额\t[输入1]")
    print("存款\t\t[输入2]")
    print("取款\t\t[输入3]")    # 通过\t制表符对齐输出
    print("退出\t\t[输入4]")
    return input("请输入您的选择：")

# 设置无限循环，确保程序不退出
while True:
    keyboard_input = main()
    if keyboard_input == "1":
        query(True)
        continue    # 通过continue继续下一次循环，一进来就是回到了主菜单
    elif keyboard_input == "2":
        num = int(input("您想要存多少钱？请输入："))
        saving(num)
        continue
    elif keyboard_input == "3":
        num = int(input("您想要取多少钱？请输入："))
        get_money(num)
        continue
    else:
        print("程序退出啦")
        break       # 通过break退出循环

```

## 数据容器_Z0tqpbaT

### 列表

```py
"""
演示数据容器之：list列表
语法：[元素，元素，....]
"""

# 定义一个列表 list
my_list = ["itheima", "itcast", "python"]
print(my_list)
print(type(my_list))

my_list = ["itheima", 666, True]
print(my_list)
print(type(my_list))
```

### 列表的下标（索引）

### 列表的下标（索引）- 反向  🌟 

### 嵌套列表的下标（索引）

```py
# 通过下标索引取出对应位置的数据
my_list = ["Tom", "Lily", "Rose"]
# 列表[下标索引]，从前向后从0开始，每次+1， 从后向前从-1开始，每次-1
print(my_list[0])
print(my_list[1])
print(my_list[2])
# 错误示范：通过下标索引取出数据，一定不要超出范围
# print(my_list[3])

# 通过下标索引取出数据（倒序取出）
print(my_list[-1])
print(my_list[-2])
print(my_list[-3])

# 取出嵌套列表的元素
my_list = [[1, 2, 3], [4, 5, 6]]
print(my_list[1][1])
```

## 列表的常用操作（方法）_4kVwSwKa 🌟 

### 查找某元素的下标

```py
"""
演示数据容器之：list列表的常用操作
"""
mylist = ["itcast", "itheima", "python"]
# 1.1 查找某元素在列表内的下标索引
index = mylist.index("itheima")
print(f"itheima在列表中的下标索引值是：{index}")
# 1.2如果被查找的元素不存在，会报错
# index = mylist.index("hello")
# print(f"hello在列表中的下标索引值是：{index}")
```

### 修改特定位置（索引）的元素值：

```py
"""
演示数据容器之：list列表的常用操作
"""
mylist = ["itcast", "itheima", "python"]
# 2. 修改特定下标索引的值
mylist[0] = "传智教育"
print(f"列表被修改元素值后，结果是：{mylist}")
```

### 插入元素：

```py
"""
演示数据容器之：list列表的常用操作
"""
mylist = ["itcast", "itheima", "python"]
# 3. 在指定下标位置插入新元素
mylist.insert(1, "best")
print(f"列表插入元素后，结果是：{mylist}")		
```

### 追加元素：

```py
"""
演示数据容器之：list列表的常用操作
"""
mylist = ["itcast", "itheima", "python"]

# 4. 在列表的尾部追加```单个```新元素
mylist.append("黑马程序员")
print(f"列表在追加了元素后，结果是：{mylist}")
```

### 追加元素方式2：

```py
"""
演示数据容器之：list列表的常用操作
"""
mylist = ["itcast", "itheima", "python"]

# 5. 在列表的尾部追加```一批```新元素
mylist2 = [1, 2, 3]
mylist.extend(mylist2)
print(f"列表在追加了一个新的列表后，结果是：{mylist}")
```

### 删除元素：

```py
# 6. 删除指定下标索引的元素（2种方式）
mylist = ["itcast", "itheima", "python"]

# 6.1 方式1：del 列表[下标]
del mylist[2]
print(f"列表删除元素后结果是：{mylist}")
# 6.2 方式2：列表.pop(下标)
mylist = ["itcast", "itheima", "python"]
element = mylist.pop(2)
print(f"通过pop方法取出元素后列表内容：{mylist}, 取出的元素是：{element}")
```

### 删除某元素在列表中的第一个匹配项 ❓

```py
# 7. 删除某元素在列表中的第一个匹配项
mylist = ["itcast", "itheima", "itcast", "itheima", "python"]
mylist.remove("itheima")
print(f"通过remove方法移除元素后，列表的结果是：{mylist}")
```

### 清空列表内容

```py
mylist = ["itcast", "itheima", "itcast", "itheima", "python"]

# 8. 清空列表
mylist.clear()
print(f"列表被清空了，结果是：{mylist}")
```

### 统计某元素在列表内的数量❓

```py
# 9. 统计列表内某元素的数量
mylist = ["itcast", "itheima", "itcast", "itheima", "python"]
count = mylist.count("itheima")
print(f"列表中itheima的数量是：{count}")
```

### 统计列表内，有多少元素

```py
# 10. 统计列表中全部的元素数量
mylist = ["itcast", "itheima", "itcast", "itheima", "python"]
count = len(mylist)
print(f"列表的元素数量总共有：{count}个")

```

### 练习案例：常用功能练习

```py
"""
演示List常用操作的课后练习
"""

# 1. 定义这个列表，并用变量接收它， 内容是：[21, 25, 21, 23, 22, 20]
mylist = [21, 25, 21, 23, 22, 20]

# 2. 追加一个数字31，到列表的尾部
mylist.append(31)

# 3. 追加一个新列表[29, 33, 30]，到列表的尾部
mylist.extend([29, 33, 30])
# 4. 取出第一个元素（应是：21）
num1 = mylist[0]
print(f"从列表中取出来第一个元素，应该是21，实际上是：{num1}")

# 5. 取出最后一个元素（应是：30）
num2 = mylist[-1] #      																			注意这个
print(f"从列表中取出来最后一个元素，应该是30，实际上是：{num2}")

# 6. 查找元素31，在列表中的下标位置
index = mylist.index(31)
print(f"元素31在列表的下标位置是：{index}")
print(f"最后列表的内容是：{mylist}")
```

## 列表的遍历- while循环以及for循环_IDSIFkZ9

```py
"""
演示使用while和for循环遍历列表
"""


def list_while_func():
    """
    使用while循环遍历列表的演示函数
    :return: None
    """
    mylist = ["传智教育", "黑马程序员", "Python"]
    # 循环控制变量：通过下标索引来控制，默认是0
    # 每一次循环，将下标索引变量+1
    # 循环条件：下标索引变量 < 列表的元素数量

    # 定义一个变量，用来标记列表的下标
    index = 0       # 初始下标为0
    while index < len(mylist):
        # 通过index变量取出对应下标的元素
        element = mylist[index]
        print(f"列表的元素：{element}")

        # 至关重要：将循环变量（index）每一次循环都+1
        index += 1


def list_for_func():
    """
    使用for循环遍历列表的演示函数
    :return:
    """
    mylist = [1, 2, 3, 4, 5]
    # for 临时变量 in 数据容器:
    for element in mylist:
        print(f"列表的元素有：{element}")



# list_while_func()
list_for_func()

```

## 元组_TcPfQAd6 🌟 

### 元组的定义

```py
"""
演示tuple元组的定义和操作
"""

# 定义元组
t1 = (1, "Hello", True)
t2 = ()
t3 = tuple()
print(f"t1的类型是：{type(t1)}, 内容是：{t1}")
print(f"t2的类型是：{type(t2)}, 内容是：{t2}")
print(f"t3的类型是：{type(t3)}, 内容是：{t3}")

# 定义单个元素的元素
t4 = ("hello", )                   # 注意，单个元素一定要给后面写一个单独的括号，不然你下面type()打印的就不是元祖类型，而是字符串类型了
print(f"t4的类型是：{type(t4)}, t4的内容是：{t4}")
# 元组的嵌套
t5 = ( (1, 2, 3), (4, 5, 6) )
print(f"t5的类型是：{type(t5)}, 内容是：{t5}")

# 下标索引去取出内容
num = t5[1][2]
print(f"从嵌套元组中取出的数据是：{num}")

```

### 元组的操作

```py

# 元组的操作：index查找方法
t6 = ("传智教育", "黑马程序员", "Python")
index = t6.index("黑马程序员")
print(f"在元组t6中查找黑马程序员，的下标是：{index}")
# 元组的操作：count统计方法
t7 = ("传智教育", "黑马程序员", "黑马程序员", "黑马程序员", "Python")
num = t7.count("黑马程序员")
print(f"在元组t7中统计黑马程序员的数量有：{num}个")
# 元组的操作：len函数统计元组元素数量
t8 = ("传智教育", "黑马程序员", "黑马程序员", "黑马程序员", "Python")
num = len(t8)
print(f"t8元组中的元素有：{num}个")



```

### 元组的遍历

```py
# 元组的遍历：while
index = 0
while index < len(t8):
    print(f"元组的元素有：{t8[index]}")
    # 至关重要
    index += 1

# 元组的遍历：for
for element in t8:
    print(f"2元组的元素有：{element}")


```

### 元组的相关操作 - 注意事项

不可以修改元组的元素，否则会直接报错

**但是元组中的list是可以修改的**

```py
# 修改元组内容
# t8[0] = "itcast"

# 定义一个元组
t9 = (1, 2, ["itheima", "itcast"])
print(f"t9的内容是：{t9}")
t9[2][0] = "黑马程序员"
t9[2][1] = "传智教育"
print(f"t9的内容是：{t9}")
```

### 练习案例

## 数据容器视角下的字符串_0kJnaAIG 🌟 

### 字符串的下标（索引）

```py
"""
演示以数据容器的角色，学习字符串的相关操作
"""
my_str = "itheima and itcast"
# 通过下标索引取值
value = my_str[2]
value2 = my_str[-16]
print(f"从字符串{my_str}取下标为2的元素，。值是：{value},取下标为-16的元素。值是：{value2}")

# 字符串不能修改
# my_str[2] = "H"
```

### 字符串的常用操作

#### 查找特定字符串的下标索引值

```py
# index方法
value = my_str.index("and")
print(f"在字符串{my_str}中查找and，其起始下标是：{value}")
```

#### 字符串的替换

```py
# replace方法
new_my_str = my_str.replace("it", "程序")
print(f"将字符串{my_str}，进行替换后得到：{new_my_str}")

```

#### 字符串的分割

```py
# split方法
my_str = "hello python itheima itcast"
my_str_list = my_str.split(" ")
print(f"将字符串{my_str}进行split切分后得到：{my_str_list}, 类型是：{type(my_str_list)}")
```

#### 字符串的规整操作（去前后空格 / 去前后指定字符串）

```py
# strip方法
my_str = "  itheima and itcast  "
new_my_str = my_str.strip() # 不传入参数，去除首尾空格
print(f"字符串{my_str}被strip后，结果：{new_my_str}")

my_str = "12itheima and itcast21"
new_my_str = my_str.strip("12")
print(f"字符串{my_str}被strip('12')后，结果：{new_my_str}")
```

#### 统计字符串中某字符串的出现次数, count

```py

# 统计字符串中某字符串的出现次数, count
my_str = "itheima and itcast"
count = my_str.count("it")
print(f"字符串{my_str}中it出现的次数是：{count}")

```

#### 统计字符串的长度, len()

```py
# 统计字符串的长度, len()
num = len(my_str)
print(f"字符串{my_str}的长度是：{num}")
```

## 序列_YABebUdz 🌟 

```py
"""
演示对序列进行切片操作
"""

# 对list进行切片，从1开始，4结束，步长1
my_list = [0, 1, 2, 3, 4, 5, 6]
# result1 = my_list[1:4:1]  和下面的写法是等同的
result1 = my_list[1:4]      # 步长默认是1，所以可以省略不写
print(f"结果1：{result1}")




# 对tuple进行切片，从头开始，到最后结束，步长1
my_tuple = (0, 1, 2, 3, 4, 5, 6)
result2 = my_tuple[:]     # 起始和结束不写表示从头到尾，步长为1可以省略
print(f"结果2：{result2}")




# 对str进行切片，从头开始，到最后结束，步长2
my_str = "01234567"
result3 = my_str[::2]
print(f"结果3：{result3}")




# 对str进行切片，从头开始，到最后结束，步长-1
my_str = "01234567"
result4 = my_str[::-1]          # 等同于将序列反转了
print(f"结果4：{result4}")




# 对列表进行切片，从3开始，到1结束，步长-1         这里说的就是从下标3开始，到下标1结束，然后，不包含结束下标，所以就没有1，只取到了[3, 2]
my_list = [0, 1, 2, 3, 4, 5, 6]
result5 = my_list[3:1:-1]
print(f"结果5：{result5}")


# 对元组进行切片，从头开始，到尾结束，步长-2
my_tuple = (0, 1, 2, 3, 4, 5, 6)
result6 = my_tuple[::-2]
print(f"结果6：{result6}")


""""""
"""
字符    	1	2	3	4	5	6	7	8	9	0
正索引	0	1	2	3	4	5	6	7	8	9
负索引	-10	-9	-8	-7	-6	-5	-4	-3	-2	-1
"""

"""
步长决定方向：
    step > 0（默认 1）：从左到右取，要求 start 索引 < end 索引，否则返回空；
    step < 0：从右到左取，要求 start 索引 > end 索引，否则返回空。
边界规则：
    切片结果包含 start 位置的字符，不包含 end 位置的字符（“左闭右开”）。
缺省值处理：
    省略 start：默认从字符串开头（步长正）或结尾（步长负）开始；
    省略 end：默认到字符串结尾（步长正）或开头（步长负）结束；
    省略 step：默认 1。
"""

string = '1234567890'
print(string[-5:-9])
"""
-5 对应的位置在 -9 的右侧（看上面的表格，-9 < -5），步长为 1（从左到右）时，起始位置必须在结束位置的左侧（start 索引 < end 索引），
否则切片会直接返回空字符串，这就是你取不到值的核心原因。
"""

# print(string[2:7])
# print(string[-8:-3])
# print(string[::-1])
# print(string[:5])
print(string[-5:])
```

### 练习案例：序列的切片实践

```py
"""
演示序列的切片的课后练习
"万过薪月，员序程马黑来，nohtyP学"
"""
my_str = "万过薪月，员序程马黑来，nohtyP学"
# 倒序字符串，切片取出
result1 = my_str[::-1][9:14]
print(f"方式1结果：{result1}")
# 切片取出，然后倒序
result2 = my_str[5:10][::-1]
print(f"方式2结果：{result2}")

# split分隔"，"  replace替换"来"为空，倒序字符串
result3 = my_str.split("，")[1].replace("来", "")[::-1]
print(f"方式3结果：{result3}")


# -----------------------------------

string = "万过薪月，员序程马黑来，nohtyP学"
result = string[9:4:-1]
print(result)



```

## 集合_6XwoUwTX

### 定义集合

```py
"""
演示数据容器集合的使用
"""

# 定义集合
my_set = {"传智教育", "黑马程序员", "itheima", "传智教育", "黑马程序员", "itheima", "传智教育", "黑马程序员", "itheima"}
my_set_empty = set()        # 定义空集合
print(f"my_set的内容是：{my_set}, 类型是：{type(my_set)}")   # 结果去重了，并且是无序的
print(f"my_set_empty的内容是：{my_set_empty}, 类型是：{type(my_set_empty)}")



```

### 添加新元素

### 移除元素

### 随机取出一个元素

### 清空集合, clear

```py
# 添加新元素
my_set.add("Python")
my_set.add("传智教育")      #
print(f"my_set添加元素后结果是：{my_set}")



# 移除元素
my_set.remove("黑马程序员")
print(f"my_set移除黑马程序员后，结果是：{my_set}")



# 随机取出一个元素
my_set = {"传智教育", "黑马程序员", "itheima"}  # 取出哪个后，里面就没有哪个元素了
element = my_set.pop()
print(f"集合被取出元素是：{element}, 取出元素后：{my_set}")



# 清空集合, clear
my_set.clear()
print(f"集合被清空啦，结果是：{my_set}")


```

### 取2个集合的差集（不改变原集合)

```py
a = {"python",'乾坤','未定','你我','黑马','黑马','黑马'}
b = {"我",'你','黑马'}


# print(a.difference(b))
print(b.difference(a))

```

### 消除2个集合的差集（改变原集合)

```py
a = {"python",'乾坤','未定','你我','黑马','黑马','黑马'}
b = {"我",'你','黑马'}

#! difference_update() = 原地删除当前集合中与别的集合重复的元素。
print(a.difference_update(b))

print(a)


#! difference()  返回新集合，不改原集合
```

### 2个集合合并为1个（并集）

```py

# 2个集合合并为1个
set1 = {1, 2, 3}
set2 = {1, 5, 6}
set3 = set1.union(set2)
print(f"2集合合并结果：{set3}")
print(f"合并后集合1：{set1}")
print(f"合并后集合2：{set2}")


```

### 2个集合合并为1个（交集）

```py
a = {"python",'乾坤','未定','你我','黑马','黑马','黑马'}
b = {"我",'你','黑马'}

set1 = a.intersection(b)

print(set1)
```



### 统计集合元素数量len()

```py
# 统计集合元素数量len()
set1 = {1, 2, 3, 4, 5, 1, 2, 3, 4, 5}
num = len(set1)
print(f"集合内的元素数量有：{num}个")


```

### 集合的遍历

```py
# 集合的遍历
# 集合不支持下标索引，不能用while循环
# 可以用for循环
set1 = {1, 2, 3, 4, 5}
for element in set1:
    print(f"集合的元素有：{element}")
```

## 字典_f05nxZWs

```py
"""
演示数据容器字典的定义
"""

# 定义字典
my_dict1 = {"王力鸿": 99, "周杰轮": 88, "林俊节": 77}
# 定义空字典
my_dict2 = {}
my_dict3 = dict()
print(f"字典1的内容是：{my_dict1}, 类型：{type(my_dict1)}")
print(f"字典2的内容是：{my_dict2}, 类型：{type(my_dict2)}")
print(f"字典3的内容是：{my_dict3}, 类型：{type(my_dict3)}")




# 定义重复Key的字典
my_dict1 = {"王力鸿": 99, "王力鸿": 88, "林俊节": 77}
print(f"重复key的字典的内容是：{my_dict1}")  # 不允许key重复，就像汉字的字典一样，没有重复的字
```

### 从字典中基于Key获取Value

```py
# 从字典中基于Key获取Value
my_dict1 = {"王力鸿": 99, "周杰轮": 88, "林俊节": 77}
score = my_dict1["王力鸿"]
print(f"王力鸿的考试分数是：{score}")
score = my_dict1["周杰轮"]
print(f"周杰轮的考试分数是：{score}")
```

### 定义嵌套字典

```py

# 定义嵌套字典
stu_score_dict = {
    "王力鸿": {
        "语文": 77,
        "数学": 66,
        "英语": 33
    }, "周杰轮": {
        "语文": 88,
        "数学": 86,
        "英语": 55
    }, "林俊节": {
        "语文": 99,
        "数学": 96,
        "英语": 66
    }
}
print(f"学生的考试信息是：{stu_score_dict}")

# 从嵌套字典中获取数据
# 看一下周杰轮的语文信息
score = stu_score_dict["周杰轮"]["语文"]
print(f"周杰轮的语文分数是：{score}")
score = stu_score_dict["林俊节"]["英语"]
print(f"林俊节的英语分数是：{score}")
```

### 字典的常用操作

#### 新增元素

#### 更新元素

#### 删除元素

#### 清空元素, clear

```py
"""
演示字典的常用操作
"""
my_dict = {"周杰轮": 99, "林俊节": 88, "张学油": 77}
# 新增元素
my_dict["张信哲"] = 66
print(f"字典经过新增元素后，结果：{my_dict}")


# 更新元素
my_dict["周杰轮"] = 33
print(f"字典经过更新后，结果：{my_dict}")


# 删除元素
score = my_dict.pop("周杰轮")
print(f"字典中被移除了一个元素，结果：{my_dict}, 周杰轮的考试分数是：{score}")


# 清空元素, clear
my_dict.clear()
print(f"字典被清空了，内容是：{my_dict}")
```

#### 获取全部的key

#### 遍历字典

#### 统计字典内的元素数量, len()函数

```py

# 获取全部的key
my_dict = {"周杰轮": 99, "林俊节": 88, "张学油": 77}
keys = my_dict.keys()
print(f"字典的全部keys是：{keys}")


 
# 遍历字典
# 方式1：通过获取到全部的key来完成遍历
for key in keys:
    print(f"字典的key是:{key}")
    print(f"字典的value是：{my_dict[key]}")

# 方式2：直接对字典进行for循环，每一次循环都是直接得到key
for key in my_dict:
    print(f"2字典的key是:{key}")
    print(f"2字典的value是：{my_dict[key]}")

    
    
    
# 统计字典内的元素数量, len()函数
num = len(my_dict)
print(f"字典中的元素数量有：{num}个")
```

### 演示字典的课后练习

```py
"""
演示字典的课后练习：升职加薪，对所有级别为1级的员工，级别上升1级，薪水增加1000元
"""

# 组织字典记录数据
info_dict = {
    "王力鸿": {
        "部门": "科技部",
        "工资": 3000,
        "级别": 1
    },
    "周杰轮": {
        "部门": "市场部",
        "工资": 5000,
        "级别": 2
    },
    "林俊节": {
        "部门": "市场部",
        "工资": 7000,
        "级别": 3
    },
    "张学油": {
        "部门": "科技部",
        "工资": 4000,
        "级别": 1
    },
    "刘德滑": {
        "部门": "市场部",
        "工资": 6000,
        "级别": 2
    }
}

print(f"员工在升值加薪之前的结果：{info_dict}")

# for循环遍历字典
for name in info_dict:
    # if条件判断符合条件员工
    if info_dict[name]["级别"] == 1:
        # 升职加薪操作
        # 获取到员工的信息字典
        employee_info_dict = info_dict[name]
        # 修改员工的信息
        employee_info_dict["级别"] = 2    # 级别+1
        employee_info_dict["工资"] += 1000    # 工资+1000
        # 将员工的信息更新回info_dict
        info_dict[name] = employee_info_dict

# 输出结果
print(f"对员工进行升级加薪后的结果是：{info_dict}")

```

## 数据容器分类_tNTFKTMG

## 数据容器的通用操作 🌟 

### len元素个数

### max最大元素

### min最小元素

```py
"""
演示数据容器的通用功能
"""
my_list = [1, 2, 3, 4, 5]
my_tuple = (1, 2, 3, 4, 5)
my_str = "abcdefg"
my_set = {1, 2, 3, 4, 5}
my_dict = {"key1": 1, "key2": 2, "key3": 3, "key4": 4, "key5": 5}



# len元素个数
print(f"列表 元素个数有：{len(my_list)}")
print(f"元组 元素个数有：{len(my_tuple)}")
print(f"字符串元素个数有：{len(my_str)}")
print(f"集合 元素个数有：{len(my_set)}")
print(f"字典 元素个数有：{len(my_dict)}")



# max最大元素
print(f"列表 最大的元素是：{max(my_list)}")
print(f"元组 最大的元素是：{max(my_tuple)}")
print(f"字符串最大的元素是：{max(my_str)}")
print(f"集合 最大的元素是：{max(my_set)}")
print(f"字典 最大的元素是：{max(my_dict)}")



# min最小元素
print(f"列表 最小的元素是：{min(my_list)}")
print(f"元组 最小的元素是：{min(my_tuple)}")
print(f"字符串最小的元素是：{min(my_str)}")
print(f"集合 最小的元素是：{min(my_set)}")
print(f"字典 最小的元素是：{min(my_dict)}")

```

### 容器的通用转换功能

#### 容器转列表

#### 容器转元组

#### 容器转字符串

#### 容器转集合

```py
# 类型转换: 容器转列表
print(f"列表转列表的结果是：{list(my_list)}")
print(f"元组转列表的结果是：{list(my_tuple)}")
print(f"字符串转列表结果是：{list(my_str)}")
print(f"集合转列表的结果是：{list(my_set)}")
print(f"字典转列表的结果是：{list(my_dict)}")



# 类型转换: 容器转元组
print(f"列表转元组的结果是：{tuple(my_list)}")
print(f"元组转元组的结果是：{tuple(my_tuple)}")
print(f"字符串转元组结果是：{tuple(my_str)}")
print(f"集合转元组的结果是：{tuple(my_set)}")
print(f"字典转元组的结果是：{tuple(my_dict)}")



# 类型转换: 容器转字符串
print(f"列表转字符串的结果是：{str(my_list)}")
print(f"元组转字符串的结果是：{str(my_tuple)}")
print(f"字符串转字符串结果是：{str(my_str)}")
print(f"集合转字符串的结果是：{str(my_set)}")
print(f"字典转字符串的结果是：{str(my_dict)}")



# 类型转换: 容器转集合
print(f"列表转集合的结果是：{set(my_list)}")
print(f"元组转集合的结果是：{set(my_tuple)}")
print(f"字符串转集合结果是：{set(my_str)}")
print(f"集合转集合的结果是：{set(my_set)}")
print(f"字典转集合的结果是：{set(my_dict)}")
```

### 容器通用排序功能

```py

# 进行容器的排序
my_list = [3, 1, 2, 5, 4]
my_tuple = (3, 1, 2, 5, 4)
my_str = "bdcefga"
my_set = {3, 1, 2, 5, 4}
my_dict = {"key3": 1, "key1": 2, "key2": 3, "key5": 4, "key4": 5}

print(f"列表对象的排序结果：{sorted(my_list)}")
print(f"元组对象的排序结果：{sorted(my_tuple)}")
print(f"字符串对象的排序结果：{sorted(my_str)}")
print(f"集合对象的排序结果：{sorted(my_set)}")
print(f"字典对象的排序结果：{sorted(my_dict)}")

print(f"列表对象的反向排序结果：{sorted(my_list, reverse=True)}")  #  不填的话，默认是false，填了第二个参数就是反向排序
print(f"元组对象的反向排序结果：{sorted(my_tuple, reverse=True)}")
print(f"字符串对象反向的排序结果：{sorted(my_str, reverse=True)}")
print(f"集合对象的反向排序结果：{sorted(my_set, reverse=True)}")
print(f"字典对象的反向排序结果：{sorted(my_dict, reverse=True)}")
```

## 字符串比较_cZlgSqbv

```py
"""
演示字符串大小比较
"""

# abc 比较 abd
print(f"abd大于abc，结果：{'abd' > 'abc'}")
# a 比较 ab
print(f"ab大于a，结果：{'ab' > 'a'}")
# a 比较 A
print(f"a 大于 A，结果：{'a' > 'A'}")
# key1 比较 key2
print(f"key2 &gt; key1，结果：{'key2' > 'key1'}")

```

## 函数进阶_o1yLiuFd

### 函数的多返回值

```py
"""
演示函数的多返回值示例
"""

# 演示使用多个变量，接收多个返回值
def test_return():
    return 1, "hello", True

x, y, z = test_return()
print(x)
print(y)
print(z)
```

### 函数的多种参数使用形式

#### 位置参数 - 默认使用形式

#### 关键字参数

#### 缺省参数（默认值）

```py
"""
演示多种传参的形式
"""
def user_info(name, age, gender):
    print(f"姓名是:{name}, 年龄是:{age}, 性别是:{gender}")
# 位置参数 - 默认使用形式
user_info('小明', 20, '男')



# 关键字参数
user_info(name='小王', age=11, gender='女')
user_info(age=10, gender='女', name='潇潇')    # 可以不按照参数的定义顺序传参
user_info('甜甜', gender='女', age=9)



# 缺省参数（默认值）
def user_info(name, age, gender='女'):
    print(f"姓名是:{name}, 年龄是:{age}, 性别是:{gender}")
user_info('小天', 13)
user_info('小天', 13, '男')



```

#### 不定长

##### 不定长 - 位置不定长, *号

##### 不定长 - 关键字不定长, **号

```py
# 不定长 - 位置不定长, *号
# 不定长定义的形式参数会作为元组存在，接收不定长数量的参数传入
def user_info(*args):
    print(f"args参数的类型是：{type(args)}，内容是:{args}")

user_info(1, 2, 3, '小明', '男孩')




# 不定长 - 关键字不定长, **号
def user_info(**kwargs):
    print(f"args参数的类型是：{type(kwargs)}，内容是:{kwargs}")
user_info(name='小王', age=11, gender='男孩')
```

## 函数作为参数传递_xNCt42Xz

```py
"""
演示函数作为参数传递
"""

# 定义一个函数，接收另一个函数作为传入参数
def test_func(compute):
    result = compute(1, 2)  # 确定compute是函数
    print(f"compute参数的类型是:{type(compute)}")
    print(f"计算结果：{result}")

# 定义一个函数，准备作为参数传入另一个函数
def compute(x, y):
    return x + y
# 调用，并传入函数
test_func(compute)

```

## lambda匿名函数_IHjyGqyW

```py
"""
演示lambda匿名函数
"""

# 定义一个函数，接受其它函数输入
def test_func(compute):
    result = compute(1, 2)
    print(f"结果是:{result}")
# 通过lambda匿名函数的形式，将匿名函数作为参数传入
def add(x, y):
    return x + y
test_func(add)
test_func(lambda x, y: x + y) # return 可以省略掉

```

## 文件编码_5eAeq8BD

## 文件的操作_LLh5m299

### 读  read() | readlines() | readline() | for循环读取文件行

### 文件的关闭

```py
"""
演示对文件的读取
"""

# 打开文件
import time

f = open("D:/测试.txt", "r", encoding="UTF-8")
print(type(f))
# 读取文件 - read()
# print(f"读取10个字节的结果：{f.read(10)}") # 如果是文件内容过多，第一次读了10个字节的内容，那么下次执行read会从上次没读完的位置继续读，而不是从头开始读
# print(f"read方法读取全部内容的结果是：{f.read()}")  # 然后这里相当于全部读完了
print("-----------------------------------------------")



# 读取文件 - readLines() 
# lines = f.readlines()   # 读取文件的全部行，封装到列表中
# print(f"lines对象的类型：{type(lines)}")
# print(f"lines对象的内容是：{lines}") #所以如果上面已经全部读完文件的话，这一行是读不到任何内容的




# 读取文件 - readline()
# line1 = f.readline()
# line2 = f.readline()
# line3 = f.readline()
# print(f"第一行数据是：{line1}")
# print(f"第二行数据是：{line2}")
# print(f"第三行数据是：{line3}")



# for循环读取文件行
# for line in f:
#     print(f"每一行数据是:{line}")
# # 文件的关闭
# f.close() # 含义看OneNote
# time.sleep(500000)




```

### with open 语法操作文件

with open as f:
	里面的代码执行完后，自动调用f.close()，用来关闭文件

```py
import time

f = open("D:/测试.txt", "r", encoding="UTF-8")

# with open 语法操作文件
with open("D:/测试.txt", "r", encoding="UTF-8") as f:
    for line in f:
        print(f"每一行数据是：{line}")

time.sleep(500000)
```

### 课后练习：单词计数

```py
"""
演示读取文件，课后练习题
"""

# 打开文件，以读取模式打开
f = open("D:/word.txt", "r", encoding="UTF-8")
# 方式1：读取全部内容，通过字符串count方法统计itheima单词数量
# content = f.read()
# count = content.count("itheima")
# print(f"itheima在文件中出现了:{count}次")
# 方式2：读取内容，一行一行读取
count = 0       # 使用count变量来累计itheima出现的次数
for line in f:
    line = line.strip()     # 去除开头和结尾的空格以及换行符
    words = line.split(" ")
    for word in words:
        if word == "itheima":
            count += 1      # 如果单词是itheima，进行数量的累加加1
# 判断单词出现次数并累计
print(f"itheima出现的次数是：{count}")
# 关闭文件
f.close()

```

### 写操作快速入门 

```py
"""
演示文件的写入
"""

# 打开文件，不存在的文件, r, w, a
import time

# f = open("D:/test.txt", "w", encoding="UTF-8")
# # write写入
# f.write("Hello World!!!")       # 内容写入到内存中
# # flush刷新
# # f.flush()                       # 将内存中积攒的内容，写入到硬盘的文件中
# # close关闭
# f.close()                       # close方法，内置了flush的功能的

"""
写入的两个特点就出来了，首先当文件不存在的时候，它会把这个文件给我们创建出来

那么，再来当我们文件已经存在的时候，你再用w写它的话，它会把里面内容全部清空。
所以这是它的注意点
"""

# 打开一个存在的文件
f = open("D:/test.txt", "w", encoding="UTF-8")
# write写入、flush刷新
f.write("黑马程序员")
# close关闭
f.close()


```

### 追加写入操作快速入门

```py
"""
演示文件的追加写入
"""

# 打开文件，不存在的文件
# f = open("D:/test.txt", "a", encoding="UTF-8")
# # write写入
# f.write("黑马程序员")
# # flush刷新
# f.flush()
# # close关闭
# f.close()


# 打开一个存在的文件
f = open("D:/test.txt", "a", encoding="UTF-8")
# write写入、flush刷新
f.write("\n月薪过万")
# close关闭
f.close()

```

### 文件操作综合案例：文件备份

```py
"""
演示文件操作综合案例：文件备份
"""

# 打开文件得到文件对象，准备读取
fr = open("D:/bill.txt", "r", encoding="UTF-8")
# 打开文件得到文件对象，准备写入
fw = open("D:/bill.txt.bak", "w", encoding="UTF-8")
# for循环读取文件
for line in fr:
    line = line.strip()
    # 判断内容，将满足的内容写出
    if line.split(",")[4] == "测试":
        continue        # continue进入下一次循环，这一次后面的内容就跳过了
    # 将内容写出去
    fw.write(line)
    # 由于前面对内容进行了strip()的操作，所以要手动的写出换行符
    fw.write("\n")

# close2个文件对象
fr.close()
fw.close()      # 写出文件调用close()会自动flush()

```

## 异常_16OVphRV

### 捕获异常

```py
"""
演示捕获异常
"""

# 基本捕获语法
 try:
     f = open("D:/abc.txt", "r", encoding="UTF-8")
 except:
     print("出现异常了，因为文件不存在，我将open的模式，改为w模式去打开")
     f = open("D:/abc.txt", "w", encoding="UTF-8")
```

### 捕获指定异常

```py
# 捕获指定的异常
# try:
#     print(name)
#     # 1 / 0
# except NameError as e:
#     print("出现了变量未定义的异常")
#     print(e)

```

### 捕获多个异常

```py

# 捕获多个异常
# try:
#     # 1 / 0
#     print(name)
# except (NameError, ZeroDivisionError) as e:
#     print("出现了变量未定义 或者 除以0的异常错误")
# 未正确设置捕获异常类型，将无法捕获异常
```

### 捕获所有异常

```py
# 捕获所有异常
 try:
 except:
  
  try:
  except Exception as e:
# 上面这俩个语法就可以捕获全部的异常
```

### 异常else

### 异常的finally

```py
try:
    f = open("D:/123.txt", "r", encoding="UTF-8")
except Exception as e:
    print("出现异常了")
    f = open("D:/123.txt", "w", encoding="UTF-8")
else:
    print("好高兴，没有异常。")
finally:
    print("我是finally，有没有异常我都要执行")
    f.close()
```

### 异常的传递性

```py
"""
演示异常的传递性 --- 未处理异常
"""

# 定义一个出现异常的方法
def func1():
    print("func1 开始执行")
    num = 1 / 0     # 肯定有异常，除以0的异常
    print("func1 结束执行")
# 定义一个无异常的方法，调用上面的方法

def func2():
    print("func2 开始执行")
    func1()
    print("func2 结束执行")
# 定义一个方法，调用上面的方法

def main():
        func2()

main()

```

```py
"""
演示异常的传递性 --- 处理了异常
"""

# 定义一个出现异常的方法
def func1():
    print("func1 开始执行")
    num = 1 / 0     # 肯定有异常，除以0的异常
    print("func1 结束执行")
# 定义一个无异常的方法，调用上面的方法

def func2():
    print("func2 开始执行")
    func1()
    print("func2 结束执行")
# 定义一个方法，调用上面的方法

def main():
    try:
        func2()
    except Exception as e:
        print(f"出现异常了，异常的信息是：{e}")

main()

```

## 模块_iuX73ALX

```py
"""
演示Python的模块导入
"""

from time import sleep













# 使用import导入time模块使用sleep功能（函数）
# import time     # 导入Python内置的time模块（time.py这个代码文件）
# print("你好")
# time.sleep(5)   # 通过. 就可以使用模块内部的全部功能（类、函数、变量）
# print("我好")

# 使用from导入time的sleep功能（函数）
# from time import sleep
# print("你好")
# sleep(5)
# print("我好")

# 使用 * 导入time模块的全部功能
# from time import *      # *表示全部的意思
# print("你好")
# sleep(5)
# print("我好")

# 使用as给特定功能加上别名
# import time as t
# print("你好")
# t.sleep(5)
# print("我好")

from time import sleep as sl
print("你好")
sl(5)
print("我好")

```

### 自定义模块

main.py

```py
"""
演示自定义模块
"""

# 导入自定义模块使用
# import my_module1 或
from my_module1 import test
print(test(1, 2))

```

my_module1.py

```py
def test(a, b):
    return a + b

  # __main__ 见OneNote
if __name__ == '__main__':
  	test(1,2)
```

### 导入不同模块的同名功能

```py
# 导入不同模块的同名功能
# from my_module1 import test
# from my_module2 import test
# test(1, 2)


```

### all变量，导入all变量里的内容

main.py

```py
"""
演示自定义模块
"""

# __all__ 变量
from my_module1 import *
test_a(1, 2)
test_b(2, 1) # 所以这个test_b就会识别不到了

```

my_module1.py

```py
__all__ = ['test_a']   # 因为加了all变量

def test_a(a, b):
    print(a + b)

def test_b(a, b):
    print(a - b)
```

## Python包_ejJhF2SH

main.py

```py
"""
演示Python的包
"""

# 创建一个包
# 导入自定义的包中的模块，并使用
# import my_package.my_module1
# import my_package.my_module2
#
# my_package.my_module1.info_print1()
# my_package.my_module2.info_print2()

# from my_package import my_module1
# from my_package import my_module2
# my_module1.info_print1()
# my_module2.info_print2()

from my_package.my_module1 import info_print1
from my_package.my_module2 import info_print2
info_print1()
info_print2()
```

my_package/my_module1.py

```py
def info_print1():
    print("我是模块1里的内容")
```

my_package/my_module2.py

```py
def info_print2():
    print("我是模块2里的内容")
```

### 通过\_\_all\_\_变量，控制import *

```py
# 通过__all__变量，控制import *
from my_package import *
my_module1.info_print1()
my_module2.info_print2()
```

my_package/my_module1.py

```py
def info_print1():
    print("我是模块1里的内容")
```

my_package/my_module2.py

```py
def info_print2():
    print("我是模块2里的内容")
```

\_\_init\_\_.py

```py
__all__ = ['my_module1', 'my_module2']

```

### 第三方包

### 练习综合案例：自定义工具包

main.py

```py
"""
演示异常、模块、包的综合案例练习
"""
# 创建my_utils 包， 在包内创建：str_util.py 和 file_util.py 2个模块，并提供相应的函数

import my_utils.str_util
from my_utils import file_util

print(my_utils.str_util.str_reverse("黑马程序员"))
print(my_utils.str_util.substr("itheima", 0, 4))


file_util.append_to_file("D:/test_append.txt", "itheima")
file_util.print_file_info("D:/test_append.txt")
```

my_utils/file_util.py

```py
"""
文件处理相关的工具模块
"""


def print_file_info(file_name):
    """
    功能是：将给定路径的文件内容输出到控制台中
    :param file_name: 即将读取的文件路径
    :return: None
    """
    f = None
    try:
        f = open(file_name, "r", encoding="UTF-8")
        content = f.read()
        print("文件的全部内容如下：")
        print(content)
    except Exception as e:
        print(f"程序出现异常了，原因是：{e}")
    finally:
        if f:       # 如果变量是None，表示False，如果有任何内容，就是True
            f.close()


def append_to_file(file_name, data):
    """
    功能：将指定的数据追加到指定的文件中
    :param file_name: 指定的文件的路径
    :param data: 指定的数据
    :return: None
    """
    f = open(file_name, "a", encoding="UTF-8")
    f.write(data)
    f.write("\n")
    f.close()


if __name__ == '__main__':
    # print_file_info("D:/bill.txtxxx")
    append_to_file("D:/test_append.txt", "传智教育")

```

my_utils/str_util.py

```py
"""
字符串相关的工具模块
"""


def str_reverse(s):
    """
    功能是将字符串完成反转
    :param s: 将被反转的字符串
    :return: 反转后的字符串
    """
    return s[::-1]


def substr(s, x, y):
    """
    功能是按照给定的下标完成给定字符串的切片
    :param s: 即将被切片的字符串
    :param x: 切片的开始下标
    :param y: 切片的结束下标
    :return: 切片完成后的字符串
    """
    return s[x:y]


if __name__ == '__main__':
    print(str_reverse("黑马程序员"))
    print(substr("黑马程序员", 1, 3))

```

## 数据可视化_YsJEuPU4

### json

#### json格式化网站

https://www.json.cn/

```py
"""
演示JSON数据和Python字典的相互转换
"""
import json
# 准备列表，列表内每一个元素都是字典，将其转换为JSON
data = [{"name": "张大山", "age": 11}, {"name": "王大锤", "age": 13}, {"name": "赵小虎", "age": 16}]
json_str = json.dumps(data, ensure_ascii=False)
print(type(json_str))
print(json_str)


# 准备字典，将字典转换为JSON
d = {"name":"周杰轮", "addr":"台北"}
json_str = json.dumps(d, ensure_ascii=False)   #加了ensure-ascii=False，就不会变成ascii码了，就变成中文展示了
print(type(json_str))
print(json_str)


# 将JSON字符串转换为Python数据类型[{k: v, k: v}, {k: v, k: v}]
s = '[{"name": "张大山", "age": 11}, {"name": "王大锤", "age": 13}, {"name": "赵小虎", "age": 16}]'
l = json.loads(s)
print(type(l))
print(l)


# 将JSON字符串转换为Python数据类型{k: v, k: v}
s = '{"name": "周杰轮", "addr": "台北"}'
d = json.loads(s)
print(type(d))
print(d)

```

### pyecharts模块



### pyechars入门

```py
"""
演示pyecharts的基础入门
"""
# 导包
from pyecharts.charts import Line
from pyecharts.options import TitleOpts, LegendOpts, ToolboxOpts, VisualMapOpts
# 创建一个折线图对象
line = Line()
# 给折线图对象添加x轴的数据
line.add_xaxis(["中国", "美国", "英国"])
# 给折线图对象添加y轴的数据
line.add_yaxis("GDP", [30, 20, 10])

# 设置全局配置项set_global_opts来设置,
line.set_global_opts(
    title_opts=TitleOpts(title="GDP展示", pos_left="center", pos_bottom="1%"),
    legend_opts=LegendOpts(is_show=True),
    toolbox_opts=ToolboxOpts(is_show=True),
    visualmap_opts=VisualMapOpts(is_show=True),
)

# 通过render方法，将代码生成为图像
line.render()

```

### 104 - 折线图开发

```py


"""
演示可视化需求1：折线图开发
"""
import json
from pyecharts.charts import Line
from pyecharts.options import TitleOpts, LabelOpts

# 处理数据
f_us = open("C:/test/美国.txt", "r", encoding="UTF-8")
us_data = f_us.read()   # 美国的全部内容

f_jp = open("C:/test/日本.txt", "r", encoding="UTF-8")
jp_data = f_jp.read()   # 日本的全部内容

f_in = open("C:/test/印度.txt", "r", encoding="UTF-8")
in_data = f_in.read()   # 印度的全部内容

# 去掉不合JSON规范的开头
us_data = us_data.replace("jsonp_1629344292311_69436(", "")
jp_data = jp_data.replace("jsonp_1629350871167_29498(", "")
in_data = in_data.replace("jsonp_1629350745930_63180(", "")

# 去掉不合JSON规范的结尾
us_data = us_data[:-2]
jp_data = jp_data[:-2]
in_data = in_data[:-2]

# JSON转Python字典
us_dict = json.loads(us_data)
jp_dict = json.loads(jp_data)
in_dict = json.loads(in_data)

# 获取trend key
us_trend_data = us_dict['data'][0]['trend']
jp_trend_data = jp_dict['data'][0]['trend']
in_trend_data = in_dict['data'][0]['trend']

# 获取日期数据，用于x轴，取2020年（到314下标结束）
us_x_data = us_trend_data['updateDate'][:314]
jp_x_data = jp_trend_data['updateDate'][:314]
in_x_data = in_trend_data['updateDate'][:314]

# 获取确认数据，用于y轴，取2020年（到314下标结束）
us_y_data = us_trend_data['list'][0]['data'][:314]
jp_y_data = jp_trend_data['list'][0]['data'][:314]
in_y_data = in_trend_data['list'][0]['data'][:314]

# 生成图表
line = Line()       # 构建折线图对象
# 添加x轴数据
line.add_xaxis(us_x_data)   # x轴是公用的，所以使用一个国家的数据即可
# 添加y轴数据
line.add_yaxis("美国确诊人数", us_y_data, label_opts=LabelOpts(is_show=False))     # 添加美国的y轴数据
line.add_yaxis("日本确诊人数", jp_y_data, label_opts=LabelOpts(is_show=False))     # 添加日本的y轴数据
line.add_yaxis("印度确诊人数", in_y_data, label_opts=LabelOpts(is_show=False))     # 添加印度的y轴数据

# 设置全局选项
line.set_global_opts(
    # 标题设置
    title_opts=TitleOpts(title="2020年美日印三国确诊人数对比折线图", pos_left="center", pos_bottom="1%")
)

# 调用render方法，生成图表
line.render()
# 关闭文件对象
f_us.close()
f_jp.close()
f_in.close()

```

## ***105 ~ 110 没看了，都是教如何画图表的_019DiIhB***

## 面向对象_mOXT6n1p

### 初识对象

```py
# 1. 设计一个类（类比生活中：设计一张登记表）
class Student:
    name = None        # 记录学生姓名
    gender = None      # 记录学生性别
    nationality = None # 记录学生国籍
    native_place = None # 记录学生籍贯
    age = None         # 记录学生年龄

# 2. 创建一个对象（类比生活中：打印一张登记表）
stu_1 = Student()
# 3. 对象属性进行赋值（类比生活中：填写表单）
stu_1.name = "林军杰"
stu_1.gender = "男"
stu_1.nationality = "中国"
stu_1.native_place = "山东省"
stu_1.age = 31

# 4. 获取对象中记录的信息
print(stu_1.name)
print(stu_1.gender)
print(stu_1.nationality)
print(stu_1.native_place)
print(stu_1.age)
```

### 类的成员方法

```py
"""
演示面向对象类中的成员方法定义和使用
"""

# 定义一个带有成员方法的类
class Student:
    name = None     # 学生的姓名

    def say_hi(self):
        print(f"大家好呀，我是{self.name}，欢迎大家多多关照")


    def say_hi2(self, msg):
        print(f"大家好，我是：{self.name}，{msg}")


stu = Student()
stu.name = "周杰轮"
stu.say_hi2("哎哟不错哟")

stu2 = Student()
stu2.name = "林俊节"
stu2.say_hi2("小伙子我看好你")

```

### 类和对象

```py
"""
演示类和对象的关系，即面向对象的编程套路（思想）
"""

# 设计一个闹钟类
class Clock:
    id = None       # 序列化
    price = None    # 价格


    def ring(self):
        import winsound
        winsound.Beep(2000, 3000)

# 构建2个闹钟对象并让其工作
clock1 = Clock()
clock1.id = "003032"
clock1.price = 19.99
print(f"闹钟ID：{clock1.id}，价格：{clock1.price}")
# clock1.ring()

clock2 = Clock()
clock2.id = "003033"
clock2.price = 21.99
print(f"闹钟ID：{clock2.id}，价格：{clock2.price}")
clock2.ring()
```

### 构造方法

```py
"""
演示类的构造方法
"""
# 演示使用构造方法对成员变量进行赋值
# 构造方法的名称：__init__

class Student:

    def __init__(self, name, age ,tel):
        self.name = name
        self.age = age
        self.tel = tel
        print("Student类创建了一个类对象")

stu = Student("周杰轮", 31, "18500006666")
print(stu.name)
print(stu.age)
print(stu.tel)


```

### 练习:学生信息录入

```py
class Student:
    def __init__(self, name, age, address):
        # 构造方法：初始化学生的姓名、年龄、地址
        self.name = name
        self.age = age
        self.address = address

# 主程序：录入10位学生信息并输出
for i in range(1, 11):
    print(f"当前录入第{i}位学生信息，总共需录入10位学生信息")
    name = input("请输入学生姓名：")
    age = input("请输入学生年龄：")
    address = input("请输入学生地址：")
    # 通过构造方法创建学生对象
    student = Student(name, age, address)
    # 格式化输出学生信息
    print(f"学生{i}信息录入完成，信息为：【学生姓名：{student.name}，年龄：{student.age}，地址：{student.address}】")
```

### 其他内置方法（魔术方法）

### \_\_str\_\_魔术方法

```py
"""
演示Python内置的各类魔术方法
"""
class Student:
    def __init__(self, name, age):
        self.name = name  # 学生姓名
        self.age = age  # 学生年龄

    # __str__魔术方法    就是你不加下面这个魔术方法你str()执行的话，返回的是一个内存地址，但是我们不要内存地址，所以可以利用下面声明的这个函数来把str()这个方法给改写成return 后的功能
    def __str__(self):
        return f"Student类对象，name:{self.name}, age:{self.age}"


# __str__魔术方法
stu = Student('周杰伦', 31)
print(stu)
print(str(stu))

```

### \_\_lt\_\_魔术方法

这个的道理同第一个魔术方法

```py
"""
演示Python内置的各类魔术方法
"""
class Student:
    def __init__(self, name, age):
        self.name = name  # 学生姓名
        self.age = age  # 学生年龄

    # __lt__魔术方法
    def __lt__(self, other):
        return self.age < other.age


stu1 = Student("周杰轮", 31)
stu2 = Student("林俊节", 36)
print(stu1 < stu2)
print(stu1 > stu2)
```

### \_\_le\_\_魔术方法

这个的道理同第一个魔术方法

```py
"""
演示Python内置的各类魔术方法
"""
class Student:
    def __init__(self, name, age):
        self.name = name  # 学生姓名
        self.age = age  # 学生年龄

    # __le__魔术方法
    def __le__(self, other):
        return self.age <= other.age


stu1 = Student("周杰轮", 31)
stu2 = Student("林俊节", 36)
print(stu1 <= stu2)
print(stu1 >= stu2)
```

### \_\_lq_\_魔术方法

这个的道理同第一个魔术方法

```py
"""
演示Python内置的各类魔术方法
"""


class Student:
    def __init__(self, name, age):
        self.name = name  # 学生姓名
        self.age = age  # 学生年龄

        # __eq__魔术方法
        def __eq__(self, other):
            return self.age == other.age


stu1 = Student("周杰轮", 31)
stu2 = Student("林俊节", 36)
print(stu1 == stu2)

```

## 面向对象的三大特性

### 封装_ZGgmznsw

私有成员和私有方法都无法直接使用，会报错

```py
# 定义一个类，内含私有成员变量和私有成员方法
class Phone:
    __current_voltage = None  # 当前手机运行电压

    def __keep_single_core(self):
        print("让CPU以单核模式运行")


phone = Phone()
# phone.__keep_single_core()
print(phone.__current_voltage)
```

私有成员无法被类对象使用，但是可以被其它的成员使用。

```py
"""
演示面向对象封装思想中私有成员的使用
"""

# 定义一个类，内含私有成员变量和私有成员方法
class Phone:
    __current_voltage = 0.5        # 当前手机运行电压


    def __keep_single_core(self):
        print("让CPU以单核模式运行")


    def call_by_5g(self):
        if self.__current_voltage >= 1:
            print("5g通话已开启")
        else:
            self.__keep_single_core()
            print("电量不足，无法使用5g通话，并已设置为单核运行进行省电。")


phone = Phone()
phone.call_by_5g()


```

### 练习：设计带有私有成员的手机

```py
"""
讲解面向对象-封装特性课后练习题
设计带有私有成员的手机
"""

# 设计一个类，用来描述手机
class Phone:
    # 提供私有成员变量：__is_5g_enable
    __is_5g_enable = True      # 5g状态


    # 提供私有成员方法：__check_5g()
    def __check_5g(self):
        if self.__is_5g_enable:
            print("5g开启")
        else:
            print("5g关闭，使用4g网络")

    # 提供公开成员方法：call_by_5g()
    def call_by_5g(self):
        self.__check_5g()
        print("正在通话中")


phone = Phone()
phone.call_by_5g()


```

## 继承_QgvYgoJ3

### 单继承

```py
"""
演示面向对象：继承的基础语法
"""

# 演示单继承
class Phone:
    IMEI = None     # 序列号
    producer = "ITCAST" # 厂商


    def call_by_4g(self):
        print("4g通话")


class Phone2022(Phone):
    face_id = "10001"       # 面部识别ID


    def call_by_5g(self):
        print("2022年新功能：5g通话")


phone = Phone2022()
print(phone.producer)
phone.call_by_4g()
phone.call_by_5g()
```

### 多继承

```py
# 演示多继承
class Phone:
    IMEI = None     # 序列号
    producer = "ITCAST" # 厂商
    
    def call_by_4g(self):
        print("4g通话")
        
        
class NFCReader:
    nfc_type = "第五代"
    producer = "HM"

    def read_card(self):
        print("NFC读卡")

    def write_card(self):
        print("NFC写卡")


class RemoteControl:
    rc_type = "红外遥控"

    def control(self):
        print("红外遥控开启了")


class MyPhone(Phone, NFCReader, RemoteControl):
    pass


phone = MyPhone()
phone.call_by_4g()
phone.read_card()
phone.write_card()
phone.control()

print(phone.producer)

"""
上面两个父类都有producer，是按照class MyPhone(Phone, NFCReader, RemoteControl): 从左到右的优先级的，也就是Phone里的属性和方法的优先级最高
多个父类中，如果有同名的成员，那么默认以继承顺序（从左到右）为优先级。
即：先继承的保留，后继承的被覆盖
"""

```

### 复写

```py
class Phone:
    IMEI = None        # 序列号
    producer = "ITCAST" # 厂商

    def call_by_5g(self):
        print("使用5g网络进行通话")

# 定义子类，复写父类成员
class MyPhone(Phone):
    producer = "ITHEIMA"  # 复写父类的成员属性

    def call_by_5g(self):
        print("开启CPU单核模式，确保通话的时候省电")
        print("使用5g网络进行通话")
        print("关闭CPU单核模式，确保性能")

# 在子类中，调用父类成员
phone = MyPhone()
phone.call_by_5g()
print(phone.producer)
```

### 子类使用父类成员

```py
"""
演示面向对象：继承中
对父类成员的复写和调用
"""


class Phone:
    IMEI = None             # 序列号
    producer = "ITCAST"     # 厂商

    def call_by_5g(self):
        print("使用5g网络进行通话")


# 定义子类，复写父类成员
class MyPhone(Phone):
    producer = "ITHEIMA"        # 复写父类的成员属性

    def call_by_5g(self):
        print("开启CPU单核模式，确保通话的时候省电")
        # 如何调用父类的属性和方法
        # 方式1
        # print(f"父类的厂商是：{Phone.producer}")
        # Phone.call_by_5g(self)
        
        # 方式2
        print(f"父类的厂商是：{super().producer}")
        super().call_by_5g()
        print("关闭CPU单核模式，确保性能")

phone = MyPhone()
phone.call_by_5g()
print(phone.producer)

# 在子类中，调用父类成员


```

## ***120 ~ 122 没看了 类型注解_DPZwn5Wy 都是类似于TS的东西***



## 多态_Ck3def7e

```py
"""
演示面向对象的多态特性以及抽象类（接口）的使用
"""


class Animal:
    def speak(self):
        pass


class Dog(Animal):
    def speak(self):
        print("汪汪汪")


class Cat(Animal):
    def speak(self):
        print("喵喵喵")


def make_noise(animal: Animal):
    """制造点噪音，需要传入Animal对象"""
    animal.speak()


# 演示多态，使用2个子类对象来调用函数
dog = Dog()
cat = Cat()

make_noise(dog)
make_noise(cat)
```

### 抽象类

```py
# 演示抽象类
class AC:
    def cool_wind(self):
        """制冷"""
        pass

    def hot_wind(self):
        """制热"""
        pass

    def swing_l_r(self):
        """左右摆风"""
        pass


class Midea_AC(AC):
    def cool_wind(self):
        print("美的空调制冷")

    def hot_wind(self):
        print("美的空调制热")

    def swing_l_r(self):
        print("美的空调左右摆风")


class GREE_AC(AC):
    def cool_wind(self):
        print("格力空调制冷")

    def hot_wind(self):
        print("格力空调制热")

    def swing_l_r(self):
        print("格力空调左右摆风")


def make_cool(ac: AC):
    ac.cool_wind()


midea_ac = Midea_AC()
gree_ac = GREE_AC()


make_cool(midea_ac)
make_cool(gree_ac)

```

## 数据分析案例_ZChFYhQk

数据分析案例/main.py

```py
"""
面向对象，数据分析案例，主业务逻辑代码
实现步骤：
1. 设计一个类，可以完成数据的封装
2. 设计一个抽象类，定义文件读取的相关功能，并使用子类实现具体功能
3. 读取文件，生产数据对象
4. 进行数据需求的逻辑计算（计算每一天的销售额）
5. 通过PyEcharts进行图形绘制
"""
from file_define import FileReader, TextFileReader, JsonFileReader
from data_define import Record
from pyecharts.charts import Bar
from pyecharts.options import *
from pyecharts.globals import ThemeType

text_file_reader = TextFileReader("C:/test/2011年1月销售数据.txt")
json_file_reader = JsonFileReader("C:/test/2011年2月销售数据JSON.txt")

jan_data: list[Record] = text_file_reader.read_data()
feb_data: list[Record] = json_file_reader.read_data()
# 将2个月份的数据合并为1个list来存储
all_data: list[Record] = jan_data + feb_data

# 开始进行数据计算
# {"2011-01-01": 1534, "2011-01-02": 300, "2011-01-03": 650}
data_dict = {}
for record in all_data:
    if record.date in data_dict.keys():
        # 当前日期已经有记录了，所以和老记录做累加即可
        data_dict[record.date] += record.money
    else:
        data_dict[record.date] = record.money

# 可视化图表开发
bar = Bar(init_opts=InitOpts(theme=ThemeType.LIGHT))

bar.add_xaxis(list(data_dict.keys()))       # 添加x轴的数据
bar.add_yaxis("销售额", list(data_dict.values()), label_opts=LabelOpts(is_show=False))      # 添加了y轴数据
bar.set_global_opts(
    title_opts=TitleOpts(title="每日销售额")
)

bar.render("每日销售额柱状图.html")


```

数据分析案例/data_define.py

```py
"""
数据定义的类
"""


class Record:

    def __init__(self, date, order_id, money, province):
        self.date = date  # 订单日期
        self.order_id = order_id  # 订单ID
        self.money = money  # 订单金额
        self.province = province  # 销售省份

    def __str__(self):
        return f"{self.date}, {self.order_id}, {self.money}, {self.province}"

```

数据分析案例/file_define.py

```py
"""
和文件相关的类定义
"""
import json

from data_define import Record


# 先定义一个抽象类用来做顶层设计，确定有哪些功能需要实现
class FileReader:

    def read_data(self) -> list[Record]:
        """读取文件的数据，读到的每一条数据都转换为Record对象，将它们都封装到list内返回即可"""
        pass


class TextFileReader(FileReader):

    def __init__(self, path):
        self.path = path  # 定义成员变量记录文件的路径

    # 复写（实现抽象方法）父类的方法
    def read_data(self) -> list[Record]:
        f = open(self.path, "r", encoding="UTF-8")

        record_list: list[Record] = []
        for line in f.readlines():
            line = line.strip()  # 消除读取到的每一行数据中的\n
            data_list = line.split(",")
            record = Record(data_list[0], data_list[1], int(data_list[2]), data_list[3])
            record_list.append(record)

        f.close()
        return record_list


class JsonFileReader(FileReader):

    def __init__(self, path):
        self.path = path  # 定义成员变量记录文件的路径

    def read_data(self) -> list[Record]:
        f = open(self.path, "r", encoding="UTF-8")

        record_list: list[Record] = []
        for line in f.readlines():
            data_dict = json.loads(line)
            record = Record(data_dict["date"], data_dict["order_id"], int(data_dict["money"]), data_dict["province"])
            record_list.append(record)

        f.close()
        return record_list


if __name__ == '__main__':
    text_file_reader = TextFileReader("D:/2011年1月销售数据.txt")
    json_file_reader = JsonFileReader("D:/2011年2月销售数据JSON.txt")
    list1 = text_file_reader.read_data()
    list2 = json_file_reader.read_data()

    for l in list1:
        print(l)

    for l in list2:
        print(l)

```

## ***131 ~ 164  没看了 SQL数据库_Nq1sDyTO***  

### MySQL的安装

## ***100道python题目***

## 真题

### 冒泡排序

```py
""""""

"""
一、题目思路
冒泡排序的核心逻辑是：
    相邻比较：从列表头部开始，依次比较相邻的两个元素，如果前一个比后一个大（逆序），就交换它们的位置。
    多轮遍历：重复上述过程，每一轮遍历都会把当前未排序部分的最大值 “冒泡” 到末尾。
    提前终止（优化）：如果某一轮遍历中没有发生任何交换，说明列表已经完全有序，可以提前结束排序，避免不必要的循环。
"""


def bubble_sort(arr):
    # 外层循环：控制排序的轮数
    # 每一轮结束后，最大的i个元素已经排好序在末尾，无需再比较
    for i in range(len(arr)):
        # 优化标志：假设当前轮没有发生交换
        swapped = False

        # 内层循环：进行相邻元素的比较和交换

        #! 注意：range(len(arr) - i - 1)，因为每一轮后末尾i个元素已排好序，不需要再比
        #!  -1：为了保证 j+1 不越界
        #!  -i：因为后面 i 个元素已经排好序，不用再比
        #? for j in range(i,len(arr)): 这里是从前往后冒的，所以不能以i开头
        for j in range(len(arr) - i - 1):
            # 比较相邻元素：如果前一个 > 后一个，说明顺序错误
            if arr[j] > arr[j + 1]:
                # 交换两个元素的位置
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
                # 标记发生了交换
                swapped = True

        # 如果这一轮没有发生任何交换，说明列表已经完全有序
        # 提前退出循环，节省时间
        if not swapped:
            break

    # 返回排序后的列表（也可以不返回，因为列表是原地修改的）
    return arr


# 定义一个待排序的列表
test_list = [64, 34, 25, 12, 22, 11, 90]
print("排序前：", test_list)

# 调用冒泡排序函数
sorted_list = bubble_sort(test_list)
print("排序后：", sorted_list)
```

### 005：三数排序  | 037 排序（10个数）-选择排序

```py
# 方法一：使用内置 sorted() 函数
# raw = []
# for i in range(3):
#     x = input('int%d: '%(i))
#     raw.append(int(x))
# print(sorted(raw))

# 方法2：选择排序
"""
每一趟在待排序元素中选取关键字最小的元素加入有序子序列
每一趟只做一次交换
"""
# ! 2.1错误方法，因为值传递问题，导致swap方法交换不了元素

# raw = [] 

# for i in range(3):
#     num = input()
#     raw.append(int(num))
# print(raw)
#
#
# # 值传递问题，只修改了局部变量信息，所以无法完成交换
# def swap(a, b):
#     temp = a
#     a = b
#     b = temp
#
#
# for i in range(len(raw)):
#     min_index = i
#     for j in range(i, len(raw)):
#         if raw[min_index] > raw[j]:
#             min_index = j
#     swap(raw[i], raw[min_index])
#
# print(raw)

# ! 2.2 改swap函数

"""raw = []
for i in range(3):
    num = input()
    raw.append(int(num))
print(raw)


# 值传递问题，只修改了局部变量信息，所以无法完成交换
def swap(l, a, b):
    temp = l[a]
    l[a] = l[b]
    l[b] = temp


for i in range(len(raw)):
    min_index = i
    for j in range(i, len(raw)):
        if raw[min_index] > raw[j]:
            min_index = j
    swap(raw, i, min_index)

print(raw)"""

# 方法3：选择排序，利用Python特有语法
"""
	注意点
	1. 第二个for循环in后面是len(raw)，这样更通用
	2.不要用min，min是关键字，用min_index
"""
raw = []
for i in range(3):
    num = input()
    raw.append(int(num))
print(raw)

# for i in len(l): 写成这样报错了，因为你这里的结果in后面是整型
for i in range(len(raw)):
    min_index = i
#! 这里for j in range(len(raw)): 少了i, 是错的，因为只有加了i，内层循环j才会跟着i的变化去变
    for j in range(i, len(raw)):
        if raw[min_index] > raw[j]:
            min_index = j
    raw[i], raw[min_index] = raw[min_index], raw[i]

print(raw)

```



### 0001：将字符串中的单词顺序反转

```py
""""""
"""
题目思路 💡
要实现单词反转，核心思路分为三步：
    分割：使用 split() 方法将输入字符串按空格分割成单词列表。
    反转：使用切片 [::-1] 将单词列表的顺序反转。
    
    拼接：使用 join() 方法将反转后的单词列表重新拼接成一个字符串，单词之间用空格分隔
    lst = ['hello', 'world', 'python']
    print(" ".join(lst))。
    
    split()：字符串 → 列表
    join()：列表 → 字符串
"""

# 定义函数 reverse_words，参数 s 是输入的字符串
def reverse_words(s):
    # 使用 split() 方法将字符串按空格分割成单词列表
    # 例如输入 "hello world"，会得到列表 ["hello", "world"]
    words = s.split()
    # 使用切片 [::-1] 反转单词列表
    # 例如 ["hello", "world"] 会变成 ["world", "hello"]
    reversed_words = words[::-1]
    # 使用 " ".join() 将反转后的列表重新拼接成字符串
    # 例如 ["world", "hello"] 会变成 "world hello"
    return " ".join(reversed_words)

# 定义测试字符串
s = "hello world"
# 调用函数并打印结果
print(reverse_words(s))
```

### 040：逆序列表

#### 方法一 

```py
""""""
"""
二、题目思路 💡
目标：将一个数组（列表）逆序输出。核心思路：
    手动交换法：利用 “首尾对应位置元素交换” 的思想，只需要循环到列表长度的一半，即可完成整个列表的逆序（避免重复交换）。
    内置方法法：直接使用 Python 列表提供的 reverse() 方法，该方法会原地反转列表，代码更简洁高效。
"""

a = [1,2,3,7,8,9] # 6/2=3
b = [11,22,33,44,77,88,99] # 7/2=3.5 int(3.5)=3

# 定义初始列表
lis = [1, 10, 100, 1000, 10000, 100000]

# 循环次数为列表长度的一半，因为每交换一对元素，无需重复操作
for i in range(int(len(lis)/2)):
    # 交换第 i 个元素和倒数第 i+1 个元素（索引从 0 开始）
    lis[i], lis[len(lis)-1-i] = lis[len(lis)-1-i], lis[i]

# 输出提示信息
print('第一种实现：')
# 打印逆序后的列表
print(lis)



```

#### 方法二

```py
# 重新定义初始列表（因为第一种实现已修改了 lis 的值）
lis = [1, 10, 100, 1000, 10000, 100000]

# 输出提示信息
print('第二种实现：')
# 调用列表内置的 reverse() 方法，原地反转列表
lis.reverse()
# 打印反转后的列表
print(lis)
```

#### 方法三

```py
# 定义初始列表（保持和前两种方法一致的初始值）
lis = [1, 10, 100, 1000, 10000, 100000]
# 输出提示信息
print('第三种实现（切片）：')
# 用切片生成逆序列表，原列表 lis 不会被修改
reverse_lis = lis[::-1]
# 打印新的逆序列表
print(reverse_lis)
# 打印原列表，验证原列表未被修改
print('原列表未被修改：', lis)
```

### 比较三个数的大小

```py
"""
这段代码采用嵌套分支两两比较法，核心逻辑是先确定前两个数的大小顺序，再将第三个数插入到对应位置，最终确定三个数从大到小的完整顺序：
第一步：先比较前两个数a和b，分成两大分支：a >= b 或 b > a（else 分支）
第二步：在每个大分支里，将第三个数c和前两个数分别比较，确定c的排位，最终得到从大到小的完整顺序，直接打印输出。
"""

# 1. 接收用户输入的完整字符串，提示用户输入三个用空格分隔的整数
string = input("请输入三个整数,中间用空格分隔:")

# 2. 用split()方法按空格分割输入的字符串，得到一个字符串类型的列表
# 比如输入"43 22 88"，分割后得到 ["43", "22", "88"]
lst = string.split()

# 3. 分别取出列表中第0、1、2位的元素，转换为整数类型，赋值给a、b、c三个变量
a, b, c = int(lst[0]), int(lst[1]), int(lst[2])

#! 高级简写版本
# user_input = input("请输入三个数字，用空格分开")
# a,b,c = list(map(int,user_input.split()))

# 4. 第一层判断：先比较前两个数a和b，确定a大于等于b的情况
if a >= b:
    # 进入此分支，说明 a >= b，接下来判断第三个数c的位置
    # 4.1 如果c比a还大，说明c是最大值，顺序为 c > a > b
    if c >= a:
        print(c, a, b,'c,a,b')
    # 4.2 如果c没有a大，但比b大，说明c在中间，顺序为 a > c > b
    elif c >= b:
        print(a, c, b,'a,c,b')
    # 4.3 剩下的情况：c比b还小，顺序为 a > b > c
    else:
        print(a, b, c,'a,b,c')

# 5. 第一层else分支：进入此分支，说明 b > a
else:
    # 注释标注当前分支的前提：b > a，接下来判断第三个数c的位置
    # 5.1 如果c比b还大，说明c是最大值，顺序为 c > b > a
    if c >= b:
        print(c, b, a,'c,b,a')
    # 5.2 如果c没有b大，但比a大，说明c在中间，顺序为 b > c > a
    elif c >= a:
        print(b, c, a,'b,c,a')
    # 5.3 剩下的情况：c比a还小，顺序为 b > a > c
    else:
        print(b, a, c,'b,a,c')
```

### list添加操作

```py
""""""
"""
方法/操作			    行为描述	                                                       原列表是否改变
append(x)				在列表末尾添加一个元素（如果 x 是列表，会作为一个整体元素加入）	       ✅ 是

lst1 += lst2				原地扩展列表，效果等同于 extend(lst2)，原列表改变	               ✅ 是
extend(iter)				在列表末尾添加可迭代对象的所有元素（如列表、字符串的元素逐个加入）	   ✅ 是

insert(i, x)				在指定索引 i 处插入元素 x，原位置及后面的元素后移	               ✅ 是
lst1 + lst2				拼接两个列表，生成一个新列表，原列表不变	                           ❌ 否
"""

lst = [1, 2]
lst.append([3, 4])
print(lst)  #! 不知道输出是哈

print('='*50)

lst1 = [1, 2]
lst2 = [3, 4]
lst1.extend(lst2)
print(lst1) #! 不知道输出是哈

lst3 = [55,66]
lst1+=lst3
print(lst1) #! 不知道输出是哈

print('='*50)

lst1 = [1, 2]
lst2 = [3, 4]
lst3 = lst1+lst2
print(lst1,lst2,lst3)
lst3.insert(4,5) #! 在指定索引 i 处插入元素 x，原位置及后面的元素后移
print(lst3)

lst3.insert(4,55)
print(lst3)



```

### match case❓简单看看即可

```py
""""""
"""
match 待匹配的表达式:
    case 模式1:
        匹配成功执行的代码
    case 模式2:
        匹配成功执行的代码
    case _:  # 通配符，匹配所有未匹配的情况（类似 default）
        默认执行的代码

字面量模式：匹配具体的值（如 1, "hello", True）。
或模式：用 | 匹配多个值（如 1 | 2 | 3）。
序列模式：匹配列表 / 元组的结构（如 [a, b] 匹配长度为 2 的列表）。
通配符 _：匹配任何值，通常放在最后。
"""


def judge(x):
    match x:
        case 0:
            return "零"
        case 1 | 2:
            return "小数字"
        case _:
            return "其他"
# ! case 1 | 2 表示匹配 1 或 2，输入 2 命中此分支。
print(judge(2))



data = [1, 2]
match data:
    case [a, b]:
        print(a + b)
    case [a, b, c]:
        print(a + b + c)
    case _:
        print("不匹配")
# ! data 是长度为 2 的列表，命中 case [a, b]，并将 a 赋值为 1，b 赋值为 2，输出 1+2=3。


def func(x):
    match x:
        case "A":
            return "优秀"
        case "B":
            return "良好"
        case "C":
            return "及格"
        case _:
            return "未知等级"
print(func("D"))
#! 解析：输入 "D" 没有命中任何字面量分支，最终命中 case _ 兜底分支。


day = 6
match day:
    case 1 | 2 | 3 | 4 | 5:
        print("工作日")
    case 6 | 7:
        print("周末")
    case _:
        print("无效日期")
#! 解析：6 命中 case 6 | 7 分支


coord = (10, 20)
match coord:
    case (0, 0):
        print("原点")
    case (x, 0):
        print(f"在X轴上，坐标为{x}")
    case (0, y):
        print(f"在Y轴上，坐标为{y}")
    case (x, y):
        print(f"在平面上，坐标({x}, {y})")
#! 解析：(10, 20) 既不是原点也不在坐标轴上，命中最后的 (x, y) 结构分支


lst = [1, 2, 3, 4]
match lst:
    case [a, b, _, _]:
        print(a + b)
    case [a, b, c]:
        print(a + b + c)
    case _:
        print("不匹配")
#! 解析：[1, 2, 3, 4] 长度为 4，命中 [a, b, _, _]，a=1, b=2，和为 3。


num = 15
match num:
    case x if x < 10:
        print("小于10")
    case x if 10 <= x < 20:
        print("介于10和20之间")
    case x if x >= 20:
        print("大于等于20")
#! 解析：15 满足 10 <= x < 20 的 guard 条件。


user = {"name": "张三", "age": 20}
match user:
    case {"name": name, "age": age}:
        print(f"姓名：{name}，年龄：{age}")
    case {"name": name}:
        print(f"姓名：{name}")
    case _:
        print("未知用户")
#! 解析：字典模式按顺序匹配，user 同时包含 "name" 和 "age" 键，命中第一个分支。

```

### 006：斐波那契数列 

```py
"""
斐波那契数列（Fibonacci Sequence）是一串有固定递推规律的数字序列，核心规则特别简单：
从某两个初始数开始，后面每一个数，都等于它前面两个数的和。

这是你刚写的递归 / 循环代码对应的版本，也是新手练习时最常见的，第 1 项、第 2 项都是 1，后续按规律递推：
数列开头：1，1
递推规则：第 n 项 = 第 n-1 项 + 第 n-2 项（n ≥ 3）
前 10 项举例：1，1，2，3，5，8，13，21，34，55
"""
"""
    fib(0) -> 0
    fib(1) -> 1
    fib(2) -> 1
"""

#! 之前学习的思路，直接把n=1和n=2的值给确定了
# def fib(n):
#     if n ==1 or n==2:
#         return 1
#     return fib(n-1) + fib(n-2)


#! 但是这个没有确定2的，n=2也是计算出来的
def fib(n):
    if n <= 0:
        return 0
    elif n == 1:
        return 1
    else:
        return fib(n - 1) + fib(n - 2)

# ? 迭代版

# def fib(n):
#     if n <= 0:
#         return 0
#     elif n == 1:
#         return 1
#     else:
#         a = 0
#         b = 1
#         for i in range(2, n + 1):
#             a, b = b, a + b
#         return b

for i in range(20):
    print(fib(i))
```

### 判断一个数是奇数还是偶数

```py
""""""
"""
解题思路
    输入处理：接收用户输入的数字，把字符串类型的输入转为整数
    核心判断：用 ** 取模运算%** 判断能否被 2 整除 —— 余数为 0 是偶数，否则是奇数
    结果输出：根据判断结果打印对应的奇偶性
"""

# 接收用户输入：input()获取的是字符串，用int()转为整数类型
num = int(input("请输入一个整数："))

# 条件判断：num除以2的余数等于0，说明能被2整除，是偶数
if num % 2 == 0:
    print(f"{num} 是偶数")
# 余数不为0，就是奇数
else:
    print(f"{num} 是奇数")
```



### 10数求和

```py
""""""
"""
解题思路
    输入处理：引导用户输入 10 个用空格分隔的数字，用split()拆分字符串，map()批量转整数，最终存为列表
    累加计算：初始化求和变量为 0，遍历列表中的每个数字，逐个累加到求和变量中（也可直接用内置sum()函数，更简洁）
    结果输出：打印最终的累加和
"""

# 接收用户输入，split()按空格拆分字符串成列表，map(int,...)批量转整数，list()转为列表
num_list = list(map(int, input("请输入10个整数，用空格分隔：").split()))

# 初始化求和变量，初始值为0（累加的起点）
sum_result = 0

# 遍历列表中的每个数字，逐个累加
for n in num_list:
    sum_result += n  # 等价于 sum_result = sum_result + n，把当前数字加到总和里

# 打印最终求和结果
print(f"10个数的总和为：{sum_result}")

# 【考试可用简洁版】
# sum_result = sum(num_list)  # 直接用Python内置sum函数计算列表总和
# print(f"10个数的总和为：{sum_result}")
```



### 10数求平均

```py
""""""
"""
解题思路
    输入处理：和 10 数求和一致，先获取 10 个数字的整数列表
    计算总和：用sum()函数快速得到 10 个数的总和
    计算平均值：平均值 = 总和 ÷ 数字的个数（用len()获取列表长度，比硬写 10 更通用）
    结果输出：打印平均值
"""

# 接收并处理用户输入，得到存储10个数字的整数列表
num_list = list(map(int, input("请输入10个整数，用空格分隔：").split()))

# 第一步：计算10个数的总和
sum_result = sum(num_list)

# 第二步：计算平均值，len(num_list)获取列表里数字的个数（这里是10）
avg_result = sum_result / len(num_list)

# 打印最终的平均值
print(f"10个数的平均值为：{avg_result}")
```





### =======================================================

### 插入排序❓

```py
""""""
"""
直接插入排序
思路
    把数组分成两部分：
    左边：已经排好序
    右边：还没排
    每次从右边拿一个数，插入到左边合适的位置。
"""
# 可以这样来模拟思路，记思路比记代码更牢靠
# 执行前
"""
    cur=8

    0    1    2    3    4
    9    8    7    6    5   
    j    i
        cur
"""
# 执行一次for循环后
"""
    cur=7

    0    1    2    3    4
    8    9    7    6    5   
         j    i
             cur
"""


def insertion_sort(arr):
    #! 从第2个元素开始，默认第1个元素已经有序
    for i in range(1, len(arr)):
        current = arr[i]  # 当前要插入的元素
        j = i - 1

        # 把比 current 大的元素都往后移动一位 
        # 拿 cur 往前比较，前面比它大的都后移
        #! while j>=0 and arr[j+1]<arr[j]: 这是错的，是和cur比呀
        while j >= 0 and arr[j] > current: #! 这里是并列的关系 
            arr[j + 1] = arr[j]
            j -= 1

        # 找到合适位置后插入
        arr[j + 1] = current

    return arr


# 测试
nums = [5, 2, 9, 1, 1111]
print(insertion_sort(nums))
```



### 

### 二分排序（折半插入排序）

```py
""""""
"""
二分插入排序（折半插入排序）
思路
    普通插入排序是从后往前一个个找插入位置。

    二分插入排序是：
    先用二分查找找到应该插入的位置，再统一移动元素。

    这样“找位置”更快，逻辑也比较清楚。
"""
# ! 插入前
"""
折半插入排序
    0     1     2     3     4
    8     9     5     6     7
                i
    L     R
    mid
"""
# ! 插入后
"""
折半插入排序
    0     1     2     3     4
    8     9     5     6     7
                i
    L
R         
    mid
   insert  j    
"""


def binary_insert_sort(arr):
    for i in range(1, len(arr)):
        current = arr[i]
        # 在已经排好序的区间 [0, i-1] 中
        # 用二分查找找到 current 的插入位置
        left = 0
        right = i - 1

                             #! 手推例子就可以验证，low=high的时候不能停下来
        while left <= right: #! 这里要保证low<=right也执行，不然好会少处理情况，导致low最后的位置不是插入位置
            mid = (left + right) // 2
            if arr[mid] > current:  # ! 我中间元素比你要找的元素大，所以你cur小，小就应该在我的左半区间找，所以是right = mid - 1
                right = mid - 1  # ! 这里和下面改的是right和left，而不是mid=啥啥啥
            else:
                left = mid + 1

        # 此时 left 就是应该插入的位置
        insert_pos = left

        # 把插入位置后的元素都向后移动一位
        j = i - 1
        while j >= insert_pos:  # ! 从已排序部分的末尾（即最后一位）开始，把 insert_pos 到 i-1 之间的元素全部向后移动一位，为当前元素腾出插入位置。
            arr[j + 1] = arr[j]
            j -= 1

        # 插入当前元素
        arr[insert_pos] = current


# 测试
nums = [5, 2, 9, 1, 3, 88, 77]
binary_insert_sort(nums)
print(nums)
```





### 004：这天第几天 （判断闰年）

```py
#题目 输入某年某月某日，判断这一天是这一年的第几天？

def isLeapYear(y):
	#! 是能400整除 或 能被4整除，但不能被100整除
	# 判断闰年的函数：能被400整除，或能被4整除但不能被100整除
	return (y % 400 == 0) or (y % 4 == 0 and y % 100 != 0)

# 初始化每个月的天数（索引0占位，对应1-11月）
DofM = [0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30] #! 腊月是12月，所以11月是30天
res = 0  # 用于累加月份天数

# 输入年月日
year, month, day = map(int, input("请输入年月日，用空格分割：").split())

# 若为闰年，二月天数+1（改为29天）
if isLeapYear(year):
	DofM[2] += 1

# 累加当前月份之前的所有月份天数
for i in range(1, month):  # 注意：range(1, month)才是“1到month-1月”（之前range(month)会多算索引0）
	res += DofM[i]
#! 记得加day，也就是当月的日期
# 最终天数 = 之前月份的总天数 + 当月的日期
print(res + day)

```

### 061 杨辉三角

```py
""""""

"""
二、题目思路
杨辉三角的核心规则：
    首行（第 0 行）仅有一个元素 [1]
    每一行的 首尾 元素固定为 1

本代码采用错位相加的技巧实现规则：把上一行分别在开头补 0、结尾补 0，得到两个长度相同的新列表，
再将两个列表对应位置的元素相加，就能直接得到符合规则的下一行，无需嵌套循环计算中间元素。
    示例：
    第一行是[1]
    开头补 0 → [0,1]
    结尾补 0 → [1,0]
    对应位置相加 → 0+1=1、1+0=1，得到下一行[1,1]
    
    第二行是[1,1]
    开头补 0 → [0,1,1]
    结尾补 0 → [1,1,0]
    对应位置相加 → 0+1=1、1+1=2、1+0=1，得到下一行[1,2,1]
    
    第三行是[1,2,1]
    开头补 0 → [0,1,2,1]
    结尾补 0 → [1,2,1,0]
    对应位置相加，得到下一行[1,3,3,1]
"""


# 定义生成杨辉三角的函数，numRows为要生成的总行数
def generate(rows):
    # 初始化结果列表，首行固定为[[1]]，也就是杨辉三角的第0行
    arr = [[1]]
    # 循环生成剩余的行：已经有了第0行，所以从1循环到numRows-1，共执行numRows-1次
    for i in range(1, rows):
        # 核心代码：生成当前行并添加到结果列表
        arr.append(
            # 将map返回的迭代器转为列表，得到完整的当前行
            # map：将匿名函数应用到两个列表的对应元素上
            # 匿名函数：接收两个参数x、y，返回它们的和（对应位置元素相加）
            # 给上一行的开头补0，比如上一行[1] → [0,1]
            # 给上一行的结尾补0，比如上一行[1] → [1,0]
            list(map(lambda x, y: x + y, [0] + arr[-1], arr[-1] + [0]))
        )
    # 返回前numRows行，兼容numRows=0的边界情况（输入0行时返回空列表）
    return arr[:rows]
    '''
    只返回前 rows 行
    切片规则：
        arr[:0] → 空列表 []
        arr[:1] → 第 1 行
        arr[:3] → 前 3 行
    '''

    # return arr


# 调用函数，生成杨辉三角前10行，赋值给变量a
a = generate(10)
# 遍历生成的每一行
for i in a:
    # 逐行打印杨辉三角
    print(i)
```

### 取三个数的平均数、最大值、最小值

编写Python函数，接收三个数作为参数，返回这三个数的平均数、最大值和最小值。

```py
""""""
"""
解题思路
    输入处理：接收用户输入的 3 个数字，用map()转整数后直接解包为 3 个变量，和你之前的写法完全适配
    计算平均数：三个数的和除以 3
    计算最值：用 Python 内置max()/min()函数直接获取最大值、最小值（也可手动用条件判断实现，底层逻辑更清晰）
    结果输出：分别打印三个结果
"""

# 接收用户输入，map转整数后直接解包为3个变量，一一对应赋值
a, b, c = map(int, input("请输入3个整数，用空格分隔：").split())

# 1. 计算三个数的平均值
avg = (a + b + c) / 3

# 2. 计算最大值：内置max函数可直接获取多个数里的最大值
max_num = max(a, b, c)

# 3. 计算最小值：内置min函数可直接获取多个数里的最小值
min_num = min(a, b, c)

# 打印所有结果
print(f"三个数的平均值为：{avg}")
print(f"三个数的最大值为：{max_num}")
print(f"三个数的最小值为：{min_num}")

# 【手动判断最值（不使用内置函数，适合理解底层逻辑）】
# 手动找最大值
# if a >= b and a >= c:
#     max_num = a
# elif b >= a and b >= c:
#     max_num = b
# else:
#     max_num = c
#
# 手动找最小值
# if a <= b and a <= c:
#     min_num = a
# elif b <= a and b <= c:
#     min_num = b
# else:
#     min_num = c
```





### 026：递归求阶乘

```py
def fn(n):
    if n == 1:
        return 1
    return fn(n-1)*n
print(fn(5))
```



### =======================================================================================================================================





## 第一档 

### 001：数字组合

```py
# “互不相同且无重复数字” 就是指：组成这个数的每一位数字都不一样，没有任何一个数字会在不同数位上重复出现。
count = 0
for i in range(1, 5):
    for j in range(1, 5):
        for k in range(1, 5):
            if i != j and i !=k and j != k:
                print(i,j,k)
                count+=1
print(count)
```

### 007：copy

#### 用了copy模块

```py
# 导入拷贝模块
import copy

# 定义原始列表（包含嵌套子列表）
a = [1, 2, 3, 4, ['a', 'b']]
# 直接赋值
b = a
print('b =', b)
print('=====')


# 浅拷贝：切片方式
c = a[:]
# 浅拷贝：copy模块的copy方法
d = copy.copy(a)
print('c =', c)
print('d =', d)
print('=====')

# 深拷贝：copy模块的deepcopy方法
e = copy.deepcopy(a)

# 对原始列表做两层修改：顶层追加元素、嵌套子列表追加元素
a.append(5)
a[4].append('c')

# 打印所有变量
print('a =', a)
print('e =', e)
```

#### 没用copy

```py

# ! 不用copy实现深浅拷贝
# 手写浅拷贝函数：仅复制顶层列表，嵌套元素仍为原引用
def my_shallow_copy(lst):
    new_lst = []
    for item in lst:
        new_lst.append(item)  # 顶层元素直接添加，嵌套子列表还是原引用
    return new_lst

# 手写深拷贝函数：递归复制所有层级，嵌套元素也生成新对象
def my_deep_copy(lst):
    new_lst = []
    for item in lst:
        # 如果元素是列表（嵌套层），递归调用深拷贝；非列表（数字/字符串）直接添加
        if isinstance(item, list):
            new_lst.append(my_deep_copy(item))
        else:
            new_lst.append(item)
    return new_lst

# 原始列表（含嵌套子列表，和原示例一致）
a = [1, 2, 3, 4, ['a', 'b']]
# 直接赋值（原逻辑不变）
b = a
print('b =', b)
print('=====')

# 浅拷贝：切片方式（原逻辑，可作为对比）
c = a[:]
# 浅拷贝：手写浅拷贝函数（替代copy.copy）
d = my_shallow_copy(a)
print('c =', c)
print('d =', d)
print('=====')


# 深拷贝：手写深拷贝函数（替代copy.deepcopy）
e = my_deep_copy(a)

# 对原始列表做两层修改（原逻辑不变）
a.append(5)
a[4].append('c')
print('a =', a)
print('e =', e)

```

### 008：九九乘法表

```py
for i in range(1, 10):
    for j in range(1, 10):
        if j <= i:
            print(f"{j}*{i}={i * j}\t", end='')
    print()

```

```py
for i in range(1, 10):
    for j in range(1, i + 1): #i+1 的作用是让内层循环的j能取到i这个值，根源是 Python 中 range() 函数的左闭右开特性 —— 这是理解这个写法的关键，也是九九乘法表能打出上三角格式的核心。
        print('%d*%d=%2d ' % (i, j, i * j), end="")
    print()
```

### 009：暂停一秒输出❓

```py
import time
"""
Python 切片的基础格式是 [起始索引:结束索引]，[-2:] 是两个关键简写的组合，专门针对 “取末尾元素” 的场景：
规则 1：负数索引 = 从末尾倒着数
Python 中序列的索引可以是负数，用来快速定位末尾元素，这是切片的核心技巧：
-1 = 最后 1 个元素
-2 = 倒数第 2 个元素
-3 = 倒数第 3 个元素，以此类推。
规则 2：索引留空 = 取到序列的「头 / 尾」
起始索引留空 → 从序列第一个元素开始取；
结束索引留空 → 取到序列最后一个元素结束。
组合起来：[-2:] = 从「倒数第 2 个元素」开始，一直取到「最后一个元素」
也就是固定取最后 2 个元素，不管序列多长，结果都是末尾两位。
"""
for i in range(4):
    # 取当前时间戳的最后两位（每秒变化，直观体现“暂停一秒”）
    print('time.time()', time.time())
    print('int(time.time())', int(time.time()))
    print('str(int(time.time()))[-2:]', str(int(time.time()))[-2:])
    # 暂停1秒
    time.sleep(1)
    
  
```

### 010：给人看的时间

```py
import time

for i in range(4):
    # 格式化当前时间：年-月-日 时:分:秒
    print(time.strftime("%Y-%m-%d %H:%M:%S", time.localtime()))
    # 暂停1秒
    time.sleep(1)
```

### 015：分数归档

```py
"""
题目思路
需求目标：将输入的分数划分为三个等级：
分数 ≥ 90 → 等级 A
60 ≤ 分数 ≤ 89 → 等级 B
分数 < 60 → 等级 C

实现思路（题目要求的条件运算符嵌套）：
利用 Python 三元表达式（条件运算符）的嵌套特性，通过一次表达式完成多层判断，替代 if-elif-else 语句。
"""

score = int(input("输入分数："))
def score_to_grade(score):
    if score < 60:
        return "C"  # 返回等级，不直接打印
    elif score < 90:
        return "B"
    else:
        return "A"

# 调用函数获取等级，后续可随意使用/打印
grade = score_to_grade(score)
print(f"你的分数为{score}，等级为{grade}")  # 输出更友好，也可单独print(grade)
```

### 016 ：输出日期

```py
"""
两者的核心差异源于设计目标：time 更贴近操作系统的底层时间实现，
datetime 则是在 time 等底层模块基础上做了封装，让开发者不用关注时间戳、时间元组等底层细节，
直接操作直观的时间对象。
"""

"""
题目思路
核心需求：掌握 Python datetime 模块的基础用法，包括获取当前日期、创建指定日期、格式化日期输出、修改日期属性。
实现逻辑：
导入 datetime 模块，利用其 date 类处理日期相关操作。
通过 date.today() 获取当前本地日期。
通过 date(year, month, day) 直接创建指定日期对象。
通过 strftime() 方法将日期格式化为自定义字符串。
通过 replace() 方法修改日期的属性（如年份），生成新的日期对象。

"""

# 导入Python内置的datetime模块，该模块用于处理日期和时间
import datetime

import time

# 调用date类的today()方法，获取当前本地日期并打印（默认格式为YYYY-MM-DD）
print(datetime.date.today()) # 2026-02-03

# 直接创建一个指定日期的date对象（2333年2月3日）并打印
print(datetime.date(2333,2,3)) # 2333-02-03

# 获取当前日期，并用strftime()方法格式化为“日/月/年”的字符串后打印
# %d表示两位日期，%m表示两位月份，%Y表示四位年份
print(datetime.date.today().strftime('%d/%m/%Y'))
print(datetime.date.today().strftime('%Y-%m-%d %H:%M:%S')) # 2026-02-03 00:00:00

print(time.strftime('%Y-%m-%d %H:%M:%S')) # 2026-02-03 16:01:29




# 创建一个指定日期的date对象：1111年2月3日，赋值给变量day
day=datetime.date(1111,2,3)

# 调用replace()方法修改日期的年份：在原年份基础上+22（1111+22=1133），生成新的日期对象并重新赋值给day
day=day.replace(year=day.year+22)

# 打印修改后的日期对象（格式为YYYY-MM-DD）
print(day)
```

### 017：字符串构成

```py
""""""
"""
题目思路
    需求目标：
    输入一行字符串，分别统计其中

    !英文字母、
    *空格、
    ?数字
    其他字符

    的个数。
    核心逻辑：
        初始化 4 个计数器，分别对应字母、数字、空格、其他字符的数量。
        遍历输入字符串的每个字符，通过字符串内置方法判断字符类型。
        根据字符类型更新对应计数器，最后输出所有统计结果。
    关键方法：
    使用isspace()判断空格、isdigit()判断数字、isalpha()判断字母，剩余字符归为 “其他”。
"""

# 1. 获取用户输入的字符串，input()会读取到换行前的所有字符
string = input(" 输入字符串： ")

# 2. 初始化四个计数器，分别统计字母、数字、空格、其他字符的数量
alp = 0  # 英文字母计数器
num = 0  # 数字计数器
spa = 0  # 空格计数器
oth = 0  # 其他字符计数器

# 3. 遍历字符串的每个字符（通过索引遍历）
# for i in range(len(string)):
#     # 判断当前字符是否是空格
#     if string[i].isspace():
#         spa += 1
#     # 否则判断是否是数字
#     elif string[i].isdigit():
#         num += 1
#     # 否则判断是否是英文字母
#     elif string[i].isalpha():
#         alp += 1
#     # 剩下的字符归为其他类型
#     else:
#         oth += 1

#! 3.5 for char in string:  # 直接遍历每个字符
#! 注意是 s.isspace()    ?不是isspace(s)
for s in string:
    # 判断当前字符是否是空格
    if s.isspace():
        spa += 1
    # 否则判断是否是数字
    elif s.isdigit():
        num += 1
    # 否则判断是否是英文字母
    elif s.isalpha():
        alp += 1
    # 剩下的字符归为其他类型
    else:
        oth += 1

# 4. 输出统计结果
print('space: ', spa)
print('digit: ', num)
print('alpha: ', alp)
print('other: ', oth)
```

### 018：复读机相加

```py
""""""
"""
这段代码没有错误，可以正确实现题目要求的 “复读机相加” 功能。
📝 题目思路
需求目标：
    计算 s = a + aa + aaa + ... + a...a（共 n 项）的值，其中 a 是一个数字（由用户输入），n 是相加的项数（由用户输入）。
核心逻辑：
    用字符串拼接的方式生成每一项（如输入 a=2，则依次生成 '2' → '22' → '222'…），避免了复杂的数学位数计算。
    每次将当前字符串转为整数，累加到结果中，循环 n 次即可得到总和。
关键技巧：
    利用字符串的拼接特性（a += a[0]）快速生成重复数字的项，逻辑直观且代码简洁。
"""
# 1. 获取用户输入的数字（以字符串形式保存，方便后续拼接）
a = input('被加数字：')

# 2. 获取用户输入的相加项数，转换为整数
n = int(input('加几次？：'))

# 3. 初始化结果变量，用于累加每一项的值
res = 0

# 4. 循环n次，生成n项并累加
for i in range(n):
    # 将当前字符串a转为整数，加到结果中
    res += int(a)
    # 拼接a的第一个字符，生成更长的重复数字字符串（如'2'→'22'→'222'）
    a += a[0]

# 5. 输出最终的累加结果
print('结果是：', res)
```

### 029：反向输出

```py
"""
题目思路
题目要求处理一个不多于 5 位的正整数，完成两个核心任务：
    判断该数字是几位数；
    逆序打印出各位数字。
核心思路：利用字符串的特性简化操作（比数学取模 / 整除的方法更简洁）
    字符串的长度直接对应数字的位数；
    字符串切片 [::-1] 可以轻松实现逆序，无需复杂的数学计算。
"""
# 1. 获取用户输入的正整数，先转为整数（确保输入是有效正整数，若输入非整数会触发类型错误，题目假设输入合法）
n = int(input(' 输入一个正整数： '))

# 2. 将整数转为字符串，以便用字符串方法处理位数和逆序
n = str(n)

# 3. 用len(n)获取字符串长度（即数字的位数），通过格式化输出打印位数
print('%d 位数 ' % len(n))

# 4. 用字符串切片[::-1]实现逆序（步长为-1，从最后一个字符到第一个字符），打印逆序结果
print(n[::-1])
```

### 030：回文数

```py

n = int(input(' 输入一个正整数： '))

# 2. 将整数转为字符串，以便用字符串方法处理位数和逆序
n = str(n)

flag = 1
for i in range(len(n)//2):
    if n[i] != n[len(n)-1-i]:
        flag=0

if flag:
    print('回文数')
else:
    print('不是回文数')

```



```py
""""""
"""
题目思路
题目要求：判断一个 5 位数是否为回文数（即个位与万位相同，十位与千位相同）。
核心思路：用双指针法处理字符串，从两端向中间逐一比较对称位置的字符：
    用两个指针 a（起始位置）和 b（末尾位置），分别指向字符串的首尾；
    循环比较 n[a] 和 n[b]，如果发现不相等，直接判定不是回文数；
    如果所有对称位置都相等，判定是回文数。
"""

# 1. 获取用户输入（题目要求输入5位数）
n = input("请输入一个5位的正整数！ ")

# 2. 初始化双指针：a指向开头，b指向末尾
a = 0
b = len(n) - 1
# 3. 初始化标志位：假设是回文数
flag = True

# 4. 双指针循环比较：当a < b时继续（对称位置未比较完）
while a < b:  #! 注意，这是a<b，等于b好像也行，因为就是同一个位置，必定相等，所以写了<
    # 如果当前对称位置字符不相等
    if n[a] != n[b]:
        print('不是回文串 ')
        flag = False  # 标志位设为False
        break  # 直接退出循环，无需继续比较
    # 指针向中间移动
    """
    先计算等号右边的两个表达式：a + 1 和 b - 1（用的是变量当前的旧值）；
    再把计算结果同时赋值给左边的 a 和 b；
    整个过程中，a 和 b 的更新是 “同步” 的，不会出现 “先改 a，再用新 a 算 b” 的情况。
    a = a + 1
    b = b - 1
    """
    a,b = a+1,b-1
    # 5. 根据标志位输出结果
if flag:
    print('是回文串 ')
```

### 032：反向输出2

```py
""""""
"""
题目思路
题目要求：按相反的顺序输出列表的值。

核心思路：利用 Python 列表的切片语法 [::-1]，一步生成逆序的新列表并直接打印，这是 Python 中实现列表逆序最简洁高效的方式。

切片 [::-1] 的含义：步长为 -1，即从列表的最后一个元素开始，向前遍历到第一个元素，生成一个逆序的新列表。
"""

"""
题目思路：
使用Python列表的切片语法 `[::-1]` 直接生成逆序列表，无需额外循环，简洁高效。
切片 `[::-1]` 表示：步长为-1，从列表末尾到开头遍历，生成逆序的新列表。
"""

# 1. 定义原始列表，存储需要逆序的元素
a = ['one', 'two', 'three']

# 2. 使用切片[::-1]生成逆序列表，并打印
print(a[::-1])  # 输出：['three', 'two', 'one']
```

### 033：列表转字阶串

```py
""""""
"""
题目思路
题目要求：将包含整数的列表，按逗号分隔转换为一个字符串（例如 [1,2,3,4,5] → "1,2,3,4,5"）。
"""

"""
题目思路：
1. 列表中的元素是整数，需要先转为字符串（因为join()方法只能连接字符串）；
2. 用生成器表达式 `str(n) for n in arr` 将每个整数转为字符串；
3. 用 `','.join(...)` 以逗号为分隔符，连接所有字符串元素，生成目标字符串。
"""

# 1. 定义包含整数的原始列表
arr = [1,2,3,4,5]

# 2. 将列表元素转为字符串后，用逗号连接并打印
# - str(n) for n in arr：生成器，遍历列表每个元素并转为字符串
"""
for n in arr：逐个取出列表L中的元素，赋值给临时变量n（第一次n=1，第二次n=2，直到最后n=5）；
str(n)：对每一个取出的整数n，执行类型转换，把整数转为对应的字符串（1→"1"、2→"2"、…、5→"5"）；
"""
# - ','.join(...)：用逗号连接所有字符串元素
print(','.join(str(n) for n in arr)) # 输出：1,2,3,4,5

#? 学习这种吧，感觉更好理解
str_arr = list(map(str,arr))
print(','.join(str_arr)) #! 学习这种吧，感觉更好理解



```

```py
#TODO 方法二
"""
手动循环实现思路（切片去逗号版）：
1. 初始化一个空字符串，用于存储最终拼接结果
2. 遍历列表中的每个整数，先转为字符串，再拼上逗号后追加到空字符串
3. 遍历结束后，用切片去掉最后一个多余的逗号（核心：避免末尾多一个,）
4. 打印最终拼接好的字符串
"""
# 定义原始整数列表
L = [1, 2, 3, 4, 5]
# 初始化空字符串，用于累计拼接结果
result = ""
# 遍历列表中的每一个整数
for n in L:
    # 整数转字符串 + 拼上逗号 → 追加到结果字符串
    result += str(n) + ","
# 切片[:-1]：取字符串从开头到倒数第二个字符，去掉最后一个多余的逗号
final_str = result[:-1]
# 打印最终结果
print(final_str)  # 输出：1,2,3,4,5
```

### 079：字符串排序

```py
""""""

"""
题目思路
    题目要求对包含多个字符串的列表进行排序。Python 中字符串的比较遵循字典序（Lexicographical Order），即从左到右逐个比较字符的 Unicode 码点值：
    小写字母中，a 的码点值小于 b，因此以 a 开头的字符串整体小于以 b 开头的字符串。
    若首字符相同，则比较第二个字符，以此类推，直到找到第一个不同的字符来决定大小关系。
"""

# 定义一个包含5个字符串的列表
l = ['baaa','aaab','aaba','aaaa','abaa']

# ! 对列表进行原地排序，默认按字符串的字典序升序排列
l.sort()

# 打印排序后的列表
print(l)
```

### 084：连接字符串

```py

"""
1. split ()：分割字符串 → 转列表
作用：
    将字符串按指定分隔符拆分成列表，默认按「任意空白字符」（空格、换行、制表符）分割。
语法：
    字符串.split(分隔符, 分割次数)（分割次数可选，默认全部分割）
示例：
"""
# 示例1：默认按空白分割
s1 = "苹果 香蕉 橙子"
print(s1.split())  # 输出：['苹果', '香蕉', '橙子']

# 示例2：指定分隔符（逗号）
s2 = "2026-02-09"
print(s2.split("-"))  # 输出：['2026', '02', '09']

# 示例3：指定分割次数
s3 = "a,b,c,d"
print(s3.split(",", 2))  # 输出：['a', 'b', 'c,d']（只分割前2次）


"""
2. join ()：拼接列表 → 转字符串
作用：
    将「可迭代对象（如列表）」中的字符串元素，用指定分隔符连接成一个新字符串（元素必须都是字符串类型）。
语法：
    分隔符.join(可迭代对象)
示例：
"""
# 示例1：用逗号连接列表
lst1 = ['张三', '李四', '王五']
print(",".join(lst1))  # 输出：'张三,李四,王五'

# 示例2：用空字符串连接（无分隔符）
lst2 = ['h', 'e', 'l', 'l', 'o']
print("".join(lst2))  # 输出：'hello'

# 示例3：用换行符连接
lst3 = ['第一行', '第二行', '第三行']
print("\n".join(lst3))  # 输出：第一行（换行）第二行（换行）第三行



# 定义字符串变量a，赋值为 'guangtou'
a = 'guangtou'

# 定义字符串变量b，赋值为 'feipang'
b = 'feipang'

# 使用 + 运算符拼接字符串 b 和 a，然后输出结果
print(b + a)
```

### 088：打印*号

```py
""""""
"""
程序需要循环 7 次，每次读取一个 1 到 50 之间的整数，然后打印与该整数数量相同的星号（*）。
核心是利用 Python 中字符串与整数相乘的特性（'*' * n会生成 n 个星号的字符串），并通过循环重复执行读取和打印操作。
"""
# 循环7次，对应读取7个数
for i in range(7):
    # 读取用户输入并转换为整数
    num = int(input('input a number (1-50): '))
    # 验证输入是否在1-50之间
    if 1 <= num <= 50:
        # 打印对应数量的星号
        print('*' * num)
    else:
        print('输入无效，请输入1-50之间的整数。')
```

### 096：计算复读次数

```py
""""""

"""
题目思路
    这个实例的核心是利用 Python 字符串的count()方法，计算一个子串在主字符串中出现的次数。
    count()方法会返回子串在主串中不重叠出现的次数，非常适合解决这类问题。
"""

# 定义主字符串s1，其中包含多个重复的子串'xuebi'
s1 = 'xuebixuebixuebixuebixuebixuebixuebixuebixue'

# 定义要查找的子串s2
s2 = 'xuebi'

# 调用count()方法，统计s2在s1中出现的次数，并打印结果
print(s1.count(s2))
```



```py

```



```py

```



```py

```



```py

```



```py

```



```py

```

## 第二档

### 002：“个税计算”

#### 法一

```py
profit = int(input())
bonus = 0

# ? 利润 ≤ 10万：提成10%
if profit <= 100000:
    bonus = profit * 0.1

# ? 10万 < 利润 ≤ 20万：低于10万的部分提成10%，高于10万的部分提成7.5%
# ! elif 100000 < 这个判断是没有用的，因为如果如何这个判断，必定会先进入上面一个判断
# elif 100000 < profit <= 200000:
elif profit <= 200000:
    bonus = 100000 * 0.1 + (profit - 100000) * 0.075

# ? 20万 < 利润 ≤ 40万：高于20万的部分提成5%
# ! elif 200000 <  这个判断是没有用的，因为如果如何这个判断，必定会先进入上面一个判断
elif profit <= 400000:  # 350000 = 100000 + 100000 + 150000
    bonus = 100000 * 0.1 + (200000 - 100000) * 0.075 + (profit - 200000) * 0.05

# ? 40万 < 利润 ≤ 60万：高于40万的部分提成3%
# ! elif 400000 <  这个判断是没有用的，因为如果如何这个判断，必定会先进入上面一个判断
elif profit <= 600000:
    bonus = 100000 * 0.1 + (200000 - 100000) * 0.075 + (400000 - 200000) * 0.05 + (profit - 400000) * 0.03

# ? 60万 < 利润 ≤ 100万：高于60万的部分提成1.5%
# ! elif 600000 <  这个判断是没有用的，因为如果如何这个判断，必定会先进入上面一个判断
elif profit <= 1000000:
    bonus = 100000 * 0.1 + (200000 - 100000) * 0.075 + (400000 - 200000) * 0.05 + (600000 - 400000) * 0.03 + (
            profit - 600000) * 0.015

# ? 利润 > 100万：超过100万的部分提成1%
else:
    bonus = (100000 * 0.1 + (200000 - 100000) * 0.075 + (400000 - 200000) * 0.05 + (600000 - 400000) * 0.03 +
             (1000000 - 600000) * 0.015 + (profit - 1000000) * 0.01)
print(bonus)
```

#### 法二

```py


# ! 方法二

profit = int(input('Show me the money: '))
bonus = 0
	

# 各区间的金额跨度
"""
利润 ≤ 10万：                               100000 * 0.1
提成10%

10万 < 利润 ≤ 20万：                         100000 * 0.075
低于10万的部分提成10%，高于10万的部分提成7.5%

20万 < 利润 ≤ 40万：                         200000 * 0.05
高于20万的部分提成5%

40万 < 利润 ≤ 60万：                         200000 * 0.03
高于40万的部分提成3%

60万 < 利润 ≤ 100万：                        400000 * 0.015
高于60万的部分提成1.5%

利润 > 100万：超过100万的部分提成1%
"""
thresholds = [100000, 100000, 200000, 200000, 400000]
# 对应各区间的提成比例
rates = [0.1, 0.075, 0.05, 0.03, 0.015, 0.01]

for i in range(len(thresholds)):
    if profit <= thresholds[i]:
      	# 下面这句是profit * rates[i]，而不是thresholds[i] * rates[i]，不懂就举例90000想想
        bonus += profit * rates[i]
        profit = 0 #todo 为什么需要这条语句，见①
        print(f"{i}if")
        break
    else:
        print(f"{i}else")
        bonus += thresholds[i] * rates[i]
        profit -= thresholds[i]

"""
①
为什么需要 profit = 0？
profit = 0 的目的是标记已经处理完所有利润，防止循环后的代码重复计算。

正确逻辑：
循环中：处理前 5 个区间（0-100万），如果利润在某个区间内，计算该区间部分后就应该结束计算
循环后：只处理超过 100 万的部分
如果没有 profit = 0，当利润小于 100 万时，也会执行 bonus += profit * rates[-1]，这是错误的。
"""

# 处理超过 100 万的部分
if profit > 0:
    print("超100万")
    bonus += profit * rates[-1]

print(bonus)
```

### 003 完全平方数

```py
#!
""""""

"""
先明确题目对应的数学关系
我们要找整数 x，满足：
x + 100 = m²（m 是整数，m² 是完全平方数）
x + 268 = n²（n 是整数，n² 是完全平方数）
由第 1 式可得：x = m² - 100，代入第 2 式得：m² + 168 = n²
这段代码的核心思路就是：枚举可能的 m，验证 m² + 168 是否为完全平方数，若是则计算 x 并输出。
"""
import math

for m in range(0, 200):          # 枚举 m 从 0 到 200
    m2 = m * m                   # 计算 m^2
    n2 = m2 + 168                # 计算 m^2 + 168
    n = int(math.sqrt(n2))       # 取 n2 的平方根并取整
    if n * n == n2:              # 检查 n2 是否是完全平方数
        x = m2 - 100             # 根据公式计算 x
        print(f"找到可能的整数 x = {x}")
        print(f"验证: x + 100 = {x + 100} = {m}^2")
        print(f"      x + 268 = {x + 268} = {n}^2")
        print()
```

```py
"""
===== 题目核心需求 =====
打印10000以内的完全平方数，完全平方数：可以表示为某个整数的平方的数

===== 最优解题思路（思路二修正版）=====
1. 核心逻辑：完全平方数是整数的平方，因此直接遍历正整数i，计算i的平方
2. 边界控制：只要平方值 ≤ 10000，就是符合要求的数，超过则终止循环（i递增，后续平方只会更大）
3. 优势：无需开方运算、无浮点数精度问题，循环最多执行100次（i从1到100），效率极高
4. 修正了原代码的边界遗漏问题，包含10000这个合法的完全平方数
"""

# 1. 初始化循环变量i，从1开始（正整数的起点，若需要包含0，可改为i=0）
i = 1

# 2. 开启无限循环，直到平方值超过10000时终止
while True:
    # 3. 计算当前i对应的完全平方数
    square_value = i ** 2

    # 4. 边界判断：如果平方值超过10000，直接终止循环，后续无需计算
    if square_value > 10000:
        break

    # 5. 符合要求，打印结果：整数i 和 对应的完全平方数
    print(f"整数{i}的平方：{square_value}")

    # 6. i自增1，进入下一轮循环，计算下一个整数的平方
    i += 1
```



### 012 ： 100 到 200 的素数

```py
"""
 题目思路
素数定义：大于 1 的自然数，除了 1 和它本身，没有其他正因数。
核心逻辑：判断一个数 i 是否为素数时，只需检查 2 到 √i 之间的数是否能整除 i（若存在这样的数，i 不是素数；反之则是素数）。
遍历范围：遍历 101 到 200 的所有整数，逐个判断是否为素数，最后输出所有素数并统计数量。
"""

# 外层循环：遍历101到200的所有整数（修正range范围）
for i in range(101, 201):
  	#! flag的位置需要在这里，不能放到循环外，不然flag就重置不了了，赋值1后，一直是1了，认为全不是素数了
    flag = 0  #! 初始化标记：0表示当前数是素数，1表示不是素数
    for j in range(2, i):
        if i % j == 0:  # 如果j能整除i
            flag = 1  # 标记为非素数
            break  #! 找到一个因数就跳出内层循环，找到一个能整数的，就说明是质数了，直接break就好
    if flag:  # 如果标记为1（非素数）
        continue  # 跳过当前数，进入下一次外层循环
    print(i)  # 标记为0（素数），则输出该数


```

### 013：所有水仙花数❓

```py
"""
题目思路
水仙花数定义：一个三位数，其各位数字的立方和等于该数本身（例如 153 = 1³ + 5³ + 3³）。
核心逻辑：
遍历 100 到 999 的所有整数（所有三位数）。
对每个数分解出个位、十位、百位数字。
计算这三个数字的立方和，判断是否等于原数。
若相等，则该数是水仙花数，将其输出。
"""
# 遍历所有三位数（100 到 999）
for i in range(100, 1000):
    # 将当前整数 i 转换为字符串，方便通过索引提取各位数字
    s = str(i)
    # 提取个位数字：字符串最后一个字符，转为整数
    one = int(s[-1])
    # 提取十位数字：字符串倒数第二个字符，转为整数
    ten = int(s[-2])
    # 提取百位数字：字符串倒数第三个字符，转为整数
    hun = int(s[-3])
    # 判断：各位数字的立方和是否等于原数
    if i == one**3 + ten**3 + hun**3:
        # 如果是水仙花数，输出该数
        print(i)
```

### 014：分解质因数❓

```py
""""""
"""
#! 分解质因数

质因数是一个正整数的因数，同时又是质数。
简单说：能整除给定数，且本身是质数的数。

例子分解：
12 = 2 × 2 × 3
质因数是 2 和 3
30 = 2 × 3 × 5
质因数是 2、3、5
17 = 17（本身是质数）
质因数就是 17
"""

"""
题目思路
分解质因数的核心是将一个整数拆解为若干质数的乘积，实现思路如下：
    处理负数：若输入为负数，先提取 -1，再对其绝对值进行分解。
    边界处理：若输入的数 ≤ 1，直接输出该数（1 和 0 没有质因数，负数已提前处理）。
"""

# 1. 获取用户输入的整数，转换为int类型并赋值给target
target = int(input(' 输入一个整数： '))

# 2. 打印分解式的开头（如“90=”），end=""表示不换行
print(target, '=', end="")

# 3. 处理负数情况：提取-1，将target转为绝对值
if target < 0:
    target = abs(target)
    print('-1*', end="")  # 打印-1*，保持分解式连续

# 4. 初始化标志位：flag=1表示分解结束
flag = 0

# 5. 处理输入为1或0的边界情况
if target <= 1:
    print(target)  # 直接输出1或0
    flag = 1  # 标记分解结束

"""
题目思路：
质因数分解：从最小的质数 2 开始，依次尝试整除当前数，找到最小的质因数后打印，
    再将原数除以该质因数，重复此过程，直到剩余数为 1 或质数。

    ! 结束条件：当找到的质因数等于当前剩余数时，说明该数是质数，打印后结束分解。
"""

# 6. 循环分解质因数，直到flag=1时退出
while True:
    if flag:
        break  # 若分解结束，跳出循环

    # 7. 从2开始遍历到当前target，寻找最小质因数
    for i in range(2, int(target) + 1):
        """
        代码里的 for i in range(2, target+1) 找的就是质因数，为什么？因为我们是从小到大找第一个能整除 target 的数 i，这个数必然是质数：
            !如果一个合数i能整除target，那 **i的所有质因数一定也能整除target，而且这些质因数都比i小。
            !举个例子：合数 6 能整除 30（30÷6=5），6 的质因数是 2 和 3，那 2 和 3 也一定能整除 30，且 2、3 都比 6 小。
            !大白话：合数能整除的数，它的 “质数小弟” 一定也能整除，而且小弟更小。
            比如找 90 的因数，第一个能整除的是 2（质数）；
            剩下的 45，第一个能整除的是 3（质数）；
            剩下的 15，第一个能整除的还是 3（质数）；
            剩下的 5，第一个能整除的是 5（质数）。
            如果 i 是合数，那它肯定能被更小的质数整除，就轮不到它成为「第一个能整除的数」了。
        """
        if target % i == 0:  # 找到能整除target的最小质因数i
            print(f"{i}", end="")  # 打印该质因数
            if target == i:  #!  若当前质因数等于剩余的target，说明是最后一个因数
                flag = 1  # 标记分解结束
                break #! 这个break不能少，到这里是最后一个质数的话就停了，不然会多打印*
            print('*', end="")  # 若不是最后一个因数，打印*连接
            target //= i  #! 除以i，target就会变小，比如target一开始4, 4=2*，然后4//2，那么targe就等于2
            break  # 找到一个因数后跳出for循环，回到while循环继续分解剩余的target
```

### 019：完数❓

```py
""""""
"""
题目思路
完数是什么？
一个正整数 n，不包括自身的所有约数（真因子）的和，恰好等于它自己，这个数就是完数。
    比如 6 的真因子是 1、2、3 → 1+2+3=6 → 6 是完数；
    比如 28 的真因子是 1、2、4、7、14 → 1+2+4+7+14=28 →28 是完数。

代码思路
    获取因子：对每个数，找出所有真因子（不包含自身）。
    判断完数：检查该数是否等于其所有真因子的和。
    遍历范围：遍历 2 到 1000 的所有数，筛选出符合条件的完数。
"""

# 定义函数factor，作用：传入一个数num，返回这个数的「所有因子」（包括1和自身）
def factor(num):
    # 定义一个空集合res，用来存num的所有因子；用集合是为了「自动去重」
    # 比如4的因子是1、2、4，遍历到i=2时，num//i=2，集合会自动跳过重复的2，避免存两个2
    res = set()
    # 内层循环：遍历1到num-1的所有整数，判断是不是num的因子
    for i in range(1, num):
        # 核心判断：如果num能被i整除（余数为0），说明i是num的一个因子
        if num % i == 0:
            res.add(i)  # 把小因子i加入集合，比如num=6，i=1时，加1；i=2时，加2
            #! 整数除法num//i：找到i对应的「成对大因子」，加入集合
            #! 原理：因子是成对出现的！比如6÷1=6 → 1和6都是因子；6÷2=3 →2和3都是因子
            res.add(num // i)
    # 函数执行完，返回num的所有因子组成的集合（比如num=6，返回{1,2,3,6}）
    return res

# 主循环：遍历2到1000的所有整数（range左闭右开，1001取不到，刚好到1000）
# 从2开始是因为1没有真因子，不可能是完数
for i in range(2, 1001):
    # 这行是最核心的判断，拆成两步看就懂了：
    # 1. factor(i)：调用函数，得到i的所有因子（包括自身），比如i=6，得到{1,2,3,6}
    # 2. sum(factor(i))：求所有因子的和，比如6的因子和=1+2+3+6=12
    # 3. sum(...) - i：减去i自身，得到「真因子的和」（完数要的就是这个），比如12-6=6
    # 4. 最终判断：如果i的真因子和 等于 i自己，说明i是完数
    #! sum() 这个是自带的求和函数，要记住
    if i == sum(factor(i)) - i:
        print(i)  # 是完数就打印出来
```

### 020：高空抛物

```py
""""""
"""
📝 题目思路
问题拆解：
    球从 100 米自由下落，第一次落地路程为 100 米。
    每次落地后反弹回原高度的一半，再下落，因此每次反弹后会产生「上去 + 下来」两段路程（除最后一次落地后无需再下落）。
    第 10 次落地时，共经历 9 次反弹 + 下落过程，总路程为「初始 100 米 + 9 次反弹 ×2 的路程和」。
    第 10 次反弹高度为初始高度除以 2^10（每次反弹高度是前一次的一半，第 10 次反弹是第 10 次落地后的反弹）。
核心公式：
    总路程：total = 100 + 2 × (50 + 25 + ... + 第9次反弹高度)
    第 10 次反弹高度：100 / (2^10)
"""
# 初始高度（题目给定100米）
high = 100.0
# 总路程初始值：第一次下落的100米
total = 100.0

# 循环9次：第10次落地需要经历9次反弹+下落
for i in range(9):
    # 计算当前反弹高度（前一次高度的一半）
    high /= 2
    # 累加反弹后「上去+下来」的路程（2倍反弹高度）
    total += 2 * high

# 第10次反弹高度是第9次反弹高度的一半（第10次落地后的反弹）
tenth_bounce = high / 2

# 输出结果
print("第10次反弹高度：", tenth_bounce)
print("总长：", total)
```

### 021：猴子偷桃



```py
""""""
"""
题目思路
这是一个典型的逆向推导问题，正向计算需要设未知数，而倒推更简单：
    正向规则：猴子每天吃前一天剩下的一半，再多吃 1 个。即：
        当天剩下的桃子 = 前一天桃子数 ÷ 2 - 1
    逆向规则：已知第 10 天早上只剩 1 个桃子，倒推前一天的桃子数：
        前一天的桃子数 = (当天剩下的桃子数 + 1) × 2
    推导次数：从第 10 天倒推到第 1 天，共需要推导 9 次（第 10→9→8→…→1，共 9 个时间间隔）。
"""

# 1. 初始化桃子数为第10天早上的数量（已知只剩1个）
peach = 1

# 2. 循环9次：从第10天倒推9天，得到第1天的桃子数
for i in range(9):
    # 用逆向公式计算前一天的桃子数
    peach = (peach + 1) * 2

# 3. 输出第一天摘的桃子总数
print(peach)  # 最终输出：1534

"""
第 10 天：peach = 1
第 9 天：(1 + 1) * 2 = 4
第 8 天：(4 + 1) * 2 = 10
第 7 天：(10 + 1) * 2 = 22
……
经过 9 次循环后，最终得到第一天摘的桃子数为 1534，与代码输出一致 
"""
```

### 022：比赛对手 ❓

```py
""""""
"""
题目思路
    明确已知条件
        甲队队员：a, b, c；乙队队员：x, y, z
        约束：a 不与 x 比赛；c 不与 x、z 比赛
        隐含规则：每位队员的对手必须唯一（乙队每人仅出场一次）
    缩小可选范围
        对 c：排除 x、z，仅剩对手 y
        对 a：排除 x，剩余可选对手 y、z
        对 b：无直接约束，保留所有对手 x、y、z
    通过遍历去重验证
        遍历所有可能的对手组合，筛选出 “三位对手互不重复” 的有效组合，即为最终对阵名单。
"""
# 1. 初始化甲队三位队员的可选对手集合（初始都包含乙队所有队员）
a = {'x', 'y', 'z'}  # a的初始可选对手：x、y、z
b = {'x', 'y', 'z'}  # b的初始可选对手：x、y、z
c = {'x', 'y', 'z'}  # c的初始可选对手：x、y、z

# 2. 根据约束条件缩小可选范围
a -= {'x'}        # a不能和x比，移除x → a剩余 {y, z}
c -= {'x', 'z'}  # c不能和x、z比，移除这两个选项 → c仅剩 {y}

print(a,b,c)

"""
三层循环的作用就是穷举所有可能的对手组合，
再通过 “集合长度为 3” 这个条件，
把那些对手重复的组合全部筛掉，最后剩下的就是唯一符合要求的对阵名单。
"""
# 3. 三重循环遍历所有可能的对手组合
for i in a:           # 遍历a的可选对手（y或z）
    for j in b:       # 遍历b的可选对手（x、y、z）
        for k in c:   # 遍历c的可选对手（仅y）
            # 4. 验证对手是否唯一（集合长度为3表示无重复）
            if len({i, j, k}) == 3:
                """
                集合 {i, j, k} 里装的是 a、b、c 三人的对手。
                集合的特点是元素不能重复，所以如果三个人的对手都不重复，集合的长度就是 3。
                如果有重复，集合长度就会小于 3（比如 a 和 c 都选 y，集合里就只有 {y, j}，长度是 2）
                """
                # 5. 输出有效对阵名单
                print('a:%s,b:%s,c:%s' % (i, j, k))
```

### 024：斐波那契额数列 ②

```py
""""""

"""
题目思路 💡
1 1 2 3 5 8 
这个分数序列 2/1, 3/2, 5/3, 8/5, ... 本质上是斐波那契数列的后一项除以前一项：
    第 1 项：2/1
    第 2 项：3/2（分子 = 2+1，分母 = 2）
    第 3 项：5/3（分子 = 3+2，分母 = 3）
    ……
    第 n 项：分子 = 前一项分子 + 前一项分母，分母 = 前一项分子
我们可以通过迭代更新分子和分母，同时累加每一项的值，最终得到前 20 项的和。
"""


def fraction_sequence_sum(n):
    """
    计算分数序列 2/1, 3/2, 5/3, 8/5... 前n项的和
    :param n: 要计算的项数
    :return: 前n项的累加和
    """
    if n <= 0:  # 处理无效输入
        return 0

    #! 只是利用了求斐波那契额数列的   a, b = b, a+b   这句话而已，推推前面几项就好理解了
    # 初始化：第一项的分母a=1，分子b=2
    a = 1.0  #! 浮点数避免整数除法问题
    b = 2.0
    total = 0.0  # 累加和

    # 循环n次，计算每一项并累加
    for _ in range(n):
        total += b / a  # 累加当前项
        a, b = b, a+b  # 更新分子分母：新分子=原分子+原分母，新分母=原分子

    return total


# 计算并打印前20项的和
print(fraction_sequence_sum(20))  # 输出结果约为 32.66026079864164
```

### 025：阶乘求和

#### 法一

```py
""""""

"""
1! = 1
2! = 1*2
3! = 1*2*3
"""

#? 法一
def fn(n):
    if n == 1:
        return 1
    return fn(n-1)*n

res = 0
for i in range(1,21):
    res+=fn(i)
print(res)
```

#### 法二

```py
""""""

"""
1! = 1
2! = 1*2
3! = 1*2*3
"""

#? 法二
fact = 1  # 保存当前阶乘结果
res = 0
for i in range(1, 21):
    fact *= i  # 直接在当前阶乘基础上乘以i，避免重复递归
    res += fact
print(res)
```

### 027：递归输出（字符反向）

#### 法一

```py
# 定义待处理的字符串
string = 'ybh'

def reverse_print(n):
    """
    递归逆序打印字符串的字符
    :param n: 当前要处理的字符索引
    """
    # 递归终止条件：索引小于0时停止递归
    if n < 0:
        return
    # 回溯时打印当前索引的字符
    print(string[n], end="")  # end="" 让字符连续输出，更美观
    
    # 先递归处理前一个索引（n-1）
    reverse_print(n - 1)

# 调用函数，传入字符串最后一个字符的索引
reverse_print(len(string) - 1)
```

#### 法二 不管了

```py
"""
题目思路
    题目要求用递归函数将输入的字符串以相反顺序打印。核心思路是利用递归的 “先深入后返回” 特性：
    递归终止条件：当字符串长度为 1 时，直接打印该字符。
    递归过程：若字符串长度大于 1，先递归处理去掉首字符的子串（string[1:]），待递归返回后再打印当前字符串的首字符。
    效果：递归会先深入到最后一个字符并打印，再依次返回打印前面的字符，最终实现整体逆序输出。
"""
def rec(string):
    # 定义递归函数rec，参数string为待处理的字符串
    if len(string) != 1:
        # 判断当前字符串长度是否不等于1，若是则继续递归
        rec(string[1:])
        # 递归调用自身，传入去掉第一个字符的子串（从索引1到末尾的子串）
    print(string[0], end="")
    # 打印当前字符串的第一个字符，end=""表示不换行，保持连续输出

rec(input('string here:'))
# 调用函数，从用户输入获取字符串作为参数

string = '123456'

def fn(string):
    if len(string) != 1:
        fn(string[1:])
    print(string[0],end='')

fn(string)
```

### 028：递归求等差数列

```py
""""""
"""
题目思路
这是一个典型的递归问题，核心是把 “求第 n 个人的年龄” 这个大问题，分解为 “求第 n-1 个人的年龄” 的小问题，直到触达已知条件（第一个人 10 岁）。
    递归终止条件：当 n == 1 时，直接返回已知的年龄 10 岁。
    递归关系：第 n 个人的年龄 = 第 n-1 个人的年龄 + 2 岁。
    目标：通过递归逐层回溯，最终计算出第 5 个人的年龄。
"""

def age(n):
    # 定义递归函数 age，参数 n 代表第 n 个人
    if n == 1:
        # 递归终止条件：当 n 为 1 时，返回第一个人的年龄 10
        return 10
    # 递归关系：第 n 个人的年龄 = 2 + 第 n-1 个人的年龄
    return 2 + age(n - 1)

# 调用函数，计算并打印第 5 个人的年龄
print(age(5))
```

### 031：字母识字

```py
""""""

"""
题目思路
程序通过嵌套字典实现 “按字母判断星期几” 的逻辑：
    顶层字典week根据输入的第一个字母，返回对应的星期名称或子字典。
    如果返回的是子字典（如输入't'或's'时），则需要用户输入第二个字母，在子字典中继续匹配，得到最终的星期名称。
    如果直接返回星期名称，则直接输出结果。
    Monday
    Tuesday
    Wednesday
    Thursday
    Friday
    Saturday
    Sunday
"""

# 定义子字典weekT：处理首字母为't'的情况（Thursday和Tuesday）
weekT = {'h': 'thursday', 'u': 'tuesday'}

# 定义子字典weekS：处理首字母为's'的情况（Saturday和Sunday）
weekS = {'a': 'saturday', 'u': 'sunday'}

# 定义顶层字典week：根据首字母映射到星期名称或子字典
week = {
    't': weekT,
    's': weekS,
    'm': 'monday',
    'w': 'wednesday',  # 修正拼写错误
    'f': 'friday'
}

# 获取用户输入的第一个字母，并转换为小写
first_char = input('请输入第一位字母：').lower()

# 根据首字母从顶层字典中取值
a = week[first_char]

# 判断取出的值是否为子字典（需要二次输入）
if isinstance(a, dict):
    # 如果是子字典，获取第二个字母
    second_char = input('请输入第二位字母：').lower()
    # 在子字典中查找并打印结果
    print(a[second_char])
else:
    # 如果是直接的星期名称，直接打印
    print(a)
```

### 036：算素数（100以内）

```py
""""""

"""
质数，只能被1和自身整除
"""
# 打印100以内的所有素数
#   for i in range(1, 101):
#! 1 不是素数，但你这段 会把 1 打印出来。
for i in range(2, 101):
    flag = 0  # 0表示是质数，1表示不是质数
    for j in range(2, i):
        if i % j == 0:
            flag = 1
            break #! 判断出不是质数，直接break就好
    if flag == 0:
        print(i)
```

### 046：打破循环

```py
""""""

"""
题目思路 💡
核心需求：持续接收用户输入的数字，计算其平方值，当平方值小于 50 时终止程序。
执行流程：
    启动无限循环，保证可以持续接收输入。
    尝试将用户输入转换为浮点数，若输入非数字则捕获异常并提示错误，重新开始循环。
    计算输入数字的平方。
    打印平方结果。
    判断平方是否小于 50，若是则打印退出信息并终止循环。
"""

# 开启无限循环，直到内部 break 语句终止
while True:
    # 尝试执行可能出错的代码块（输入转换）
    try:
        # 接收用户输入，尝试转换为浮点数
        n = float(input('输入一个数字： '))
    # 捕获所有异常（如输入非数字），执行异常处理
    except:
        # 提示用户输入无效
        print('输入错误 ')
        # 跳过当前循环剩余部分，重新开始下一轮输入
        continue
    # 计算输入数字的平方
    dn = n ** 2
    # 打印平方结果
    print('其平方为： ', dn)
    # 判断平方是否小于50
    if dn < 50:
        # 打印退出提示
        print('平方小于 50，退出 ')
        # 终止无限循环，结束程序
        break
```

### 047：函数交换变量

```py

""""""

"""
题目思路 💡
核心是利用 Python 的两个特性：
    函数多返回值：函数可以返回一个元组，包含多个值。
    序列解包：可以将元组（或其他可迭代对象）中的元素，直接赋值给多个变量。
通过函数返回交换后的两个值，再用解包赋值的方式，让原变量接收交换后的值，从而实现变量互换。
"""

# 定义一个名为exc的函数，接收两个参数a和b
def exc(a, b):
    # 返回一个元组，将参数b和a的位置互换
    return (b, a) #! 函数返回元组(10, 0)，然后通过序列解包，将10赋给a，0赋给b

# 初始化变量a的值为0
a = 0
# 初始化变量b的值为10
b = 10

# 调用exc函数，传入a和b的当前值(0, 10)
# 函数返回元组(10, 0)，然后通过序列解包，将10赋给a，0赋给b
a, b = exc(a, b)

# 打印交换后的a和b的值
print(a, b)
```

### 049：lambda（匿名函数）

```py
""""""

"""
题目思路
核心思路是利用布尔表达式的数值特性，通过 lambda 匿名函数实现两个数的最大值和最小值计算：
    对于最大值：当 x >= y 时，x*(x>=y) 等于 x*1，y*(y>x) 等于 y*0，结果为 x；当 y > x 时，结果为 y。
    对于最小值：当 x <= y 时，x*(x<=y) 等于 x*1，y*(y<x) 等于 y*0，结果为 x；当 y < x 时，结果为 y。
"""

# 定义匿名函数Max，用于计算两个数的最大值
# 利用布尔值的数值特性：True=1，False=0
Max = lambda x, y: x * (x >= y) + y * (y > x)

# 定义匿名函数Min，用于计算两个数的最小值
Min = lambda x, y: x * (x <= y) + y * (y < x)

# 从控制台输入第一个整数，转换为int类型并赋值给变量a
a = int(input('1:'))

# 从控制台输入第二个整数，转换为int类型并赋值给变量b
b = int(input('2:'))

# 调用Max函数，传入a和b，打印最大值
print(Max(a, b))

# 调用Min函数，传入a和b，打印最小值
print(Min(a, b))
```

### 050：随机数

```py
""""""

"""
核心思路是利用 Python 内置的random模块来生成随机数：
"""

# 导入random模块
import random

# ===================== 1. 随机浮点数 =====================
print("=== 随机浮点数 ===")
# 0~1之间的浮点数
print(random.random())
# 10~20之间的浮点数
print(random.uniform(10, 20))

# ===================== 2. 随机整数 =====================
print("\n=== 随机整数 ===")
# 1~100之间的整数
print(random.randint(1, 100))

# ===================== 3. 序列随机操作 =====================
print("\n=== 序列随机操作 ===")
lst = ["苹果", "香蕉", "橙子", "葡萄"]
# 随机选1个
print(random.choice(lst))

# 随机选3个（可重复）
print(random.choices(lst, k=3))

# 随机选2个（不重复）
print(random.sample(lst, k=2))

# 打乱列表
random.shuffle(lst)
print("打乱后的列表：", lst)


```

### 074：列表排序、连接

```py
""""""

"""
题目思路
题目要求实现两个列表的连接与排序：
    先将两个列表合并为一个列表；
    对合并后的列表进行升序排序；
    输出最终结果。
"""

# 定义列表a，包含元素 2、6、8
a = [2, 6, 8]

# 定义列表b，包含元素 7、0、4
b = [7, 0, 4]

# 将列表b的所有元素追加到列表a的末尾，a 变为 [2, 6, 8, 7, 0, 4]
# extend() 是原地修改，不会返回新列表
a.extend(b)

print(a)

# 对列表a进行升序排序，排序后 a 变为 [0, 2, 4, 6, 7, 8]
# sort() 是原地排序，默认按升序排列
a.sort()

# 打印排序后的列表a
print(a)
```

### 078字典（找年龄最大者）

```py
""""""

"""
题目思路
    初始化一个变量 max_age，用来保存当前找到的年龄最大的人的名字，初始值设为字典中的第一个键 'li'。
    遍历字典中的所有键。
    对于每一个键，将其对应的年龄与 max_age 对应的年龄进行比较。
    如果当前键对应的年龄更大，就将 max_age 更新为当前键。
    遍历结束后，max_age 中保存的就是年龄最大的人的名字，最后输出名字和年龄。
"""


# 定义一个字典，键是人名，值是年龄
person = {"li":18,"wang":50,"zhang":20,"sun":22}
# 初始化 max_age 为 'li'，假设 li 是年龄最大的人
max_age = 'li'
# 遍历字典中所有的键（人名）
for key in person.keys():
    # 如果当前 max_age 对应的年龄 < 当前 key 对应的年龄
    if person[max_age] < person[key]:
        # 就将 max_age 更新为当前 key，即更新为年龄更大的人名
        max_age = key
# 输出年龄最大的人的名字和年龄
print ('%s,%d' % (max_age,person[max_age]))
```

###  082：八进制转十进制的核心是按权展开求和

```py
#TODO 八进制转十进制的核心是按权展开求和：

# 从用户获取八进制字符串输入
oct_str = input('八进制输入：')

try:
    # 使用 int() 函数直接将八进制字符串转换为十进制整数，指定 base=8
    decimal_num = int(oct_str, base=8)
    # 输出结果
    print(f"转换为十进制：{decimal_num}")
except ValueError:
    # 如果输入不是合法的八进制数字（包含 8、9 或其他字符），捕获异常并提示用户
    print("错误：请输入一个合法的八进制数（只包含 0-7）。")
```



```py

```



## 第三档

### 035：设置输出颜色

```py
""""""
"""
📝 题目思路
利用ANSI 转义序列（终端的文本格式控制代码）实现文本颜色 / 格式的设置：
    定义一个类，封装常用的颜色 / 格式对应的 ANSI 转义码（方便统一管理和调用）；
    输出文本时，先拼接 “颜色转义码”，再拼接目标文本，最后拼接 “重置转义码”（避免后续输出持续保持该颜色）。
"""

# 定义一个类bcolors，用于封装各种文本颜色/格式的ANSI转义序列
class bcolors:
    # ANSI转义码：设置文本为紫色（HEADER样式）
    HEADER = "\033[95m"

    # ANSI转义码：设置文本为蓝色
    OKBLUE = "\033[94m"

    # ANSI转义码：设置文本为绿色
    OKGREEN = "\033[92m"

    # ANSI转义码：设置文本为黄色（警告样式）
    WARNING = "\033[93m"

    # ANSI转义码：设置文本为红色（失败样式）
    FAIL = "\033[91m"

    #? ANSI转义码：重置文本颜色/格式（必须加，否则后续输出会保持之前的样式）
    ENDC = "\033[0m"

    #? ANSI转义码：设置文本为粗体
    BOLD = "\033[1m"

    #? ANSI转义码：设置文本为下划线样式
    UNDERLINE = "\033[4m"

# 输出带颜色的文本：
# 1. 先拼接WARNING对应的黄色转义码
# 2. 拼接要输出的文本内容
# 3. 拼接ENDC重置转义码，恢复默认文本样式
print(bcolors.WARNING + "警告的颜色字体 ？")
print(1)

print(bcolors.FAIL + "警告的颜色字体 ？" + bcolors.ENDC)
print(1)
```

### 062：查找字符串

```py
"""
题目思路
题目要求：
    查找子串在目标字符串中第一次出现的起始索引。
核心思路：
    直接使用 Python 字符串内置的 find() 方法，该方法会返回子串第一次出现的起始索引；
    如果子串不存在，则返回 -1。这是 Python 中处理子串查找最简洁的方式。
"""
"""
题目思路：
使用Python字符串的find()方法，查找子串在目标字符串中第一次出现的起始索引。
find()方法的规则：
- 找到子串时，返回子串的第一个字符在目标字符串中的索引
- 未找到子串时，返回 -1
"""

# 1. 定义目标字符串（被查找的字符串）
s1 = 'aabbxuebixuebi'

# 2. 定义第一个要查找的子串
s2 = 'ab'

# 3. 定义第二个要查找的子串
s3 = 'xue'

# 4. 查找s2在s1中第一次出现的起始索引并打印
# s1的字符索引：0:a, 1:a, 2:b, 3:b... → 'ab'第一次出现在索引1（a）和2（b），起始索引为1
print(s1.find(s2))  # 输出：1

# 5. 查找s3在s1中第一次出现的起始索引并打印
# s1的字符索引：4:x, 5:u, 6:e → 'xue'第一次出现在索引4，起始索引为4
print(s1.find(s3))  # 输出：4
```

### 038：矩阵对角线之和

```py
""""""
""""
题目思路
    主对角线定义：对于 n×n 矩阵，主对角线元素是行索引与列索引相等的元素（即 mat[i][i]）。
    累加求和思路：初始化一个累加变量，遍历矩阵的行索引，每次将对应位置的主对角线元素累加到变量中，最终得到总和。
    步骤拆解：
        定义目标矩阵；
        初始化累加变量；
        遍历行索引，累加主对角线元素；
        输出最终结果。
"""
# 定义一个3×3的矩阵，用嵌套列表表示，每个子列表对应矩阵的一行
mat=[[1,2,3],
     [3,4,5],
     [4,5,6]]

# 初始化累加变量res，用于存储主对角线元素的和，初始值为0
res=0

# 遍历矩阵的行索引：len(mat)是矩阵的行数（这里为3），range生成0、1、2的索引序列
for i in range(len(mat)):
    # 取第i行、第i列的元素（主对角线元素），累加到res中
    res+=mat[i][i]

# 打印最终的主对角线元素之和
print(res)


#! 明显人家上面的简单
total = 0
for i in range(len(mat)):
    for j in range(len(mat[0])):
        if i ==j:
            total += mat[i][j]
print(total)
```

### 044：矩阵相加

```py
""""""
"""
题目思路 💡
矩阵相加的核心规则是：只有维度相同的矩阵才能相加，结果矩阵中每个位置的元素等于两个原矩阵对应位置元素的和。
    本题中，矩阵 X 和 Y 都是 3 行 3 列的二维列表，因此可以直接进行对应位置元素相加。
    我们先创建一个和原矩阵维度相同的全零矩阵 res 来存储结果，再通过双重循环遍历每个位置，将 X 和 Y 对应位置的元素相加后存入 res。
"""

# 定义第一个矩阵X，是一个3行3列的二维列表
X = [[12,7,3],
     [4,5,6],
     [7,8,9]]

# 定义第二个矩阵Y，同样是3行3列的二维列表
Y = [[5,8,1],
     [6,7,3],
     [4,5,9]]

# 初始化结果矩阵res，是一个3行3列的全零矩阵，用于存储相加结果
res = [[0,0,0],
       [0,0,0],
       [0,0,0]]

# 外层循环：遍历每一行，i代表当前行的索引（0,1,2）
for i in range(len(res)):
    # 内层循环：遍历每一列，j代表当前列的索引（0,1,2）
    for j in range(len(res[0])):
        # 将X和Y中对应位置的元素相加，结果存入res的对应位置
        res[i][j] = X[i][j] + Y[i][j]

# 打印最终的矩阵相加结果
print(res)
```

### 0002：栈是一种 后进先出（LIFO）的数据结构

```py
""""""
"""
题目思路 💡
    栈是一种 ** 后进先出（LIFO）** 的数据结构，核心操作包括：
    入栈（push）：将元素添加到栈顶。
    出栈（pop）：移除并返回栈顶元素，空栈时需抛出异常。
    获取栈顶（top）：返回栈顶元素但不移除，空栈时需抛出异常。
    大小记录：用属性 size 实时跟踪栈中元素的数量，避免每次都计算列表长度。
我们用 Python 列表来模拟
"""

# 定义栈类 Stack
class Stack:
    # 构造方法，初始化栈的内部状态
    def __init__(self): #! 注意这里，可以不在形参里设置内容，直接赋值[]和0的
        # 用列表存储栈中的元素，初始为空
        self.items = []
        # 用 size 属性记录栈的大小，初始为 0
        self.size = 0

    # 入栈方法：将元素 item 添加到栈顶
    def push(self, item):
        # 将元素添加到列表末尾（即栈顶）
        self.items.append(item)
        # 栈的大小加 1
        self.size += 1

    # 出栈方法：移除并返回栈顶元素
    def pop(self):
        # 检查栈是否为空，为空则抛出异常
        if self.size == 0:
            raise IndexError("pop from empty stack")
        # 栈的大小减 1
        self.size -= 1
        # 移除并返回列表最后一个元素（即栈顶元素）
        return self.items.pop()

    # 获取栈顶元素方法：返回栈顶元素但不移除
    def top(self):
        # 检查栈是否为空，为空则抛出异常
        if self.size == 0:
            raise IndexError("top from empty stack")
        # 返回列表最后一个元素（即栈顶元素）
        return self.items[-1]

# 测试代码
# 创建栈实例
stack = Stack()
# 入栈元素 1
stack.push(1)
# 入栈元素 2
stack.push(2)
# 打印栈顶元素（应为 2）
print(stack.top())
# 出栈并打印栈顶元素（应为 2）
print(stack.pop())
# 打印当前栈的大小（应为 1）
print(stack.size)
```

### 0003：计数器 

```py
""""""
"""
题目思路 💡
    计数器的核心需求是：
    记录当前计数值：用类的属性 count_value 来存储当前的计数结果。
    计数（count）：每次调用计数方法，将当前计数值加 1，并返回更新后的值。
    重置（reset）：将当前计数值重置为 0，并返回重置后的值。
我们通过 Python 类来封装状态（count_value）和行为（count()、reset()），确保计数器的状态被安全管理。
"""

# 定义计数器类 Counter
class Counter:
    # 构造方法，初始化计数器的初始状态
    def __init__(self):
        # 初始化计数值为 0，用于记录当前计数
        self.count_value = 0

    # 计数方法：将计数值加 1，并返回更新后的值
    def count(self):
        self.count_value += 1
        return self.count_value

    # 重置方法：将计数值重置为 0，并返回重置后的值
    def reset(self):
        self.count_value = 0
        return self.count_value

# 测试代码
# 创建计数器实例
counter = Counter()
# 第一次计数，返回 1
print(counter.count())
# 第二次计数，返回 2
print(counter.count())
# 重置计数器，返回 0
print(counter.reset())
```

### 067：交换位置（最值与首尾）

```py
""""""

"""
题目思路
    核心思路是分两步完成数组元素的位置调整：
    最小元素与最后一个元素交换：先找到数组中的最小值，将其与数组最后一个元素交换位置。
    最大元素与第一个元素交换：再找到数组中的最大值，将其与数组第一个元素交换位置。
    最终输出完成两次交换后的数组。
"""

# 定义初始数组
li = [3, 2, 5, 7, 8, 1, 5]
print('原数组',li)
min_value = min(li)
min_index = li.index(min_value)

# 交换最小元素与最后一个元素
li[-1], li[min_index] = li[min_index], li[-1]
print('交换最小元素与最后一个元素',li)


max_value = max(li)
max_index = li.index(max_value)
#! ========================
# 保存第一个元素的值，用于后续交换
one = li[0]

# 将第一个元素替换为最大元素
li[0] = li[max_index]

# 将最大元素原来的位置替换为原第一个元素的值
li[max_index] = one
#! ========================

#? 上面区间里的内容等价于
# li[0], li[max_index] = li[max_index], li[0]

# 打印最终数组
print(li)

```

### 041：类的方法与变量

```py
""""""

"""
题目思路
		! 你理解得完全正确！核心原因就是类中的i = 0确实只在类定义时执行一次，
		! 而普通函数里的i = 0会在每次调用函数时都重新执行，这就是两者行为差异的根源

    ! 该示例旨在对比普通函数局部变量与 ** 类中变量（模拟静态变量）** 的行为差异：
    普通函数中的局部变量每次调用都会重新初始化，无法在多次调用间保持状态。
    类中的类变量（静态变量）可以在多次方法调用间保持状态，实现类似静态变量的效果。
"""

# 全局函数：使用局部变量，每次调用都会重置
def dummy():
    i = 0
    print(i)  # 每次都输出 0
    i += 1

# 定义类，使用类变量模拟静态变量
class cls:
    # 类变量（静态变量），所有实例共享
    i = 0

    def dummy(self):
        # 访问并修改类变量，而非实例属性
        print(cls.i)
        cls.i += 1

# 创建类的实例
a = cls()

# 循环50次，分别调用全局函数和类方法
for _ in range(50):
    dummy()       # 调用全局函数，始终输出 0
    a.dummy()      # 调用类方法，类变量i会递增
```

### 087：访问类成员

```py
""""""

"""
题目思路
本实例通过类实例作为函数参数的例子，说明在 Python 中，当对象（如类实例）被传递给函数时，传递的是对象的引用（内存地址），而非值拷贝。
因此，函数内部对对象属性的修改会直接反映到原对象上，效果类似于 C 语言中结构体指针的传递。
"""

# 定义student类，作为自定义数据结构的模板
class student:
    x = 0  # 类属性x，初始值为0
    c = 0  # 类属性c，初始值为0

# 定义函数f，接收一个student类的实例作为参数
def f(stu):
    stu.x = 20  # 修改传入对象的x属性为20
    stu.c = 'c' # 修改传入对象的c属性为'c'

# 创建student类的实例a
a = student()
# 为实例a设置实例属性x，值为3（覆盖类属性x）
a.x = 3
# 为实例a设置实例属性c，值为'a'（覆盖类属性c）
a.c = 'a'
# 调用函数f，将实例a作为参数传递（传递的是对象引用）
f(a)
# 打印实例a的x和c属性，此时已被函数f修改
print(a.x, a.c)
```

### 042 变量作用域

```py
""""""
"""
二、题目思路 💡
这段代码的核心目的是对比两种变量作用域的行为：
局部变量遮蔽全局变量：
    在函数 dummy() 内部定义了与全局变量同名的 i，此时函数内的 i 是一个全新的局部变量，对它的修改不会影响全局的 i。
global 关键字声明全局变量：
    在函数 dummy2() 中使用 global n 声明，明确告知 Python 函数内的 n 引用的是全局作用域中的变量，因此对它的修改会直接影响全局的 n。
"""

# 定义全局变量 i，初始值为 0
i = 0
# 定义全局变量 n，初始值为 0
n = 0

# 定义函数 dummy
def dummy():
    # 在函数内部定义局部变量 i，它会遮蔽全局的同名变量 i
    i = 0
    # 打印局部变量 i 的值，始终为 0
    print(i)
    # 局部变量 i 自增 1，此修改仅在函数内部有效，函数结束后该局部变量即销毁
    i += 1

# 定义函数 dummy2
def dummy2():
    # 使用 global 关键字声明，表明此处的 n 引用的是全局变量 n
    global n
    # 打印全局变量 n 的当前值
    print(n)
    # 全局变量 n 自增 1，此修改会影响全局作用域中的 n
    n += 1

# 输出分隔提示
print('函数内部的同名变量')
# 循环执行 20 次
for j in range(20):
    # 打印全局变量 i 的当前值
    print(i)
    # 调用 dummy 函数，打印其内部的局部变量 i（值为 0）
    dummy()
    # 全局变量 i 自增 1
    i += 1

# 输出分隔提示
print('global 声明同名变量')
# 循环执行 20 次
for k in range(20):
    # 打印全局变量 n 的当前值
    print(n)
    # 调用 dummy2 函数，打印并修改全局变量 n
    dummy2()
    # 全局变量 n 再自增 10
    n += 10
```

### 051：按位与 （按位运算操作 ***与 或 异或 取反 取反移动***先不学了）

（按位运算操作的是二进制位，不是布尔值，和`and/or`完全不同（比如`3 and 5`结果是 5，`3 & 5`结果是 1）。）

```py
""""""
"""
二、题目思路 💡
本练习的核心是学习 Python 中的按位与运算符 &：
    按位与是对两个数的二进制位逐位进行 “与” 操作，只有对应位都为 1 时，结果位才为 1，否则为 0。
    程序通过八进制数 0o77 与十进制数 3、7 进行按位与操作，直观展示按位与的运算规则和结果。
"""

# 定义变量a，值为八进制数0o77，转换为十进制是63（7*8 + 7 = 63）
a = 0o77
# 打印a的十进制值，输出63
print(a)

# 对a（二进制0b111111）和3（二进制0b11）进行按位与操作
# 结果为0b11，即十进制3，赋值给b
b = a & 3
# 打印b的值，输出3
print(b)

# 对b（当前为3，二进制0b11）和7（二进制0b111）进行按位与操作
# 结果仍为0b11，即十进制3，重新赋值给b
b = b & 7
# 打印b的值，输出3
print(b)
```

### 043：作用域、类的方法与变量（简单看看即可）

```py
""""""

"""
💡 题目思路
这个例子的核心意图是模仿静态变量（类变量）的行为，同时区分三种变量的作用域：
    类变量：dummy.num，属于类本身，所有实例共享。
    实例变量：self.num，属于具体实例，会覆盖同名类变量。
    全局变量：num，定义在类外，与类变量同名，用于演示作用域区分。
"""

class dummy:
    # 类变量：属于类本身，所有实例共享，初始值为1
    num = 1

    def Num(self):
        # 声明num为全局变量，明确要访问的是全局作用域的num
        global num
        # 打印实例的num：第一次调用时，实例没有自己的num，继承类变量的1；之后自增
        print('class dummy num:', self.num)
        # 打印全局变量num，循环中会被不断乘以10
        print('global num: ', num)
        # 为实例创建（或更新）实例变量num，值自增1，覆盖类变量
        self.num += 1

# 创建dummy类的实例n
n = dummy()
# 定义全局变量num，初始值为1（与类变量同名）
num = 1

# 循环5次
for i in range(5):
    # 全局变量num乘以10，每次循环后值变为10、100、1000、10000、100000
    num *= 10
    # 调用实例n的Num方法
    n.Num()
```

### 075：不知所云(简单看看即可)

```py
""""""

"""
💡 题目思路
这是一个条件判断与循环流程的练习，核心逻辑是：
    循环 5 次，i依次取0, 1, 2, 3, 4。
    每次循环初始化n = 0，通过多个if条件对n进行累加。
    当n的值恰好等于3时，输出64 + i的结果。
    主要考察对条件分支执行顺序和变量作用域的理解。
"""

# 循环5次，i依次取 0, 1, 2, 3, 4
for i in range(5):
    # 每次循环开始时，将变量n重置为0
    n = 0
    # 如果i不等于1，n的值加1
    if i != 1:
        n += 1
    # 如果i等于3，n的值加1
    if i == 3:
        n += 1
    # 如果i等于4，n的值加1
    if i == 4:
        n += 1
    # 如果i不等于4，n的值加1
    if i != 4:
        n += 1
    # 如果n的值等于3，打印64与i的和
    if n == 3:
        print(64 + i)
```

### 2.11

```py
# int("3.42")
"""
1.1.1.2 int（"3.42"）为什么会报错
字符串"3.42"可以转成float类型数据3.42，3.42可以转成int类型数据3，但是字符串"3.42"却
不可以直接使用int函数转成3，讲实话，我也觉得这个函数有些不灵活，或许是语言的发明者
有自己的考虑吧，咱们对这种问题，不必深究，先做到知道它是什么，将来再去研究为什么
"""
bool("")
"""
1.1.1.1 bool函数转换规则
boo函数进行转换时，其结果取决于传入参数与True和False的等价关系，只需记住一点即可
0，空字符串，None在条件判断语句中等价于False，其他数值都等价于True
bool函数在做数据类型转换时遵循该原则
"""
print("wrqq" > "acd")
"""
1.1.1.3 字符串大小比较规则
两个字符串在比较大小时，比的不是长度，而是内容
字符串左对齐后，逐个字符依次比较，直到可以分出胜负
"""

print(9/5)
print(9//5)


```

### 089：加密解码（四位数加密解码）

```py
""""""

"""
题目思路（加密）
接收一个四位整数输入。

将其转换为字符串，方便逐位处理。
对每一位数字执行加密变换：(数字 + 5) % 10。
交换第 1 位与第 4 位、第 2 位与第 3 位。
将处理后的数字列表拼接成字符串输出。
"""

# 四位整数加密程序
n = input("请输入四位整数：")
n = str(n)
a = []
for i in range(4):
    a.append((int(n[i]) + 5) % 10)
print(a)
# 交换位置
a[0], a[3] = a[3], a[0]
a[1], a[2] = a[2], a[1]
print(a)

# 输出加密结果
#! 这四个都是等价的
print("加密结果：", "".join(str(s) for s in a))
print("加密结果：", "".join([str(s) for s in a]))
print("加密结果：", "".join('%s' % s for s in a))
# print("加密结果：", "".join(list(map(str,a))))



# 四位整数解码程序
n = input("请输入加密后的四位整数：")
n = str(n)
a = []
# 第一步：先交换回原位置（因为加密时交换了位置）
for i in range(4):
    a.append(int(n[i]))
print(a)
a[0], a[3] = a[3], a[0]
a[1], a[2] = a[2], a[1]
print(a)
# 第二步：逆变换，每位减5，若为负则加10
decoded = []
for num in a:
    decoded_num = (num - 5) % 10
    decoded.append(str(decoded_num))
# 输出解码结果
print("解码结果：", "".join(decoded))
```

### 039：有序列表插入元素

```py
""""""

"""
基础版：手动查找位置 + list.insert()（最易理解）
    这是最直观的 “正常” 插入方式，核心是先找到元素该插入的位置，再用 Python 列表内置的insert()方法完成插入，逻辑清晰，新手容易掌握。
实现思路
    遍历有序列表，找到第一个大于等于待插入数字的位置（这就是插入点）；
    用list.insert(位置, 元素)将数字插入该位置；
    ! 注意，别漏了下面的这个步骤
	  如果遍历完所有元素都没找到（说明数字比所有元素都大），就追加到列表末尾。
"""

# 1. 初始化升序排列的列表
ordered_list = [1, 10, 100, 1000, 10000, 100000]
# 2. 接收用户输入的待插入数字
insert_num = int(input('请输入要插入的数字：'))

# 3. 查找插入位置并执行插入
# 标记是否找到插入位置（默认未找到）
found = False
for index in range(len(ordered_list)):
    #! 找到第一个大于等于待插入数字的位置
    if ordered_list[index] >= insert_num: 
        # 核心插入操作：在index位置插入数字
        ordered_list.insert(index, insert_num)
        found = True
        break  # 插入完成后退出循环

# 4. 如果没找到（数字比所有元素都大），追加到末尾
if not found:
    ordered_list.append(insert_num)

# 5. 输出结果
print('插入后的有序列表：', ordered_list)
```

### 2.12

```py
# "｛name｝喜欢｛fruit｝".format（name="李雷"）执行会出错，请修改代码让其正确执行
print("{name}喜欢{fruit}".format(name="李雷",fruit="苹果")) # 少参数了

# string = "Python is good”，请将字符串里的Python替换成 python，并输出替换后的结果
string = 'Python is good'
print(string.replace('P', 'p'))

# 有一个字符串 string = "python修炼第一期.html"，请写程序从这个字符串里获得.html前面的部分，要用尽可能多的方式来做这个事情
string = "python修炼第一期.html"
print(string[0:-5])
print(string[0:string.find('.html')] )

# "this is a book"，请用程序判断该字符串是否以this开头
print("this is a book".find('this') == 0)
print("this is a book".startswith('this'))

# "this is a book"，请用程序判断该字符串是否以apple结尾
print("this is a book".endswith('this'))

# "This IS a book"，请将字符串里的大写字符转成小写字符
print("This IS a book".lower())

# "This IS a book"，请将字符串里的小写字符，转成大写字符
print("This IS a book".upper())

# "this is a book\n"，字符串的末尾有一个回车符，请将其删除
print("this is a book\n".strip())
# strip（）方法用于移除字符串头尾指定的字符（默认为空格或换行符）

print('='* 50)
# 先定义一个示例字符串（避免索引越界，长度设为40+）
string = "Python is a good"

replace_2 = string.replace("", "'")  # 会在每个字符前后插入'，如"P"→"'P'"
print("11. string.replace(\"\", '\'') 结果：", replace_2)

# 定义初始列表
lst = [1, 2, 3, 4, 5]
contains_6 = 6 in lst
print("2. 6是否在列表中:", contains_6)
# contains_6 = lst.index(6) #! 这样执行会报错
# print("2. 6是否在列表中:", contains_6)


# 3. lst + [6, 7, 8] 的结果
concatenated = lst + [6, 7, 8]
print("3. lst + [6, 7, 8] 的结果:", concatenated)

print('='* 50)
# 4. lst*2 的结果
repeated = lst * 2
print("4. lst*2 的结果:", repeated) #! 竟然是又把自己加了一遍


# 7. 列表里所有元素的和
sum_val = sum(lst)
print("7. 元素和:", sum_val)

# 8. 在索引1的后面新增一个元素10
# 索引1的后面，即插入到索引2的位置（insert方法：第一个参数是插入位置，第二个是元素）
lst.insert(2, 10)
print("8. 插入10后的列表:", lst)





```

### 068：旋转队列（感觉没啥用，简单看看好了）

```py
""""""

"""
题目思路
题目要求：
    将一个整数列表的前 n-m 个元素整体向后移动 m 个位置，同时将最后 m 个元素移动到列表最前面。
核心思路：
    利用 collections.deque 双端队列的 rotate() 方法高效实现旋转操作，
    该方法专门用于队列的左右旋转，时间复杂度仅为O(m)，比列表切片更高效。
"""

# 从collections模块导入所有内容（不推荐，建议改为from collections import deque）
# from collections import *
from collections import deque

# 定义原始整数列表
li = [1, 2, 3, 4, 5, 6, 7, 8, 9]

# 将列表转换为双端队列deque，maxlen设置为列表长度，确保队列长度固定
deq = deque(li, maxlen=len(li))

# 打印原始列表，用于对比旋转前后的结果
print(li)

# 从用户输入获取旋转步数m，将deque向右旋转m步
# 正数m表示向右旋转，即最后m个元素移到最前面，正好符合题目要求
deq.rotate(int(input('rotate:')))

# 将deque转换回列表并打印，得到旋转后的结果
print(list(deq))
```

### 069/023：画菱形 ❓

```py
""""""
"""

a = '*' * 2 * (4 - num) + 1
1 = (num=4)
3 = (num=3)
5 = (num=2)

7 = (num=1)

5 = (num=2)
3 = (num=3)
1 = (num=4)
"""
"""
核心思路是利用递归实现菱形的上下对称打印：
    先通过递归逐层打印菱形的上半部分（从 1 个*递增到 7 个*，每行居中）；
    递归回溯时，再逐层打印菱形的下半部分（从 5 个*递减到 1 个*，每行居中）；
    利用字符串居中方法保证每行对齐，形成完整菱形。
"""

def draw(n):
    a = "*" * (2 * (4 - n) + 1)
    print(a.center(9, ' '))
    
    if n != 1:
        # 递归调用，层数减1，先打印更内层的行
        draw(n-1)
        # 递归返回后，打印当前行（形成下半部分）
        print(a.center(9, ' '))   #将 a 居中，用空格填充两侧，总长度为 9

# 从num=4开始执行，触发整个递归过程
draw(4)
```



```py
""""""
"""

a = '*' * 2 * (4 - num) + 1
1 = (num=4)
3 = (num=3)
5 = (num=2)

7 = (num=1)

5 = (num=2)
3 = (num=3)
1 = (num=4)
"""
"""
核心思路是利用递归实现菱形的上下对称打印：
    先通过递归逐层打印菱形的上半部分（从 1 个*递增到 7 个*，每行居中）；
    递归回溯时，再逐层打印菱形的下半部分（从 5 个*递减到 1 个*，每行居中）；
    利用字符串居中方法保证每行对齐，形成完整菱形。
"""

#! 不再把菱形给写死了，n是多大的菱形，num是递归参数
def draw(n,num):
    # 计算当前行的星号数量：
    # num=4时1个， (2 * (4 - 4) + 1)
    # num=3时3个， (2 * (4 - 3) + 1)
    # num=2时5个， (2 * (4 - 2) + 1)
    # num=1时7个， (2 * (4 - 1) + 1)
    a = "*" * (2 * (n - num) + 1)
    # 将星号字符串在9个字符宽度内居中，用空格填充，保证每行对齐
    print(a.center(2*n+1, ' '))
    # 当num不等于1时，继续递归（打印上半部分）
    if num != 1:
        # 递归调用，层数减1，先打印更内层的行
        draw(n,num - 1)
        # 递归返回后，打印当前行（形成下半部分）
        print(a.center(2 * n + 1, ' '))   #将 a 居中，用空格填充两侧，总长度为 9

# 从num=4开始执行，触发整个递归过程
draw(4,4)
```

### 2.13

```py
# 请将列表里所有数字修改成原来的两倍
lst = [1,[4,6],True]

def double_list(lst):
    for index, item in enumerate(lst):
        if isinstance(item, bool):
            continue
        if isinstance(item, (int, float)):
            lst[index] *= 2
        if isinstance(item, list):
            double_list(item)

double_list(lst)

print(lst)

print('*' * 50+'\n'+'*' * 50+'\n'+'*' * 50+'\n')


# 1. (1, 2)*2
# 思路：元组与整数相乘，表示将元组中的元素重复整数次
result1 = (1, 2) * 2
print("第1题结果:", result1)
print("第1题类型:", type(result1))  # <class 'tuple'>

# 2. (1,)*2
# 思路：(1,) 是一个单元素元组（逗号是关键），与整数2相乘表示重复元素
result2 = (1,) * 2
print("第2题结果:", result2)
print("第2题类型:", type(result2))  # <class 'tuple'>

# 3. (1)*2
# 思路：(1) 中的括号仅表示运算优先级，等价于 1*2，结果是整数
result3 = (1) * 2
print("第3题结果:", result3)
print("第3题类型:", type(result3))  # <class 'int'>


print('*' * 50+'\n'+'*' * 50+'\n'+'*' * 50+'\n')

"""
1. 合并列表（list.extend()）
题目思路
    核心知识点：列表是可变对象，可以在原对象上直接修改内容，而不需要创建新对象。
    目标：将lst2的元素合并到lst末尾，且不产生新的列表。
    方法选择：使用list.extend()方法，它会将另一个可迭代对象的元素逐个添加到当前列表的末尾，是原地修改操作。
"""

# 1. 定义第一个列表 lst，包含元素 1, 2, 3
lst = [1, 2, 3]
# 2. 定义第二个列表 lst2，包含元素 4, 5, 6
lst2 = [4, 5, 6]

# 3. 打印合并前 lst 的内存地址，验证对象身份
print("合并前 lst 的内存地址:", id(lst))

# 4. 调用 extend 方法，将 lst2 的所有元素逐个添加到 lst 的末尾
#    这是原地操作，不会创建新的列表对象
lst.extend(lst2)

# 5. 打印合并后的 lst，内容变为 [1, 2, 3, 4, 5, 6]
print("合并后的 lst:", lst)
# 6. 打印合并后 lst 的内存地址，与合并前一致，说明是同一个对象
print("合并后 lst 的内存地址:", id(lst))

print('*' * 50+'\n'+'*' * 50+'\n'+'*' * 50+'\n')


"""
2. 合并字符串（str += str）
题目思路
    核心知识点：字符串是不可变对象，任何对字符串的修改操作（包括+=）都不会改变原对象，而是创建一个新的字符串对象。
    目标：将str2合并到str1的末尾，理解此过程会产生新的字符串。
    方法选择：使用str1 += str2，它等价于str1 = str1 + str2，会先生成新字符串，再将变量str1指向这个新对象。
"""
# 1. 定义字符串 str1，内容为 "1,2,3"
str1 = "1,2,3"
# 2. 定义字符串 str2，内容为 "4,5,6"
str2 = "4,5,6"

# 3. 打印合并前 str1 的内存地址，验证对象身份
print("合并前 str1 的内存地址:", id(str1))

# 4. 执行 += 操作，等价于 str1 = str1 + str2
#    先计算 str1 + str2 得到新字符串 "1,2,34,5,6"，再将 str1 指向这个新对象
str1 += str2

# 5. 打印合并后的 str1，内容变为 "1,2,34,5,6"
print("合并后的 str1:", str1)
# 6. 打印合并后 str1 的内存地址，与合并前不同，说明指向了新的对象
print("合并后 str1 的内存地址:", id(str1))

print('*' * 50+'\n'+'*' * 50+'\n'+'*' * 50+'\n')

lst = [2,5,6,7,8,9,2,9,9]
# 计算列表里元素的平均值
print(sum(lst) / len(lst))

# 找出列表里最大值的个数
print(lst.count(max(lst)))

# 找出元素6在列表中的索引
print(lst.index(6))

print('*' * 50+'\n'+'*' * 50+'\n'+'*' * 50+'\n')

lst = [2,5,6,7,8,9,2,9,9]
"""
2. 在列表的中间位置插入元素20
3. 将列表［2，5,6］合并到lst中
4． 移除列表中索引为3的元素
6. 对列表里的元素进行排序，从小到大一次，从大到小一次
"""

# 2. 在列表的中间位置插入元素20
lst.insert(len(lst)//2, 20)
print("2. 中间插入20后:", lst)

# 3. 将列表[2, 5, 6]合并到lst中
lst.extend([2, 5, 6])
print("3. 合并列表[2,5,6]后:", lst)

# 4. 移除列表中索引为3的元素
del lst[3]
print("4. 移除索引3的元素后:", lst)

# 6. 对列表里的元素进行排序，从小到大一次，从大到小一次
lst.sort()
print("6.1 从小到大排序后:", lst)
lst.sort(reverse=True)
print("6.2 从大到小排序后:", lst)

print('*' * 50+'\n'+'*' * 50+'\n'+'*' * 50+'\n')

lst = [1, 4, 5, [1, 3, 5, 6, [8, 9, 10, 12]]]

# 9. lst[-2]的值是什么
print("9. lst[-2]的值:", lst[-2])

# 10. len(lst[-1])的值
print("10. len(lst[-1])的值:", len(lst[-1]))

# 12. lst[-1][1:3]的值
print("12. lst[-1][1:3]的值:", lst[-1][1:3])

# 13. lst[-1][-1][1:-2]的值
print("13. lst[-1][-1][1:-2]的值:", lst[-1][-1][1:-2])

print('*' * 50+'\n'+'*' * 50+'\n'+'*' * 50+'\n')

dic = {
    'python': 95,
    'java': 99,
    'c': 100
}

dic['php'] = 90
"""
# 1. 字典的长度
5. 获取所有的key值，存储在列表里
6. 获取所有的value值，存储在列表里
7. 判断 javascript 是否在字典中
8. 获得字典里所有value 的 和
9. 获取字典里最大的value
10. 获取字典里最小的value
11. 字典 dic1 = ｛php'： 97｝，
将dic1的数据更新到dic中
"""

# 1. 字典的长度
print("1. 字典长度:", len(dic))

# 5. 获取所有key值，存储到列表
keys_list = list(dic.keys())
print(dic.keys(),'dic.keys()')
print("5. 所有key列表:", keys_list)

# 6. 获取所有value值，存储到列表
values_list = list(dic.values())
print("6. 所有value列表:", values_list)

# 7. 判断'javascript'是否在字典中
print("7. 'javascript'是否在字典中:", 'javascript' in dic)

# 8. 获得所有value的和
value_sum = sum(dic.values())
print(dic.values(),'dic.values()')
print("8. 所有value的和:", value_sum)

# 9. 获取字典里最大的value
max_value = max(dic.values())
print("9. 最大value:", max_value)

# 10. 获取字典里最小的value
min_value = min(dic.values())
print("10. 最小value:", min_value)

# 11. 将字典dic1 = {'php': 97}的数据更新到dic中
dic1 = {'php': 97}
# dic.update(dic1)

dic['php'] = 97 #和上面update同理

print("11. 更新字典后:", dic)
```

### 076做函数（奇偶数列求和）

```py
""""""

"""
二、题目解题思路
题目核心需求：根据输入整数n的奇偶性，执行不同的累加计算
    当n为偶数时，计算偶数项的倒数和：1/2 + 1/4 + 1/6 + … + 1/n
    当n为奇数时，计算奇数项的倒数和：1/1 + 1/3 + 1/5 + … + 1/n
代码采用函数封装 + 函数作为参数传递的设计思路：
    用两个独立函数分别封装偶数求和、奇数求和的逻辑，实现功能解耦
    主程序负责获取用户输入、判断奇偶性、选择对应的计算函数，最终输出结果
"""

# 定义偶数求和函数：计算 1/2 + 1/4 + ... + 1/n 的和
def even(n):
    # 初始化累加和为浮点型0.0，避免整数除法的精度问题
    s = 0.0
    # 循环遍历2、4、6...n，range左闭右开，所以结束值写n+1
    for i in range(2, n + 1, 2):
        # 累加当前数的倒数到总和s中
        s += 1.0 / i
    # 返回最终的累加和
    return s

# 定义奇数求和函数：计算 1/1 + 1/3 + ... + 1/n 的和
def odd(n):
    # 初始化累加和为浮点型0.0
    s = 0.0
    # 循环遍历1、3、5...n
    for i in range(1, n + 1, 2):
        # 累加当前数的倒数到总和s中
        s += 1.0 / i
    # 返回最终的累加和
    return s


# 提示用户输入一个数字，转为整数类型赋值给n
n = int(input('input a number: '))
# 判断n是否为偶数（n对2取余等于0）
if n % 2 == 0:
    # 偶数
    sum = even(n)
else:
    # 奇数
    sum = odd(n)
# 打印最终的累加和结果
print(sum)
```

### 2.25

```py
""""""

"""
一、题目思路
题目给出两个列表 lst1 和 lst2，需要解决三个问题：
    找出既在 lst1 又在 lst2 中的整数（交集）
    找出在 lst1 中但不在 lst2 中的整数（差集）
    找出两个列表中所有不重复的整数（并集）
用列表实现这些操作效率很低，因为每次判断元素是否存在都要遍历列表（时间复杂度 O (n)）。而 ** 集合（set）** 的核心优势就是：
    自动去重
    成员判断（in）和集合运算（交、差、并）的时间复杂度接近 O (1)
    提供了专门的方法来完成这些操作，代码更简洁
所以，解题思路是：
    将两个列表转换为集合，自动去重
    使用集合的内置方法完成三种运算
    输出结果
"""

# 定义两个列表，lst1包含重复元素
lst1 = [1, 2, 3, 5, 6, 3, 2]
lst2 = [2, 5, 7, 9]

# 将列表转换为集合，自动去除重复元素
set1 = set(lst1)  # {1, 2, 3, 5, 6}
set2 = set(lst2)  # {2, 5, 7, 9}

# 1. 哪些整数既在lst1中，也在lst2中 → 交集
#! 交集
# 方法一：使用 intersection() 方法
print(set1.intersection(set2))  # 输出 {2, 5}
# 方法二：使用运算符 &
# print(set1 & set2)

# 2. 哪些整数在 lst1 中，不在lst2中 →
#! 差集
# 方法一：使用 difference() 方法
print(set1.difference(set2))  # 输出 {1, 3, 6}
# 方法二：使用运算符 -
# print(set1 - set2)

# 3. 两个列表一共有哪些整数 → 并集
#! 并集
# 方法一：使用 union() 方法
print(set1.union(set2))  # 输出 {1, 2, 3, 5, 6, 7, 9}
# 方法二：使用运算符 |
# print(set1 | set2)

print('*' * 50+'\n'+'*' * 50+'\n'+'*' * 50+'\n')

"""
range(3,20,4)
    start=3：从 3 开始
    stop=20：到 20 结束（但不包含 20）
    step=4：每次 加 4

输出的序列是多少
range(10, -3)  因为没有这个区间，所以不执行
range(10, -3, -4)   但是倒着数确可以
range(3, 20, 4)
"""
for i in range(10, -3,-4) : # 10
    print(i,end=' ')

print('*' * 50+'\n'+'*' * 50+'\n'+'*' * 50+'\n')


# 定义一个字典，键是编程语言名称，值是对应的分数
dic = {
    'python': 90,
    'java': 95
}

# 遍历字典的 items()，它会返回所有 (key, value) 元组的可迭代对象
# 用解包语法，把每个元组的两个元素分别赋给 key 和 value 变量
for key, value in dic.items():
    # 打印当前循环到的键和值
    print(key, value)


print('*' * 50+'\n'+'*' * 50+'\n'+'*' * 50+'\n')

```

### 快速排序

```py
"""
快速排序
找一个枢纽，然后这个枢纽把序列分成两部分，
枢纽一般是第一个位置
    pivot = 5
    0     1     2     3     4
    2     1     5     8     9
                high
                low
"""
"""
记忆一个概念最好记忆的就是把它的算法执行过程简单画一遍
这个排序适合用5、9、1、8、2来举例
快速排序（quick sort）是交换排序中的一种，它的基本思想是在待排序的n个元素中任取一个元素（通常取第一个元素）作为基准，
把该元素放入适当位置后，数据序列被此元素划分成两部分。
所有比该元素关键字小的元素放置在前一部分，所有比它大的元素放置在后一部分，并把该元素排在这两部分的中间（称为该元素归位），这个过程称为一趟快速排序，
即一趟划分。之后对产生的两个部分分别重复上述过程，直至每部分内只有一个元素或空为止。
"""

# 分区函数：完成一次分区操作，返回基准值最终的正确索引
# 参数说明：
#   lst: 待排序的列表（原地修改，无需额外空间）
#   low: 待排序区间的左边界索引
#   high: 待排序区间的右边界索引
def partition(lst, low, high):
    # 1. 选定基准值：取当前区间的第一个元素作为pivot
    pivot = lst[low]

    # 2. 双指针循环，直到左右指针相遇（low == high）
    while low < high:
        #? 注意是>= pivot，不然如果是> pivot，如果遇到相等的元素，high不动了，下面low也是同理，指针都原地不动了，就死循环了
        #! 右指针向左移动：跳过所有≥基准值的元素，找到第一个<基准值的元素
        # 内层while的low<high是为了避免指针越界
        while low < high and lst[high] >= pivot:
            high -= 1
        # 将找到的<基准值的元素，放到左指针low的位置
        lst[low] = lst[high]

        # 左指针向右移动：跳过所有≤基准值的元素，找到第一个>基准值的元素
        while low < high and lst[low] <= pivot:
            low += 1
        #! 将找到的>基准值的元素，放到右指针high的位置
        lst[high] = lst[low]

    # 3. 左右指针相遇，此时的low就是基准值的正确位置，将基准值放到这里
    lst[low] = pivot
    # 返回基准值的索引，用于后续分割左右子区间
    return low


# 快速排序递归主函数：分治处理每个子区间
# 参数说明：
#   lst: 待排序的列表
#   low: 待排序区间的左边界索引
#   high: 待排序区间的右边界索引
def quick_sort(lst, low, high):
    # 递归终止条件：当区间左边界≥右边界时，区间长度≤1，天然有序，直接返回
    if low < high:
        # 1. 执行分区操作，得到基准值的正确索引
        pivot_index = partition(lst, low, high)
        # 2. 递归处理基准值左侧的子区间（左边界到基准索引-1）
        quick_sort(lst, low, pivot_index - 1)
        # 3. 递归处理基准值右侧的子区间（基准索引+1到右边界）
        quick_sort(lst, pivot_index + 1, high)


# 定义待排序的测试列表
arr = [5, 9, 1, 8, 2]
# 调用快速排序函数，排序整个列表（区间0到len(arr)-1）
quick_sort(arr, 0, len(arr) - 1)
# 打印排序后的结果
print(arr)  # 运行输出：[1, 2, 5, 8, 9]


```

### 归并排序

```py
""""""
"""
    arr

源   7     8     9     2     3
?新  
     0     1     2     3     4
    low
                             high
                mid

    B
!   7     8     9     2     3
    0     1     2     3     4
    i
                      j
    k
"""
"""
    arr

源   7     8     9     2     3
?新  2     3     
     0     1     2     3     4
    low
                             high
                mid

    B
!   7     8     9     2     3
    0     1     2     3     4
    i
                                 j
                k
"""
"""
    arr

源   7     8     9     2     3
?新  2     3     7     8     9
     0     1     2     3     4
    low
                             high
                mid

    B
!   7     8     9     2     3
    0     1     2     3     4
                      i
                                 j
                                 k
"""
def merge(arr,low,mid,high):
    for i in range(low,high+1):
        B[i] = arr[i]

    i = low
    j = mid+1
    k = low

    while i<=mid and j<=high:
        if B[i] <= B[j]:
            arr[k] = B[i]
            i+=1
        else:
            arr[k] = B[j]
            j+=1
        k+=1

    while i<= mid:
        arr[k] = B[i]
        i+=1
        k+=1

    while j<= high: #! 注意这里是j一直到high
        arr[k] = B[j]
        j+=1
        k+=1



def merge_sort(arr,low,high):
    if low<high:
        mid = (low+high)//2
        merge_sort(arr,low,mid)
        merge_sort(arr,mid+1,high)
        merge(arr, low, mid, high)

test_arr = [7,8,9,1,2]
print(1)
B = [0] * len(test_arr)
merge_sort(test_arr,0,len(test_arr)-1)

print(test_arr)

```

### 忽略大小比较字符串是否相等

```py
"""
===== 解题核心思路 =====
1. 需求拆解：实现一个自定义函数，接收两个待比较的内容，忽略大小写后判断是否相等，最终返回布尔值
2. 核心原理：大小写差异是唯一需要消除的干扰，Python字符串内置的 lower()/upper() 方法可以将字符串统一转为全小写/全大写，彻底消除大小写差异
3. 核心执行步骤：
   ① 函数入参：两个待比较的内容（兼容非字符串输入，自动做类型转换）
   ② 统一格式：将两个入参都转为字符串类型，再统一转为全小写（全大写效果完全一致）
   ③ 相等判断：直接比较格式统一后的两个字符串是否完全一致，返回布尔结果
4. 边界兼容：覆盖空字符串、混合大小写、带数字/特殊符号、非字符串输入等常见场景
"""


# 定义实现需求的函数，函数名见名知意，入参为两个待比较的内容
def is_equal_ignore_case(str1, str2):
    # 步骤1：将两个入参统一转为字符串类型，兼容数字、布尔值等非字符串输入，避免类型报错
    # 同时调用lower()方法，将字符串全部转为小写，彻底消除大小写差异
    format_str1 = str(str1).lower()
    format_str2 = str(str2).lower()

    # 步骤2：比较格式统一后的两个字符串是否完全相等，直接返回布尔结果（True=相等/False=不相等）
    return format_str1 == format_str2


# ===== 测试案例（验证函数功能，覆盖题目示例和各类常见场景） =====
# 测试1：题目示例的基础场景，"abc" 和 "ABC"，预期结果：True
print(f'测试1 "abc" 和 "ABC" 忽略大小写是否相等：{is_equal_ignore_case("abc", "ABC")}')

# 测试2：混合大小写场景，"aBc123" 和 "AbC123"，预期结果：True
print(f'测试2 "aBc123" 和 "AbC123" 忽略大小写是否相等：{is_equal_ignore_case("aBc123", "AbC123")}')

# 测试3：内容不同的场景，"abc123" 和 "abc456"，预期结果：False
print(f'测试3 "abc123" 和 "abc456" 忽略大小写是否相等：{is_equal_ignore_case("abc123", "abc456")}')

# 测试4：空字符串场景，空 和 空，预期结果：True
print(f'测试4 空字符串 和 空字符串 忽略大小写是否相等：{is_equal_ignore_case("", "")}')

# 测试5：带特殊符号的场景，"Hello!" 和 "hELLO!"，预期结果：True
print(f'测试5 "Hello!" 和 "hELLO!" 忽略大小写是否相等：{is_equal_ignore_case("Hello!", "hELLO!")}')
```

### 返回学生考试成绩的最高分的科目和分数

```py
def get_max_score(score_dic):
    """
    返回学生考试成绩的最高分的科目和分数
    :param score_dic: 学生成绩字典，key为科目名称（str），value为对应分数（int/float）
    :return: 元组 (最高分科目, 最高分)，格式示例：('英语', 98)
    """

    # 3. 初始化最高分和对应科目：取字典第一个元素作为初始值，兼容所有分数场景
    # items()获取字典所有的键值对，next()取第一个键值对
    max_course = ''
    max_score = 0

    # 4. 遍历成绩字典的所有科目和分数，逐个比较
    for course, score in score_dic.items():
        # 如果当前科目分数大于记录的最高分，就更新最高分和对应科目
        if score > max_score:
            max_score = score
            max_course = course

    # 5. 返回最终的最高分科目和分数，符合题目要求的函数功能
    return max_course, max_score


# 主程序入口：Python标准写法，只有直接运行当前文件时才会执行下面的代码
if __name__ == '__main__':
    # 定义测试用的成绩字典，和题目示例保持一致
    dic = {
        '语文': 90,
        '数学': 97,
        '英语': 98
    }
    # 调用函数，拿到返回的结果
    result_course, result_score = get_max_score(dic)
    # 打印结果，和题目要求的输出格式完全匹配
    print(result_course, result_score)
```

### 水果

```py
"""
===== 题目需求对应 =====
1. 共同喜欢的水果 → 集合交集
2. 两人喜欢的全部水果 → 集合并集
3. 小明独有的水果 → 小明集合 - 小红集合（差集）
4. 小红独有的水果 → 小红集合 - 小明集合（差集）
"""

# 1. 定义两人喜欢的水果列表，变量名见名知意，替代原无意义的lst_1/lst_2
ming_like = ['葡萄', '香蕉', '苹果']
hong_like = ['香蕉', '桃子', '草莓']

# 2. 将列表转换为集合，为后续交并差运算做准备
# 集合的特性：元素唯一、无序，原生支持交/并/差运算
ming_set = set(ming_like)
hong_set = set(hong_like)

# 3. 问题1：计算共同喜欢的水果（交集）
# intersection()方法：返回两个集合都包含的元素
common_fruit = ming_set.intersection(hong_set)
# 格式化输出，标注结果对应的问题，提升可读性
print(f"1. 两人共同喜欢的水果：{common_fruit}")

# 4. 问题2：计算两人喜欢的全部水果（并集）
# union()方法：返回两个集合的所有元素，自动去重
all_fruit = ming_set.union(hong_set)
print(f"2. 两人喜欢的全部水果：{all_fruit}")

# 5. 问题3：小明喜欢、小红不喜欢的水果（小明集合 减 小红集合的差集）
# difference()方法：返回当前集合有、但对比集合没有的元素
ming_only = ming_set.difference(hong_set)
print(f"3. 小明喜欢但小红不喜欢的水果：{ming_only}")

# 6. 问题4：小红喜欢、小明不喜欢的水果（小红集合 减 小明集合的差集）
hong_only = hong_set.difference(ming_set)
print(f"4. 小红喜欢但小明不喜欢的水果：{hong_only}")
```



```py

```



```py

```



```py

```



```py

```



```py

```



```py

```



```py

```



```py

```



```py

```



```py

```



```py

```



```py

```



```py

```



```py

```



```py

```



```py

```



```py

```



```py

```



```py

```



```py

```



```py

```



```py

```



```py

```



```py

```



```py

```



```py

```



```py

```



```py

```



```py

```



```py

```



```py

```



```py

```



```py

```



```py

```



```py

```



```py

```



```py

```



```py

```



```py

```



```py

```



```py

```



```py

```



```py

```



```py

```



```py

```



```py

```



```py

```



```py

```



```py

```



```py

```



```py

```



```py

```



```py

```



```py

```



```py

```



```py

```



```py

```



```py

```



```py

```



```py

```



```py

```



```py

```



```py

```



```py

```



```py

```



```py

```



```py

```



```py

```



```py

```



```py

```



```py

```



```py

```



```py

```



```py

```



```py

```



```py

```



```py

```



```py

```



```py

```



```py

```



```py

```

