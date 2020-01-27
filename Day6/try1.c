#include<stdio.h>
int main()
{
	int sum(int,int);
	int a,b;
	printf("Enter two numbers whose sum you want to find:\n");
	scanf("%d",&a);
	scanf("%d",&b);
	int s=sum(a,b);
	printf("%d\n",s);
	return 0;
}
int sum(int a,int b)
{
	return a+b;
}
