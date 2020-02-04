#include<stdio.h>
int main()
{
	int num=10;
	int ******ptr=&num;
	printf("%d\n",*ptr);
	return 0;
}
