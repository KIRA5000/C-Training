#include<stdio.h>
struct demo
{
	int i;
	int j;
};
int main(void)
{
	struct demo obj={10};
	printf("%i\t%i\n",obj.i,obj.j);
	return 0;
}
