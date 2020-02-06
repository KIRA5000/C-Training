#include<stdio.h>
int main(void)
{
	int c;
	char *ct="Hello world!";
	printf("Hello all\n");
	printf("%s%n\n",ct,&c);
	printf("%d\n",c);
	return 0;
}
