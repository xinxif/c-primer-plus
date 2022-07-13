#include<stdio.h>
void alter(int*, int*);
int main(void)
{
	//测试
	int i, j;
	i = 5;
	j = 3;
	alter(&i, &j);
	printf("%-3d%d", i, j);


	/*
	7.
	  int num因该声明在函数的参数列表中
	  num++ 修改为 ++count,否则count永远不会小于num，导致死循环
	
	*/
	return 0;
}
void alter(int* rval, int* lval)
{
	int temp;
	temp = *rval;
	*rval = temp + *lval;//两个变量之和。

	*lval = temp - *lval;//两个变量之差。
}