#include "SqListStatic.h"
#include <stdio.h>

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

void ListInsert(SqListStatic* L, int i, int e) {
	for (int k = L->length; k >= i; k--)
	{
		L->data[k] = L->data[k - 1];
	}
	L->data[i - 1] = e;
	L->length++;
}
