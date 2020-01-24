#include<stdio.h>
void cat(char *str1,char *str2)
{
	int i=0,j;
	while(str1[++i]);
	for(j=0;str2[j]+1;j++)
	{
		str1[i++]=str2[j];
	}
	str2[j]='\0';
	printf("Your concatinated string is:%s\n",str1);
}
int main()
{
	char str1[100],str2[100];
	printf("Please enter two strings that you want to concatinate\n");
	scanf("%[^\n]s",str1);
	scanf(" %[^\n]s",str2);
	cat(str1,str2);
}
