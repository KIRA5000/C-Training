#include<stdio.h>
#include<unistd.h>
int main()
{
	int arr[100];
	int size;
	printf("Enter size of array\n");
	scanf("%i",&size);
	printf("Enter elements of array\n");
	for(int i=0;i<size;i++)
	{
		scanf("%i",&arr[i]);
	}
	printf("Now performing sorting, Please wait :)...\n");
	int t=1;
	while(t!=0)
	{
		t=0;
		for(int i=0;i<size-1;i++)
		{
			if(arr[i]>arr[i+1])
			{
				t++;
				int temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
		}
	}
	sleep(3);
	printf("Your sorted array is:\n");
	for(int i=0;i<size;i++)
	{
		printf("%i ",arr[i]);
	}
	printf("\n");
	return 0;
}
