#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *arr=(int*)calloc(0,2*sizeof(int));
	int i=0;
	arr[i]=++i;
	for(int j=0;j<2;j++)
	{
		printf("%i ",arr[j]);
	}
	printf("\n");
}
