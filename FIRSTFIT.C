#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[500],block[10],n,value,k,b,a;
	clrscr();
	printf("Enter the size of memory : (max = 500)\n");
	scanf("%d",&n);
	printf("Enter the no. of blocks\n");
	scanf("%d",&b);
	for(k=0;k<b;k++)
	{
		printf("Enter the size of block %d\n",k+1);
		scanf("%d",&block[k]);
	}
	for(k=0;k<b;k++)
	{
	printf("Enter the value\n");
	scanf("%d",&value);
	if(value <= block[k])
		{
			block[k]=block[k]-value;
		}
	}
	for(k=0;k<b;k++)
	{
	printf("fragmntation of block %d %d\n",k+1,block[k]);
	}
	getch();
}
