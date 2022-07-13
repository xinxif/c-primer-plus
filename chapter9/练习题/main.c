
#include"function.h"
#include<stdio.h>
int main(void)
{

	//9.5函数测试
	double x, y;
	x = 10.0;
	y = 5.5;
	larger_of(&x, &y);
	printf("x = %0.2f y = %0.2f\n", x, y);

	//9.7 函数测试
	//user_input();

	//9.8,9.9测试
	//test();

	//9.10函数测试
	to_base_n(8, 8);

	//9.11 函数测试
	putchar('\n');
	unsigned long sum = Fibonacci(3);
	printf("sum = %lu", sum);
	return 0;
}