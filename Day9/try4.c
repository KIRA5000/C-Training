#include<stdio.h>
int main()
{
	int arr[]={2,3};
	void *ptr=arr;
	ptr+=sizeof(int);
	printf("%i\n",*(int *)ptr);
}
