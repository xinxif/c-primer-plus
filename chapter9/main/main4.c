#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<Windows.h>
void menu(void);
int selection(int, int);

int main(void)//c.
{
	int selecit;
	while ((selecit=selection(4,1)))
	{

		switch (selecit)
		{
		case 1:
			printf("copy files\n");
			break;
		case 2:
			printf("move files\n");
			break;
		case 3:
			printf("remove files\n");
			break;
		case 4:
			printf("quit\nbye.\n");
			return 0;

		default:
			break;
		}
		system("pause");
		system("cls");
	}
	return 0;
}

void menu(void)//a.
{
	printf("Please choose one of the following:\n");
	printf("1) copy files\t\t2) move files\n");
	printf("3) remove files\t\t4) quit\n");
	printf("Ether your number of your choice:");
}

int selection(int max, int min)//b.
{
	int select;
	do
	{
		menu();
		scanf("%d", &select);
		while (getchar() != '\n')
			;
	} while (select<min||select>max);
	//printf("select = %d", select);
	return select;
}
