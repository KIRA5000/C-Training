#include<stdio.h>
int right(char str[],char ch)
{
	int i=0;
	while(str[i++]);
	for(;i>=0;i--)
	{
		if(str[i]==ch)
		{
			return i;
		}
	}
	return -1;
}
int main()
{
	char str[100];
	printf("Please enter a string\n");
	scanf("%[^\n]s",str);
	printf("Enter char whose rightmost index you wanna find\n");
	char ch;
	scanf(" %c",&ch);
	int i=right(str,ch);
	if(i!=-1)
	{
		printf("Your index is:%i\n",i);
	}
	else
		printf("Character is not found\n");
	return 0;
}
