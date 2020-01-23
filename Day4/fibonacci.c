#include<stdio.h>
void fibo(int no)
{
	int a=0;
	int b=1;
	printf("0 1 ");
	for(int i=0;i<no-2;i++)
	{
		int temp=b;
		b+=a;
		printf("%i ",b);
		a=temp;
	}
}
int main()
{
int no;
printf("Please enter the number;\n");
scanf("%i",&no);
fibo(no);
return 0;
}
