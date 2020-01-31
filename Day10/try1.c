#include<stdio.h>
int main()
{
	const int i=0;
	int *ptr =&i;
	//printf("%i\n",++i);
	printf("i --->%i\n",i);
	printf("++*ptr --->%i\n",++*ptr);
	printf("i --->%i\n",i);
	return 0;
}
