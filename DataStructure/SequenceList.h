/*
	�ĵ�˵����
		���ݽṹ - ���Ա� - ˳���Ľṹ�Ͳ���

*/



//������  -  �ṹ��  -  ͷ�ļ�
//#define maxSize 100	  //���Ƽ�д��		
const int maxSize = 100;  //�Ƽ�д��
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


//ȫ�ֱ���




//�������������
/*
	1.���Ա�    -    �涨��������Ϊint
		1.���Ա�ĳ�ʼ��
		2.���������Ա��е�i(1=<i<=maxSize)��λ�ò���x
		3.ɾ��ɾ�����Ա���ֵΪx��Ԫ��
		4.ɾ��ɾ�����Ա��е�i��λ�õ�Ԫ��
		5.�飺�������Ա���ֵΪx��Ԫ��
		6.�飺�������Ա��е�i��λ�õ�Ԫ��
		7.�ģ������Ա���ֵΪx�ĵ�һ��Ԫ�ص�ֵ��Ϊy

*/

//��Ҫʹ�õĽṹ��
typedef struct {   //���Ա��ά���ṹ
	int num;       //��ʾ���Ա��ֵ�ǰԪ�صĸ���
	int* arr;      //�洢���ݵ����壬��С��maxSize
}LinearList;


//1.���Ա�ĳ�ʼ��
LinearList* initLinearList(void) {
	LinearList* list = (LinearList*)malloc(sizeof(LinearList));
	//��ʼ��ʼ���ṹ������
	list->num = 0;
	list->arr = (int*)malloc(sizeof(int) * maxSize);
	for (int i = 0; i < maxSize; i++) list->arr[i] = 0; //ȫ����ʼ��Ϊ0
	return list;
}

//2.���������Ա��е�i(1=<i<=maxSize)��λ�ò���x
bool insertXLinearList(LinearList* list, int i, int x) {
	//1.����
	if (!list || list->num == maxSize || i <= 0 || i > list->num + 1) return false;
	//2.����i-1�±꿪ʼ������ȫ�������һλ
	for (int j = list->num - 1; j >= i - 1; j--)
		list->arr[j + 1] = list->arr[j];
	//3.��i-1�±������x
	list->arr[i - 1] = x;
	list->num++;
	return true;

}

//3.ɾ��ɾ�����Ա���ֵΪx��Ԫ��
bool delXLinearList(LinearList* list, int x) {
	//1.����
	if (!list || list->num == 0) return true;
	//2.��ֵΪx��Ԫ�ص��±꣬�ҵ��󽫺��Ԫ����ǰ�ƶ�һλ
	for (int i = 0; i < list->num; i++) {
		
	}
}