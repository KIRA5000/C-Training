#include<stdio.h>
void genric(int no)
{
	int sum=10;
	int i=0;
	while(sum>=10)
	{
		if(i==0)
		{
			sum=0;
			i++;
		}
		sum=0;
		while(no>0)
		{
			int t=no%10;
			sum+=t;
			no/=10;
		}
		no=sum;
	}
	printf("Your generic root is:%i\n",sum);
}
int main()
{
	int no;
	printf("Please enter a number\n");
	scanf("%i",&no);
	genric(no);
	return 0;
}
