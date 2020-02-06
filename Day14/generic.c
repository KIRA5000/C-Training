#include<stdio.h>
#define ptr(x) _Generic(x,char: 'A',int: 7)
int main()
{
	char c;
	printf("%c",ptr(c));
	int a;
	printf("%d",ptr(a));

	return 0;
}
