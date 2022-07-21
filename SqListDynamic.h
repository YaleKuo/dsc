#include <stdlib.h>
#define InitVolume 100;
typedef struct {
	int* data;// 动态分配数组指针
	int MaxVolume, length;// MaxSize已被定义为常量 所以这里用Volume
}SqListDynamic;
