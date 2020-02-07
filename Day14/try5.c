#include<stdio.h>
struct point
{
	int a,b,c;
};
int main()
{
struct point p={.b=0,.c=1,.a=3};
printf("%d %d %d\n",p.a,p.b,p.c);
return 0;
}
