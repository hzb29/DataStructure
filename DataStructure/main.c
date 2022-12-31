#include<stdio.h>
#include"SequenceList.h"
int main(void) {
	//线性表调用
	LinearList* myList = initLinearList();//初始化线性表
	printf("线性表是否创建成功=%d\n",!!myList);
	printf("插入是否成功 = %d\n",insertXLinearList(myList, 1, 3));
	myList->num = 20;
	insertXLinearList(myList, 10, 2);
	for (int i = 0; i < maxSize; i++)
	{
		printf("%d", myList->arr[i]);
	}

	return 0;
}