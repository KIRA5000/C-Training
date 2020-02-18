#include<stdio.h>
int main(void)
{
	char str[100];
	printf("Enter string:\n");
	scanf("%[^\n]s",str);
	for(int i=0;str[i]!='\0';i++)
	{
		if(i%2==0)
		{
			if(str[i]>96&&str[i]<123)
			{
				str[i]-=32;
			}
		}
		else
		{
			if(str[i]>64&&str[i]<91)
			{
				str[i]+=32;
			}
		}
	}
	printf("Your string is:%s\n",str);
	return 0;
}
