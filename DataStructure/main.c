#include<stdio.h>
#include"SequenceList.h"
int main(void) {
	//���Ա����
	LinearList* myList = initLinearList();//��ʼ�����Ա�
	printf("���Ա��Ƿ񴴽��ɹ�=%d\n",!!myList);
	printf("�����Ƿ�ɹ� = %d\n",insertXLinearList(myList, 1, 3));
	myList->num = 20;
	insertXLinearList(myList, 10, 2);
	for (int i = 0; i < maxSize; i++)
	{
		printf("%d", myList->arr[i]);
	}

	return 0;
}