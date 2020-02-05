#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	printf("Please enter size of arr\n");
	scanf("%d",&n);
	int ***a=(int***)malloc(n*sizeof(int**));
	for(int i=0;i<n;i++)
	{
		*a[i]=(int**)malloc(n*sizeof(int *));
		for(int j=0;j<n;j++)
		{
			a[i][j]=(int*)malloc(n*sizeof(int));
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			for(int k=0;k<n;k++)
			{
				scanf("%d",&a[i][j][k]);
			}
		}
	}
	printf("Your array is:\n");
	for(int i=0;i<n;i++)
        {
                for(int j=0;j<n;j++)
                {
                        for(int k=0;k<n;k++)
                        {
                                printf("%d ",a[i][j][k]);
                        }
                }
        }
	return 0;
}
