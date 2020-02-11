#include<stdio.h>
struct __attribute__((__packed__)) demo
{
	int i;
	char ch;
}obj;
int main()
{
	printf("%ld\n",sizeof(obj));
	return 0;
}
