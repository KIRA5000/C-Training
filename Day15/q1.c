#include<stdio.h>
struct demo
{
	char ch;
	int a;
	float f;
	double d;
}demo[5];
int main()
{
	for(int i=0;i<5;i++)
	{
	printf("Enter a character\n");
	scanf(" %c",&demo[i].ch);
	printf("Enter an integer\n");
	scanf("%i",&demo[i].a);
	printf("Enter an float\n");
        scanf("%f",&demo[i].f);
	printf("Enter an double\n");
        scanf("%lf",&demo[i].d);
	}
	for(int i=0;i<5;i++)
	printf("Your elements are:\n Character:%c\n Integer:%i\n Float:%.10f\n Double:%.10lf\n",demo[i].ch,demo[i].a,demo[i].f,demo[i].d);
	return 0;
}
