#include<stdio.h>
int main()
{
	int a=65;
	void *ptr =&a;
	printf("%i\n",*(int *)ptr);
	printf("%c\n",*(char *)ptr);
	return 0;
}
