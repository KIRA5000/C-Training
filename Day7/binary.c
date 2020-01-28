#include<stdio.h>
void binary(int arr[],int low,int high,int no)
{
	if(low>high)
	{
		printf("Number does not exits\n");
	}
	else
	{
		int mid=(low+high)/2;
		if(arr[mid]>no)
			binary(arr,mid+1,high,no);
		else if(arr[mid]<no)
			binary(arr,low,mid-1,no);
		else
			printf("Number found at index:%i\n",mid);
	}
}
int main()
{
	int arr[100];
	int size;
	printf("Enter size of array\n");
	scanf("%i",&size);
	printf("Enter elements of array in ascending order\n");
	for(int i=0;i<size;i++)
	{
		scanf("%i",&arr[i]);
	}
	int no;
	printf("Enter elements you wanna search for\n");
	scanf("%i",&no);
	binary(arr,0,size-1,no);
	return 0;
}
