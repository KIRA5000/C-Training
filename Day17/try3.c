#include<stdio.h>
#pragma pack(1)
struct demo
{
	int i;
	char ch;
}obj;
int main()
{
	printf("%d\n",__WORDSIZE);
	printf("%ld\n",sizeof(obj));
	return 0;
}
