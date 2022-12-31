/*
	文档说明：
		数据结构 - 线性表 - 顺序表的结构和操作

*/



//常量区  -  结构体  -  头文件
//#define maxSize 100	  //不推荐写法		
const int maxSize = 100;  //推荐写法
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


//全局变量




//函数定义和声明
/*
	1.线性表    -    规定数据类型为int
		1.线性表的初始化
		2.增：向线性表中第i(1=<i<=maxSize)个位置插入x
		3.删：删除线性表中值为x的元素
		4.删：删除线性表中第i个位置的元素
		5.查：查找线性表中值为x的元素
		6.查：查找线性表中第i个位置的元素
		7.改：将线性表中值为x的第一个元素的值改为y

*/

//需要使用的结构体
typedef struct {   //线性表的维护结构
	int num;       //表示线性表种当前元素的个数
	int* arr;      //存储数据的主体，大小是maxSize
}LinearList;


//1.线性表的初始化
LinearList* initLinearList(void) {
	LinearList* list = (LinearList*)malloc(sizeof(LinearList));
	//开始初始化结构体数据
	list->num = 0;
	list->arr = (int*)malloc(sizeof(int) * maxSize);
	for (int i = 0; i < maxSize; i++) list->arr[i] = 0; //全部初始化为0
	return list;
}

//2.增：向线性表中第i(1=<i<=maxSize)个位置插入x
bool insertXLinearList(LinearList* list, int i, int x) {
	//1.判误
	if (!list || list->num == maxSize || i <= 0 || i > list->num + 1) return false;
	//2.将从i-1下标开始的数据全部向后移一位
	for (int j = list->num - 1; j >= i - 1; j--)
		list->arr[j + 1] = list->arr[j];
	//3.向i-1下标出插入x
	list->arr[i - 1] = x;
	list->num++;
	return true;

}

//3.删：删除线性表中值为x的元素
bool delXLinearList(LinearList* list, int x) {
	//1.判误
	if (!list || list->num == 0) return true;
	//2.找值为x的元素的下标，找到后将后边元素向前移动一位
	for (int i = 0; i < list->num; i++) {
		
	}
}