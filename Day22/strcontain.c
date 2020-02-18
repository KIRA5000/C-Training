#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int contains(char *str1,char *str3)
{
	char *str2=(char *)malloc(50*sizeof(char));
	for(int i=0;i<strlen(str1);i++)
        {
                for(int j=strlen(str1)-1;j>=i;j--)
                {
                        int t=0;
                        for(int k=i;k<=j;k++)
                        {
                                str2[t++]=str1[k];
                        }
                        str2[t]='\0';
                        if(strcmp(str2,str3)==0)
                        {
                               return (j+1-i);
                        }
                }
        }
	return 0;
}
int main(void)
{
	char *str1=(char *)malloc(50*sizeof(char));
	char *str2=(char *)malloc(50*sizeof(char));
	char *str3=(char *)malloc(50*sizeof(char));
	char *str4=(char *)malloc(50*sizeof(char));
	printf("Please enter two strings;\n");
	scanf("%s",str1);
	scanf(" %s",str2);
	int max=0;
	for(int i=0;i<strlen(str2);i++)
	{
		for(int j=strlen(str2)-1;j>=i;j--)
		{
			int t=0;
			for(int k=i;k<=j;k++)
			{
				str3[t++]=str2[k];
			}
			str3[t]='\0';
			if(max<contains(str1,str3))
			{
				max=contains(str1,str3);
				strcpy(str4,str3);
			}
		}
	}
	printf("Largest substring is:%s with length:%i\n",str4,max);
	return 0;
}
