#include<stdio.h>
void alter(int arr[][100],int n,int t,int i)
{
	if(i==(n));
	else
	{
		while(t<n)
		{
			printf("%i\n",arr[i][t]);
			t+=2;
		}
		alter(arr,n,t%n,++i);
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
	printf("Your alternate elements are;\n");
        alter(arr,size,0,0);
        return 0;
}

