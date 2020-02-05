#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char *str=(char *)malloc(1);
	int i=0;
	int t=1;
	char s;
	printf("Enter a string\n");
	scanf("%c",&s);
	int check=s;
	while(check!=10)
	{
		str=(char *)realloc(str,(t+1));
		str[i++]=s;
		scanf("%c",&s);
		t++;
		check=s;
	}
	printf("Your string size is:%i\n",t);
	printf("Your string is:%s\n",str);
	free(str);
	return 0;
}
