#include<stdio.h>
int main()
{
	int a[]={1,2,3};
	int *ptr1=a;
	int *ptr2=&a[1];
	printf("%ld\n",ptr2-ptr1);
	return 0;
}
