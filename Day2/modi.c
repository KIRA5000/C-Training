#include<stdio.h>
void main()
{
	const int i=0;
	int const t=0;
	int *ptr =&i;
	*ptr=10;
	printf("%d %d\n",i,t);
}
