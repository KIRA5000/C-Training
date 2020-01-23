#include<stdio.h>
void check(int no1,int no2)
{
	int i;
	int j;
	int t=(no1>no2)?no2:no1;
	int lcm,gcd;
	for(i=t;i>=1;i--)
	{
		if((no1%i==0)&&(no2%i==0))
		{
			gcd=i;
			break;
		}
	}
	int k=(no1>no2)?no1:no2;
	for(j=k;j<(no1*no2);j++)
	{
		if((j%no1==0)&&(j%no2==0))
		{
			lcm=j;
			break;
		}
	}
	printf("LCM of both numbers are:%i\n",lcm);
	printf("GCD of both numbers are:%i\n",gcd);
}
int main()
{
	int a,b;
	printf("Please enter two number:\n");
	scanf("%i",&a);
	scanf("%i",&b);
	check(a,b);
	return 0;
}
