#include<stdint.h>
//12
void trots_1(double*ar, unsigned int n){}
//void trots_2(unsigned int, double ar[*]);	VS不支持的C特性

void clops_1(short ar[30], unsigned int n){}
//void clops_2(unsigned int,unsigned int,short ar[*][*]);

void shots_1(long ar[10][15], unsigned int n){}
//void shots_2(unsigned int,unsigned int ,unsigned int,long ar[*][*][*]);

//13

void show(const double ar[], int n){}
void show2(const double ar2[][3], int n){}


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

	//13
		
		show((int []){ 8,3,9,2}, 4);
		show2((int[][3]){ 8,3,9,5,4,1 },2);
	return 0;
}