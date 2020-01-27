#include<stdio.h>
void linear(int *arr,int size,int no)
{
	int status=1;
	for(int i=0;i<size;i++)
	{
		if(arr[i]==no)
		{
			status=0;
			printf("Element found at index:%i\n",i);
			break;
		}
	}
	if(status==1)
	{
		printf("Element not found\n");
	}
}
int main()
{
	int arr[100];
	int size=0;
	printf("Enter size of the array\n");
	scanf("%i",&size);
	printf("Enter elements of the array\n");
	for(int i=0;i<size;i++)
		scanf("%i",&arr[i]);
	printf("Enter element you want to find\n");
	int no;
	scanf("%i",&no);
	linear(arr,size,no);
	return 0;
}
