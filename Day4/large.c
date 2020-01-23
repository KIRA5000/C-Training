#include<stdio.h>
void large(int no)
{
	int arr[]={0,0,0,0,0,0,0,0,0,0};
	while(no!=0)
	{
		int t=no%10;
		arr[t]++;
		no/=10;
	}
	int count=0;
	for(int i=9;i>=0;i--)
	{
		if(arr[i]!=0)
		{
			count++;
			if(count==3)
			{
				printf("Your third largest number is:%i\n",i);
				break;
			}
		}
	}
}
int main()
{
	int no;
	printf("Please enter a number\n");
	scanf("%i",&no);
	large(no);
	return 0;
}
