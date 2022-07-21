#include <stdio.h>
#include "SqListStatic.h"
#include "SqListDynamic.h"
int main() {
	printf_s("hello\n");
	SqListStatic L;
	InitList(&L);
	L.data[0] = 1; L.data[1] = 2; L.data[2] = 3; L.data[3] = 5; L.data[4] = 6;
	L.length = 5;
	PrintList(&L);
	ListInsert(&L, 4, 4);
	PrintList(&L);
	return 0;
}

