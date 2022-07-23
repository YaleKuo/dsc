#include "SqListStatic.h"
#include <stdio.h>
#include <stdbool.h>

void InitList(SqListStatic* L)
{
	for (int i = 0; i < MaxSize; i++)
	{
		L->data[i] = 0;
	}
	L->length = 0;
}

PrintList(SqListStatic* L) {
	for (int i = 0; i < L->length; i++)
	{
		printf("%d ", L->data[i]);
	}
	printf("\n");
}

bool ListInsert(SqListStatic* L, int i, int e) {
	if (L->length >= MaxSize)return false;
	if (i<1 || i>L->length + 1)return false;
	for (int k = L->length; k >= i; k--)
	{
		L->data[k] = L->data[k - 1];
	}
	L->data[i - 1] = e;
	L->length++;
	return true;
}

bool ListDelete(SqListStatic* L, int i, int* e)
{
	if (i<1 || i>L->length)return false;// i>L->length就已经判断了当L->length<=0等错误情况
	*e = L->data[i - 1];
	//printf("%d\n", *e);
	for (int k = i-1; k < L->length-1; k++)
	{
		L->data[k] = L->data[k + 1];
	}
	L->length--;
	return true;
}

int LocateElem(SqListStatic* L, int e)
{
	for (int i = 0; i < L->length; i++)
	{
		if (L->data[i] == e)return i + 1;// 返回其下标i,返回其位序i + 1
	}
	return -1;
}

bool DeleteMin(SqListStatic* L, int* e)// P30_1 删除顺序表最小值并返回,空出的位置由最后一个元素填补
{
	if (L->length == 0)return false;// bug在这里L->length = 0
	int min = L->data[0];
	int index = 0;
	for (int i = 0; i < L->length; i++)
	{
		if (L->data[i] < min) {
			min = L->data[i];
			index = i;
		}
	}
	if(index<L->length){// 如果不判断会警告读取无效数据,万一data数组里面没有index这个位置呢
		L->data[index] = L->data[L->length - 1];
	}
	*e = min;
	L->length--;// 由最后一个元素填补而不仅是复制其值
	return true;
}
