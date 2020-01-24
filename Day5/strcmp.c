#include<stdio.h>
void cmp(char *str1,char *str2)
{
	int i;
	int result=0;
	int status=1;
	for(i=0;str1[i]!='\0'&&str2[i]!='\0';i++)
	{
		if(str1[i]==str2[i])
			continue;
		else
		{
			status=0;
			result=str1[i]-str2[i];
			break;
		}
	}
	if(status==1)
	{
		if(str1[i]!='\0')
			result=str1[i];
		else
			result=-str2[i];
	}
	printf("Your comparision is:%i\n",result);
}
int main()
{
	char str1[100],str2[100];
	printf("Please enter two strings you want to compare\n");
	scanf("%[^\n]s",str1);
	scanf(" %[^\n]s",str2);
	cmp(str1,str2);
	return 0;
}
