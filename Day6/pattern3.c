#include<stdio.h>
void pattern(int n)
{
	int t=2*n-1;
	int s=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<s;j++)
		{
			printf(" ");
		}
		for(int j=0;j<t;j++)
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
		t-=2;
		s+=2;
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
