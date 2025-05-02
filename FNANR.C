#include<stdio.h>
#include<conio.h>


void printLine();
void main()
{
	clrscr();
	printLine();
	printf("Welcome To User Defined Function\n");
	printLine();
	getch();
}
void printLine()
{
	for(int i=0;i<50;i++)
	{
		printf("*");
	}
	printf("\n");
}