#include<stdio.h>
void binary(int no)
{
	int n=no;
	int binary=0;
	int i=0;
	while(n>0)
	{
		int t=n%2;
		int pow=1;
		if(i>0)
		{
			for(int j=0;j<i;j++)
			{
				pow*=10;
			}
		}
		binary+=t*pow;
		i++;
		n/=2;
	}
	printf("Your binary representation is: %i\n",binary);
}
int main()
{
	int no;
	printf("Please enter a number\n");
	scanf("%i",&no);
	binary(no);
	return 0;
}
