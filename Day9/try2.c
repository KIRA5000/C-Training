#include<stdio.h>
int main()
{
	int no=514;
	char *ptr=&no;
	printf("%c\n",*ptr);
	printf("%c\n",*(ptr+1));
	printf("%c\n",*(ptr+2));
	printf("%c\n",*(ptr+3));
	return 0;
}
