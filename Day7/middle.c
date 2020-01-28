#include<stdio.h>
void sort(int arr[][100],int n)
{
	int l=n/2;
	for(int i=0;i<n;i++)
	{
		int min=arr[l][i];
		int loc=i;
		for(int j=i+1;j<n;j++)
		{
			if(min>arr[l][j])
			{
				loc=j;
				min=arr[l][j];
			}
		}
		int temp=arr[l][i];
		arr[l][i]=arr[l][loc];
		arr[l][loc]=temp;
	}
	printf("Your sorted array is:\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%i ",arr[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int arr[100][100];
	int size;
	printf("Enter size of the array\n");
	scanf("%d",&size);
	printf("Enter size of your array\n");
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
			scanf("%i",&arr[i][j]);
		}
	}
	sort(arr,size);
	return 0;
}
