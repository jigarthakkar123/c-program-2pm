#include<stdio.h>
#include<conio.h>

void main()
{
	int a[5],i,j,temp,sum=0;
	clrscr();
	printf("\nEnter Array Element\n");
	for(i=0;i<5;i++)
	{
		printf("Enter %d Element : ",i);
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	printf("\nSum : %d",sum);
	printf("\nArray Elements Are\n");
	for(i=0;i<5;i++)
	{
		printf("\na[%d] = %d",i,a[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\nArray Elements Are In Asceding Order\n");
	for(i=0;i<5;i++)
	{
		printf("\na[%d] = %d",i,a[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\nArray Elements Are In Desceding Order\n");
	for(i=0;i<5;i++)
	{
		printf("\na[%d] = %d",i,a[i]);
	}
	getch();
}