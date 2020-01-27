#include<stdio.h>
void binary(int *arr,int size,int no)
{
	int low=0;
	int status=0;
	int high=size-1;
	int mid;
	while(low<high)
	{
		mid=(low+high)/2;
		if(arr[mid]<no)
		{
			low=mid+1;
		}
		else if(arr[mid]>no)
		{
			high=mid-1;
		}
		else if(arr[mid]==no)
		{
			status=1;
			break;
		}
	}
	if(status==1)
	{
		printf("Element found at location:%i\n",mid);
	}
	else
	{
		printf("Element not found\n");
	}

}
int main()
{
	int arr[100];
	int size;
	printf("Enter size of arr(>=100)\n");
	scanf("%i",&size);
	printf("Enter elements of array(In ascending order)\n");
	for(int i=0;i<size;i++)
		scanf("%i",&arr[i]);
	int no;
	printf("Enter element you want to find");
	scanf("%i",&no);
	binary(arr,size,no);
	return 0;
}
