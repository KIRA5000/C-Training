#include<stdio.h>
void len(char *str)
{
	int count=0;
	for(int i=0;str[i]!='\0';i++)
		count++;
	printf("Your string length is:%i\n",count);
}
int main()
{
	char str[100];
	printf("Please enter a string\n");
	scanf("%[^\n]s",str);
	len(str);
	return 0;
}
