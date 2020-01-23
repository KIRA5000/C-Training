#include<stdio.h>
void star(int no)
{
	for(int i=0;i<no;i++)
	{
		for(int j=no;j>i;j--)
		{
			printf(" ");
		}
		for(int k=0;k<=i;k++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
