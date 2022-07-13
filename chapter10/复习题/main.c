#include<stdio.h>
int main(void)
{

	/*
	1
		8 8
		4 4
		0 0
		2 2
	2
		初始话列表中的值是4个，ref数组有4个元素
	3

		数组名指向了数组的首元素，ref+1指向数组第二个元素，ref是常量不可以更改ref的值（ref保存的是数组的首地址)
	4

		a.
		  12 16
		b.
		  12 14
	5
		a.
		  12 16
		  12 14

	6
		&gird[22][56];

		gird[22];

		*gird;
	*/
	// 7
		int digits[10];

		float rates[6];

		int mat[3][5];

		char* psa[20];

		char(*pstr)[20];
	// 8

		int arr[6] = { 1,2,4,8,16,32 };

		arr[2];

		int arr2[100] = { [99] = -1 };

		int arr3[100] = { [5] = 101,[10] = 101,[11] = 101,[12] = 101,[13] = 101 };

	
	// 9
		0, 1, 2, 3, 4, 5, 6, 7, 8, 9;
	// 10
		/*
		a.
			footbeer[2]是float 有效
		b.
			rootbeer是指针，不是float类型

		c.
			rootbeer是指针，不是float类型
		d.
			rootbeer是指针，不是float类型

		e.
			有效
		f.
			不可以用数组赋值
		g.
			value不是地址
		h.
			有效

		*/
	// 11
		int c[800][600];
	return 0;
}