#include<stdint.h>

void trots_1(double*, unsigned int);
//void trots_2(unsigned int, double ar[*]);	VS不支持的C特性

void clops_1(short[30], unsigned int);
//void clops_2(unsigned int,unsigned int,short ar[*][*]);

void shots_1(long[10][15], unsigned int);
//void shots_2(unsigned int,unsigned int ,unsigned int,long ar[*][*][*]);


int main(void)
{
	//12
		double trots[20];
		trots_1(trots, 20);
		//trots_2(20,trots);

		short clops[10][30];
		clops_1(clops, 10);
		//clops_2(10,30,clops);

		long shots[5][10][15];
		shots_1(shots, 5);
		//shots_2(5,10,15,shots);


	return 0;
}