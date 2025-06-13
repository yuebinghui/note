#include <iostream>

typedef int ElemType;
#define MaxSize 6
typedef struct
{
    ElemType data[MaxSize]; // 存储空间基址
    int length;             // 当前长度
} SqList, *SqList_point;

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

void Printf(SqList_point L)
{
    for (int i = 0; i < L->length; i++)
    {
        printf("L->data[%d]=%d\n", i, L->data[i]);
    }
    printf("\n");
}

int main()
{
    int a[6] = {2, 1, 3, 4, 5, 6};
    SqList_point L;
    L = (SqList_point)malloc(sizeof(SqList));
    L->length = 6;
    for (int i = 0; i < L->length; i++)
    {
        L->data[i] = a[i];
    }

    partition1(L);
    
    Printf(L);
    return 0;
}
