#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int n;
	printf("Enter number of String you want to enter\n");
	scanf("%d",&n);
	char **str=(char **)malloc(n*sizeof(char *));
	for(int i=0;i<n;i++)
	{
		str[i]=(char *)malloc(1);
		int k=0;
		int t=1;
		char s;
		printf("Enter a string\n");
		scanf(" %c",&s);
		int check=s;
		while(check!=10)
		{
			str[i]=(char *)realloc(str[i],(t+1));
			str[i][k++]=s;
			scanf("%c",&s);
			t++;
			check=s;
		}
		str[i][t]='\0';
	}
	for(int i=0;i<n;i++)
	printf("Your string %i is:%s\n",i+1,str[i]);
	free(str);
	return 0;
}
