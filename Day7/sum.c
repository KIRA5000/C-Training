#include<stdio.h>
int sum(int n)
{
	if(n<10)
		return n;
	else
	{
		int s=n%10;
		return s+sum(n/10);
	}
}
int main()
{
	int no;
	printf("Enter a number:\n");
	scanf("%i",&no);
	int s=sum(no);
	printf("Your sum of number is:%i\n",s);
	return 0;
}
