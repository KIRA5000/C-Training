#include<stdio.h>
void fibo(int a,int b,int n)
{
if(n!=0)
{
	printf("%i ",a+b);
	fibo(b,a+b,--n);
}
}
int main()
{
	int n;
	printf("Enter a nume\n");
	scanf("%d",&n);
	printf("0 1 ");
	fibo(0,1,n-2);
	return 0;
}
