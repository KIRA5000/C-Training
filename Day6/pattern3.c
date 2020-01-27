#include<stdio.h>
void pattern(int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			printf(" ");
		}
		for(int j=0;j<n-i;j++)
		{
			if((i&1)==0)
			{
				printf("$ ");
			}
			else
			{
				printf("* ");
			}
		}
		printf("\n");
	}
}
int main()
{
	int no;
	printf("Enter no of rows\n");
	scanf("%i",&no);
	pattern(no);
	return 0;
}
