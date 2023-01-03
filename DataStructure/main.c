#include<stdio.h>
#include"SequenceList.h"
int main(void) {
	//线性表调用
	LinearList* myList = initLinearList();//初始化线性表
	printf("线性表是否创建成功=%d\n",!!myList);
	for (int i = 0; i < 10; i++) {
		insertXLinearList(myList, i + 1, rand() % 10);//1 7 4 0 9 4 8 8 2 4
	}
	showLinearList(myList);//展示线性表
	delXLinearList(myList, 4);
	showLinearList(myList);
	delILinearList(myList, 6);
	showLinearList(myList);
	printf("下标=%d", searchXLinearList(myList, 8));
	int e = 0;
	if (searchILinearList(myList, 3, &e)) printf("e = %d\n", e);
	else printf("search I false\n");



	return 0;
}