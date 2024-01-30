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

	int e = -1; int* pe = &e;
	printf("delete ture or false:%d\te = %d\n", ListDelete(&L, 5, pe),e);// £¨*pe£©¾ÍÊÇe
	PrintList(&L);

	int el = 6;
	printf("the index of %d:%d\n", el, LocateElem(&L, el));
	PrintList(&L);

	int min = -1; int* pmin = &min;
	printf("delete min true or false:%d\tmin = %d\n", DeleteMin(&L, pmin),min);
	PrintList(&L);

	return 0;

}

