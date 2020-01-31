#include<stdio.h>
int main()
{
	int i=10;
	void *f=&i;
	printf("%f\n",(float)i);
	printf("%f\n",*(float *)(f));
	return 0;
}
