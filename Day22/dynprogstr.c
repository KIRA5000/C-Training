#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char *str1=(char *)malloc(50*sizeof(char));
	char *str2=(char *)malloc(50*sizeof(char));
	printf("Enter two strings:\n");
	scanf("%s",str1);
	scanf(" %s",str2);
	int m=strlen(str1)+1;
	int n=strlen(str2)+1;
	int **arr=(int **)calloc(m,sizeof(int *));
	for(int i=0;i<m;i++)
	{
		arr[i]=(int *)calloc(n,sizeof(int));
	}
	int max=0;
	int loc=0,loc1=0,loc2=0;
	for(int i=0;i<m-1;i++)
	{
		for(int j=0;j<n-1;j++)
		{
			if(str1[i]==str2[j])
			{
				arr[i+1][j+1]=arr[i][j]+1;
				if(arr[i+1][j+1]>max)
				{
					max=arr[i+1][j+1];
					loc1=i+1;
					loc2=j+1;
				}
			}
		}
	}
	/*for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}*/
	printf("Your string's max length is:%d\n",max);
	printf("Your string is:");
	while(arr[loc1--][loc2--]!=0);
	loc1++;
	loc2++;
	while(arr[loc1++][loc2]!=max)
	{
		printf("%c",str2[loc2++]);
	}
	printf("\n");
	return 0;
}
