#include<stdio.h>
void __attribute__((constructor)) fun1()
{
	printf("Fun1\n");
}
void __attribute__((destructor)) fun2()
{
	printf("Fun2\n");
}
int main()
{
	printf("Main\n");
	return 0;
}
