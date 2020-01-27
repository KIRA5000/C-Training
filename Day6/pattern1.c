#include<stdio.h>
void pattern(int no)
{
	int k=1;
	for(int i=0;i<no;i++)
	{
		for(int j=0;j<=i;j++)
		{
			printf("%i ",k);
			k=k+2;
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
