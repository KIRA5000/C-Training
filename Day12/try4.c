#include<stdio.h>
int main()
{
	char *str="My name is Barry Allen";
	void *vptr=&str;
	printf("%s",*(char **)vptr);
	return 0;
}
