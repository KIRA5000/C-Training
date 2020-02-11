#include<stdio.h>
struct demo
{
	char ch1,ch2;
	int i;
}dobj;
int main()
{
	printf("%ld\n",sizeof(dobj));
	return 0;
}
