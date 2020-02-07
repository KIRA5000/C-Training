#include<stdio.h>
#include<stdlib.h>
typedef struct demo
{
	int arr[100];
	int n;
}ptr;
int main(void)
{
	int n;
	ptr *demo=(ptr *)malloc(2*sizeof(ptr));
	for(int i=0;i<2;i++)
	{
		printf("Please enter size of array\n");
        	scanf("%d",&n);
		demo[i].n=n;
		printf("Enter elements of array\n");
		for(int j=0;j<demo[i].n;j++)
		{
			scanf("%d",&(demo[i].arr[j]));
		}
	}
	printf("Your elements which are divisible by 2 are:\n");
	for(int i=0;i<2;i++)
	{
		printf("In struct%i:",i+1);
		for(int j=0;j<demo[i].n;j++)
		{
			if(((demo[i].arr[j])%2)==0)
				printf("%d,",demo[i].arr[j]);
		}
		printf("\n");
	}
	return 0;
}
