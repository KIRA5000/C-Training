#include<stdio.h>
#include<stdlib.h>
#include<time.h>
struct point
{
	int x;
	int y;
};
int possible(int x1,int y1,int x2,int y2)
{
	int check=0;
	int x=x2-x1;
	int y=y2-y1;
	x%=3;
	y%=3;
	if(((x==0)&&(y==0))||((x==1)&&(y==2))||((x==2)&&(y==1)))
	{
		return check;
	}
	else
		return 1;
}
int main(void)
{
	struct point p1,p2;
	system("clear");
	printf("Rules of game are easy :)\n");
	printf("Either you can increatment your person by 2 on x coordinate or y coordinate\n");
	printf("If you increament your person by 2 from x then it will increament from y by 1\n");
	printf("Please enter first coordinate\n");
	printf("X:");
	scanf("%d",&p1.x);
	printf("Y:");
	scanf(" %d",&p1.y);
	printf("Please enter final coordinate\n");
        printf("X:");
        scanf(" %d",&p2.x);
        printf("Y:");
        scanf(" %d",&p2.y);
	time_t t0=time(0);
	int check=possible(p1.x,p1.y,p2.x,p2.y);
	time_t t1=time(0);
	if(check==0)
	{
		printf("It is possible :)\n");
	}
	else
	{
		printf("It is not possible :(\n");
	}
	double d=difftime(t1,t0);
	printf("You code ran in:%.10lf secs\n",d);
	return 0;
}
