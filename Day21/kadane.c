#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int size;
	printf("Enter size of array\n");
	scanf("%d",&size);
	printf("Enter elements in you array\n");
	int *arr=(int *)malloc(size*4);
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Let's find out max subarray using Kadane's algo:\n");
	int mx=arr[0];
	int max=0;
	for(int i=1;i<size;i++)
	{
		mx=((mx+arr[i])>arr[i])?(mx+arr[i]):arr[i];
		if(max<mx)
			max=mx;
	}
	printf("Your max sum is:%d\n",max);
	return 0;
}
