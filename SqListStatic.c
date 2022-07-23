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

bool LocateElem(SqListStatic* L, int e)
{



	return true;
}
