#include<stdio.h>
struct demo
{
	int i,j;
};
int main(void)
{
	struct demo obj={.j=10};
	printf("%i\t%i\n",obj.i,obj.j);
	return 0;
}
