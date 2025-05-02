#include<stdio.h>
#include<conio.h>

void main()
{
	int a[3][3],i,j,sum=0;;
	clrscr();
	printf("\nEnter 2 D Array\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter %d Row & %d Column : ",i,j);
			scanf("%d",&a[i][j]);
			sum=sum+a[i][j];
		}
	}
	printf("\nSum : %d",sum);
	printf("\n2 D Array Is\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\na[%d][%d] = %d",i,j,a[i][j]);
		}
	}
	getch();
}