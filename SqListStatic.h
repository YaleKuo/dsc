#define MaxSize 50
typedef struct {
	int data[MaxSize];// 静态分配数组元素
	int length;
}SqListStatic;

void InitList(SqListStatic* L);

void ListInsert(SqListStatic* L, int i, int e);

PrintList(SqListStatic* L);