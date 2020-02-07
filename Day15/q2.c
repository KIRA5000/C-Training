#include<stdio.h>
#include<stdlib.h>
struct student
{
        char name[50];
        int id;
        float percent;
};
int main()
{
	int n;
	printf("Enter how much info you need to store\n");
	scanf("%d",&n);
	struct student *demo=(struct student *)malloc(n*sizeof(struct student));
	for(int i=0;i<n;i++)
	{
        printf("Enter your name\n");
        scanf(" %[^\n]s ",demo[i].name);
        printf("Enter your id\n");
        scanf(" %d",&demo[i].id);
        printf("Enter your percentage\n");
        scanf(" %f",&demo[i].percent);
	}
	for(int i=0;i<n;i++)
        printf("Your details are:\n Name:%s\n Id:%i\n Percentage:%.10f\n",demo[i].name,demo[i].id,demo[i].percent);
        return 0;
} 
