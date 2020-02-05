#include<stdio.h>
#include<stdlib.h>
int main()
{
	char *str=(char *)malloc(1);
	char s;
	printf("Enter you string\n");
	scanf("%c",&s);
	int choice=s;
	int t=1;
	int i=0;
	while(choice!=10)
	{
		str=(char*)realloc(str,t+1);
		t++;
		str[i++]=s;
		scanf("%c",&s);
		choice=s;
	}
	t--;
	for(int i=t;i>=0;i--)
	{
		printf("%c",str[i]);
	}
	printf("\n");
	free(str);
	return 0;
}
