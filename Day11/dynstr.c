#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char *str=(char *)malloc(2);
	int i=0;
	int t=2;
	char s;
	printf("Enter a string\n");
	scanf("%c",&s);
	int check=0;
	while(check!=10)
	{
		str=(char *)realloc(str,(t+1));
		printf("%p\n",str);
		str[i++]=s;
		scanf("%c",&s);
		t++;
		check=s;
	}
	printf("Your string size is:%ld\n",strlen(str));
	printf("Your string is:%s\n",str);
	return 0;
}
