#include<stdio.h>
#include<stdlib.h>
void enter(int **arr,int row,int col)
{
	printf("Enter the elements of array\n");
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			scanf("%d",(*(arr+i)+j));
		}
	}
}
void print(int **arr,int row,int col)
{
	printf("Your elements are given below:\n");
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			char ch[3];
			sprintf(ch,"%d%d",i,j);
			printf("Your element %s is %i\n",ch,arr[i][j]);
		}
	}
}
int main()
{
	int **arr;
	printf("Enter number of rows you want in your 2D array\n");
	int row;
	scanf("%d",&row);
	int col;
	printf("Enter number of collumns you want in your 2D array\n");
	scanf("%d",&col);
	arr=(int **)malloc(row*sizeof(int *));
	for(int i=0;i<row;i++)
	{
		arr[i]=(int *)malloc(col*sizeof(int));
	}
	enter(arr,row,col);
	print(arr,row,col);
	free(arr);
	return 0;
}
