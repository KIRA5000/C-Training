#include<stdio.h>
void arm()
{
	int n;
	for(int i=1;i<=1000;i++)
	{
		int no=i;
		int sum=0;
		while(no!=0)
		{
			int t=no%10;
			int pow=1;
			for(int i=0;i<3;i++)
			{
				pow*=t;
			}
			sum+=pow;
			no/=10;
		}
		if(sum==i)
			printf("%i\n",i);
	}
}
int main()
{
	
	printf("These are all the armstrong number form 1 to 1000\n");
	arm();
	return 0;
}
