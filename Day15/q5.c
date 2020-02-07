#include<stdio.h>
#include<stdlib.h>
typedef struct demo
{
        char name[100];
        int id;
}ptr;
int main(void)
{
        int n;
	printf("Enter number of student details you wanna enter\n");
	scanf("%i",&n);
        ptr *demo=(ptr *)malloc(n*sizeof(ptr));
        for(int i=0;i<n;i++)
        {
                printf("Please enter name\n");
                scanf(" %[^\n]s",demo[i].name);
                printf("Please enter id\n");
                scanf("%d",&demo[i].id);
        }
        printf("Names whose id is divisible by 2 are:\n");
        for(int i=0;i<n;i++)
        {
                if((demo[i].id)%2==0)
			printf("%s\n",demo[i].name);
        }
        return 0;
}

