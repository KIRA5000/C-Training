#include<stdio.h>
int count(char str[],int i,int c)
{
	if(str[i]!='\0')
	{
		c=count(str,++i,++c);
	}
	return c;
}
int main()
{
	char str[100];
	printf("Enter a string\n");
	scanf("%[^\n]s",str);
	int c=count(str,0,0);
	printf("Number of characters are:%i\n",c);
	return 0;
}
