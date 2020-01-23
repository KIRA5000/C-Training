#include<stdio.h>
void check(int no)
{
	int n,sum=1;
	n=no;
	for(int i=2;i<no;i++)
	{
		if(n%i==0)
		{
			sum+=i;
		}
	}
	if(sum==no)
		printf("It's a perfect number\n");
	else
		printf("It's not a perfect number\n");
}
int main()
{
	int no;
	printf("Please enter the number that you want to check for perfect number\n");
	scanf("%i",&no);
	check(no);
	return 0;
}
