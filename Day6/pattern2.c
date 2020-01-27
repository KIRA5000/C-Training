#include<stdio.h>
void pattern(int n)
{
	int k=1;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			printf(" ");
		}
		for(int j=0;j<=i;j++)
		{
			if((i&1)==0)
			{
				printf("* ");
				k++;
			}
			else
			{
				printf("%i ",k++);
			}
		}
		printf("\n");
	}
}
int main()
{
	int no;
	printf("Enter number of rows\n");
	scanf("%i",&no);
	pattern(no);
	return 0;
}
