#include<stdio.h>
int find_max(int, int, int);
int main(void)
{
	//测试
	int max = find_max(31,6,3);
	printf("%d", max);
	return 0;
}
int find_max(int num1, int num2, int num3)
{
	return ((num1 > num2) ? ((num1 > num3) ? num1 : num3) :(( num2 > num3 )? num2 : num3));
}