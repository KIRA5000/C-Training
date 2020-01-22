#include<stdio.h>
#include<string.h>
int main(void)
{
	char str1[100];
	char str2[100];
	printf("Enter two strings\n");
	scanf("%[^\n]s",str1);
	scanf(" %[^\n]s",str2);
	for(int i=0;i<strlen(str1);i++)
		str1[i]=(str1[i]>='A'&&str1[i]<='Z')?str1[i]+'a'-'A':str1[i];
	for(int i=0;i<strlen(str2);i++)
                str2[i]=(str2[i]>='A'&&str2[i]<='Z')?str2[i]+'a'-'A':str2[i];
	for(int i=0;i<strlen(str1);i++)
	{
		for(int j=0;j<strlen(str2);j++)
		{
			if(str1[i]==str2[j])
			{
				for(int k=i;k<strlen(str1);k++)
				{
					str1[k]=str1[k+1];
				}
			}
		}
	}
	printf("%s",str1);
}
