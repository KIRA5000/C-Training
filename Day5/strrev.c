#include<stdio.h>
void rev(char *name)
{
	char rev[100];
	int count=0;
	for(int i=0;name[i]!='\0';i++)
		count++;
	for(int i=count-1;i>=0;i--)
	{
		rev[count-i-1]=name[i];
	}
	rev[count]='\0';
	printf("Your reverse string is:%s\n",rev);
}
int main()
{
	char name[100];
	printf("Please enter a string you want to reverse\n");
	scanf("%[^\n]s",name);
	rev(name);
	return 0;
}
