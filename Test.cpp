#include "Test.h"


void main()
{
	//声明
	int array[3]{ 0,1,2 };
	int* search(int* a, int num);

	int* zeroptr = search(array, 3);
	cout << zeroptr << endl;//000000ED5499F928
}

int* search(int* a, int num)
{
	for (int i = 0; i < num; i++)
	{
		if (a[i] == 0)
		{
			return &a[i];//返回的地址指向元素在主函数中的定义
		}
	}
}