#include<stdio.h>
void check(int i,int no=1)
{
	if(i==no)
		printf("True\n");
	else
		printf("False\n");
}
int main(void)
{
	int i=1;
	int no;
	check(i,no);
	return 0;
}
