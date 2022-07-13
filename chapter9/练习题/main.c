
#include"function.h"
#include<stdio.h>

double min(double, double);

double harmonic_mean(double, double);

unsigned long Fibonacci(unsigned int n);
int main(void)
{


	//9.1函数测试
	double result = min(3.0, 2.4);
	printf("%0.2f\n", result);


	//9.2函数测试
	chline('*', 2, 5);

	//9.3函数测试
	print_char('9', 2, 5);
	
	//9.4函数测试
	//result = harmonic_mean(3.0, -2.0);
	printf("%0.2f\n", result);

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