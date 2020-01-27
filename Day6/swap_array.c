#include<stdio.h>
void rev(int *arr,int size)
{
	int len=size/2;
	for(int i=0;i<len;i++)
	{
		int temp=arr[i];
		arr[i]=arr[size-i-1];
		arr[size-i-1]=temp;
	}
	printf("Your array is:\n");
	for(int i=0;i<size;i++)
	{
		printf("%i ",arr[i]);
	}
	printf("\n");
}
int main()
{
	int arr[10];
	char ch;
	int size=10;
	printf("Do you want an array of odd elemnts or even elements?\n");
	scanf("%c",&ch);
	if(ch=='o')
	{
		size=9;
		printf("Enter 9 elements\n");
	}
	else
	{
		printf("Enter 10 elemets\n");
	}
	for(int i=0;i<size;i++)
		scanf("%i",&arr[i]);
	rev(arr,size);
	return 0;
}
