#include<stdio.h>
int main()
{
	int i=0;
	signed char c;
	for(;i<256;i++)
	{
		c=i;
		printf("%c\n",c);
	}
	return 0;
}
