#include <stdio.h>
#include "SqListStatic.h"
#include "SqListDynamic.h"
#include <stdbool.h>
int main() {
	SqListStatic L;
	InitList(&L);
	L.data[0] = 1; L.data[1] = 2; L.data[2] = 3; L.data[3] = 5; L.data[4] = 6;
	L.length = 5;
	PrintList(&L);

	printf("insert true or false:%d\n", ListInsert(&L, 4, 4));
	PrintList(&L);

	
	int e = -1;
	int* pe = &e;
	printf("%d\n", e);
	printf("delete ture or false:%d\n", ListDelete(&L, 5, pe));
	printf("%d\n", e);// £¨*pe£©¾ÍÊÇe
	PrintList(&L);


	return 0;
}

