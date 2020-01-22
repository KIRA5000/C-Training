#include<stdio.h>
#include<string.h>
int main(void)
{
	char str1[100];
	char str2[100];
	printf("Please enter two string:\n");
	scanf("%[^\n]s",str1);
	scanf(" %[^\n]s",str2);
	for(int i=0;i<strlen(str1);i++)
		str1[i]=(str1[i]>='A'&&str1[i]<='Z')?str1[i]+'a'-'A':str1[i];
	for(int i=0;i<strlen(str2);i++)
                str2[i]=(str2[i]>='A'&&str2[i]<='Z')?str2[i]+'a'-'A':str2[i];
	char *ptr;
	ptr=strpbrk(str1,str2);
	printf("The first character that intersect is:%c\n",*ptr);
	return 0;
}
