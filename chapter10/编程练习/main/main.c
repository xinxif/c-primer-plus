#include"function.h"

int main(void)
{
	//第一题测试
	//rain();

	//第二题测试

	double source[5] = { 1.1,2.2,3.3,4.4,5.5 };
	double target1[5];
	double target2[5];
	double target3[5];
	copy_arr(source, target1, 5);

	copy_ptr(source, target2, 5);

	copy_ptrs(source, target3, target3 + 5);

	//第三题
	int arr[] = { 1,3,2,10,22,3,2,23,4,2,9 };
	int max = find_max(arr, arr + 11);
	printf("%d", max);
	
	//第四题
	unsigned int index = find_max_index(source, source + 5);
	printf("%u", index);

	//第五题
	double result = difference(source, source + 5);
	printf("%0.2f", result);

	return 0;

}