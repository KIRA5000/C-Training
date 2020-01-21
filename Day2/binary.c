#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(void)
{
	int n;
	printf("Enter a number whose binary you need to find:\n");
	scanf("%i",&n);
	int rev=0;
	int i=0;
	while(n>0)
	{
		rev+=(n%2)*pow(10,i++);
		n/=2;
	}
	printf("The binary representation of your number is: %i",rev);
	return 0;
}
