#include<stdio.h>
void sum(int arr[][100],int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(j<i)
				sum+=arr[i][j];
		}
	}
	printf("Your sum is:%i\n",sum);
}
int main()
{
	int arr[100][100];
	int size;
	printf("Enter size of array\n");
	scanf("%i",&size);
	printf("Enter elements in 2D array\n");
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
			scanf("%i",&arr[i][j]);
		}
	}
	sum(arr,size);
	return 0;
}
