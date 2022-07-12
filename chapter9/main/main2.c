#include<stdio.h>
void alter(int*, int*);
int main(void)
{
	return 0;
}
void alter(int* rval, int* lval)
{
	int* temp;
	temp = rval;
	*rval = *temp + *lval;//两个变量之和。

	*lval = *temp - *lval;//两个变量之差。
}