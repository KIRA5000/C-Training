#include<stdio.h>
void num(int no)
{
	int t=1;
	for(int i=0;i<no;i++)
	{
		for(int j=no;j>i;j--)
		{
			printf(" ");
		}
		for(int j=0;j<=i;j++)
		{
			if(t==10)
			{
				t=0;
			}
			printf("%i",t++);
		}
		printf("\n");
	}
}
