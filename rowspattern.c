#include<stdio.h>
#include<conio.h>
void main()
{
	int n,c,k=2,j;
	printf("enter number of rows\n");
	scanf("%d",&n);
	for (c=1; j<=n; j++)
	{
		printf(" ");
	}
	k=k+2;
	for( c=1;c<=j; c++)
	{
		printf("\n");
	}
	getch();
}

