#include<stdio.h>
struct demo
{
	int i;
	union
	{
		int j;
		float f;
	};
}d;
int main()
{
d.i=4;
d.j=1;
printf("%i %i %f",d.i,d.j,d.f);
return 0;
}
