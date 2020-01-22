#include<stdio.h>
#include<stdlib.h>
void lrot(int *arr,int rot,int size)
{
	for(int i=0;i<rot;i++)
	{
		int a =arr[0];
		for(int j=0;j<size-1;j++)
		{
			arr[j]=arr[j+1];
		}
		arr[size-1]=a;
	}
}
int main(void)
{
	printf("Please enter the size of the array\n");
	int size;
	scanf("%i",&size);
	int *arr=(int*)malloc(size*sizeof(int));
	printf("Enter the elements of array\n");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	int rot;
	printf("Enter the amount of left rotation you want\n");
	scanf("%d",&rot);
	lrot(arr,rot,size);
	printf("Your rotated array is:\n");
	for(int i=0;i<size;i++)
	{
		printf("%i ",arr[i]);
	}
	printf("\n");
	return 0;
}
