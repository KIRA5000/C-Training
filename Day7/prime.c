#include<stdio.h>
void prime(int n,int a)
{
	if(n>=a)
	{
		int flag =0;
		for(int i=2;i<a;i++)
		{
			if(a%i==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			printf("%i\n",a);
		}
		prime(n,++a);
	}
}
int main()
{
	int a;
	printf("Enter a number(Greater than 1)\n");
	scanf("%i",&a);
	prime(a,2);
	return 0;
}
