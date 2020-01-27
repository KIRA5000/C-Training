#include<stdio.h>
void add(int arr1[][100],int arr2[][100],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			arr1[i][j]+=arr2[i][j];
		}
	}
	printf("Your matrix sum is:\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%i ",arr1[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int arr1[100][100];
	int arr2[100][100];
	printf("Enter size of matrix\n");
	int n;
	scanf("%i",&n);
	printf("Enter elements in matrix1\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%i",&arr1[i][j]);
		}
	}
	printf("Enter elements in matrix2\n");
        for(int i=0;i<n;i++)
        {
                for(int j=0;j<n;j++)
                {
                        scanf("%i",&arr2[i][j]);
                }
        }

	add(arr1,arr2,n);
	return 0;
}
