#include<stdio.h>
int main()
{
	typedef enum day_week{sun,mon=0,tue,wed,thu,fri,sat} day_week;
	day_week day=wed;
	printf("%d\n",day);
	return 0;
}
