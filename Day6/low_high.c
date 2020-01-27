#include<stdio.h>
#include<limits.h>
int main()
{
	char min=CHAR_MAX;
	char max=CHAR_MIN;
	char name[100];
	printf("Please enter a string\n");
	scanf("%[^\n]s",name);
	for(int i=0;name[i]!='\0';i++)
	{
		if(min>name[i])
		{
			min=name[i];
		}
		if(max<name[i])
		{
			max=name[i];
		}
	}
	printf("Your max element is:%c and min element is:%c\n",max,min);
	return 0;
}
