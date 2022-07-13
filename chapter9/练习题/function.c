
#include"function.h"
#include<stdio.h>

//9.1
double min(double x, double y)
{
	double val = ((x < y) ? x : y);
	printf("min func %0.2f\n", val);
	return val;//((x > y) ? x : y);
}
//9.2
void chline(char ch, unsigned int i, unsigned int j)
{
	unsigned int line, row;
	for (line = 0U; line < i; ++line)
	{
		for (row = 0U; row < j; ++row)
		{
			putchar(ch);
		}
		putchar('\n');
	}
}
//9.3
void print_char(char ch, unsigned int i, unsigned int j)
{
	unsigned int line, row;
	for (row = 0U; row < j; ++row)
	{
		for (line = 0U; line < i; ++line)
		{
			putchar(ch);
		}
		putchar('\n');
	}
}
//9.4
double harmonic_mean(double x, double y)
{
	x = -x;
	y = -y;
	return ((x + y) / 2);
}

//9.5
void larger_of(double* x, double* y)
{
	double temp = ((*x > *y) ? *x : *y);
	*x = *y = temp;
	//printf("%0.2f %0.2f %0.2f\n", *x, *y, *temp);
}

//9.6
void sort_val(double* x, double* y, double* z)
{
	//不会
}

//9.7
void user_input()
{
	char charater;
	do
	{
		charater = getchar();
		alphabet(charater);
	} while (charater!=EOF);
}
int alphabet(char ch)
{
	int i;
	if (ch >= 65 && ch <= 90)
	{
		i = ch - 64;
		printf("Is a character %-4d",i);
	}
	else if(ch>=97&&ch<=122)
	{
		i = ch - 96;
		printf("Is a character %-4d", i);
	}
	else
	{
		i = -1;
	}
	return i;
}


double power3(double n, int p);

			//n的p次mi
double power2(double n, int p)
{
	double statistics = 1.0;
	if (n == 0.0)
	{
		return 0.0;
	}
	else if (p == 0)
	{
		return 1.0;
	}
	for (int i = 0; i < p; ++i)
	{
		statistics *= n;
	}
	return statistics;
}

void test()
{
	double x, xpow;
	int exp;
	printf("Ether a number and the positive integer power");
	printf(" to which\nthe number will be raised. Ehter q");
	printf(" to quit.\n");
	while (scanf_s("%lf%d",&x,&exp)==2)
	{
		xpow = power3(x, exp);
		printf("%.3g to the power %d is %0.5g\n", x, exp, xpow);
		printf("Ether next pair od number or q to qiut.\n");

	}
	printf("Hope you enjoyed this power trip -- bye!\n");
}

//9.8 递归版本
double power3(double n, int p)
{
	double statistics = 1.0;
	if (n == 0.0)
	{
		return 0.0;
	}
	else if (p == 0)
	{
		return 1.0;
	}
	if (p > 0)
	{
		statistics *= power3(n, p - 1);
	}
	return statistics*n;
}

//9.10
void to_base_n(unsigned long number, int base)
{
	int r;

	r = number % base;
	if (number >= base)
		to_base_n(number / base, base);
	printf("%d", r);
}

//9.11
unsigned long Fibonacci(unsigned int n)
{
	unsigned long a = 1, b = 1, i;

	for (i = 2; i <= n; i++)   
	{
		b = a - b;            
		a += b;           
	}
	return a;
}