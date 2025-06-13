#include <iostream>

#define MaxSize 10
#define ElemType int
typedef struct
{
    ElemType data[MaxSize];
    int length;
} SqList;

void InitList(SqList &L)
{
    L = ()malloc(sizeof(SqList)); // 分配内存
    L.length = 0;
}
bool InsertList(SqList &L, int i, ElemType e)
{
    if (i < 1 || i > L.length + 1)
    {
        return false; // 插入位置不合法
    }
    if (L.length >= MaxSize)
    {
        return false; // 顺序表已满
    }
    for (int j = L.length; j >= i; j--)
    {
        L.data[j] = L.data[j - 1]; // 向后移动元素
    }
    L.data[i - 1] = e; // 插入新元素
    L.length++;
    return true;
}
bool DeleteList(SqList &L, int i, ElemType &e)
{
    if (i < 1 || i > L.length)
    {
        return false; // 删除位置不合法
    }
    e = L.data[i - 1]; // 保存被删除的元素
    for (int j = i; j < L.length; j++)
    {
        L.data[j - 1] = L.data[j]; // 向前移动元素
    }
    L.length--;
    return true;
}
void Print(SqList L)
{
    for (int i = 0; i < L.length; ++i)
    {
        printf("L.data[%d]=%d\n", i, L.data[i]);
    }
    printf("\n");
}

void swap(ElemType &a, ElemType &b)
{
    ElemType temp = a;
    a = b;
    b = temp;
}

int partition1(SqList *&L)
{
    int i = 0, j = L->length - 1;
    ElemType pivot = L->data[0]; // 以 data[0]为基准
    while (i < j)
    { // 从区间两端交替向中间扫描，直到 i=j 为止
        while (i < j && L->data[j] > pivot)
            j--; // 从右向左扫描，找一个小于等于 pivot 的元素
        while (i < j && L->data[i] <= pivot)
            i++; // 从左向右扫描，找一个大于 pivot 的元素
        if (i < j)
            swap(L->data[i], L->data[j]); // 将 L->data[i]和 L->data[j]进行交换
    }
    swap(L->data[0], L->data[i]); // 将 L->data[0]和 L->data[i]进行交换
    return i;
}

int main()
{

    SqList *L;
    InitList(*L);
    InsertList(*L, 1, 10);
    Print(*L);
    printf("Hello, World1!\n");
    return 0;
}
