#include<stdio.h>
void ana(int a,int b)
{
	int status=1;
	int arr[]={0,0,0,0,0,0,0,0,0,0};
	while(a!=0)
	{
		int t=a%10;
		arr[t]++;
		a/=10;
	}
	while(b!=0)
	{
		int t=b%10;
		arr[t]--;
		b/=10;
	}
	for(int i=0;i<10;i++)
	{
		if(arr[i]!=0)
		{
			status=0;
			break;
		}
	}
	if(status==1)
	{
		printf("The number is anagram\n");
	}
	else
	{
		printf("The number is not an anagram\n");
	}
}
int main()
{
	int a,b;
	printf("Please enter two number:\n");
	scanf("%i",&a);
	scanf("%i",&b);
	ana(a,b);
	return 0;
}
