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
        for(int i=0;i<size;i++)
        {
		int min=arr[i];
		int loc=i;
		for(int j=i+1;j<size;j++)
		{
			if(arr[j]<min)
			{
				min=arr[j];
				loc=j;
			}
		}
		int temp=arr[i];
		arr[i]=arr[loc];
		arr[loc]=temp;
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

