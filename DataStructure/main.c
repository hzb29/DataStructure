#include<stdio.h>
#include"SequenceList.h"
int main(void) {
	//���Ա����
	LinearList* myList = initLinearList();//��ʼ�����Ա�
	printf("���Ա��Ƿ񴴽��ɹ�=%d\n",!!myList);
	for (int i = 0; i < 10; i++) {
		insertXLinearList(myList, i + 1, rand() % 10);//1 7 4 0 9 4 8 8 2 4
	}
	showLinearList(myList);//չʾ���Ա�
	delXLinearList(myList, 4);
	showLinearList(myList);
	delILinearList(myList, 6);
	showLinearList(myList);
	printf("�±�=%d", searchXLinearList(myList, 8));
	int e = 0;
	if (searchILinearList(myList, 3, &e)) printf("e = %d\n", e);
	else printf("search I false\n");



	return 0;
}