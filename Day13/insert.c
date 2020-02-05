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
	printf("Enter index at which you wanna enter\n");
	int no;
	scanf("%d",&no);
	printf("Enter character you wanna enter\n");
	char ch;
	scanf(" %c",&ch);
	char *nstr=(char*)malloc(t+2);
	for(i=0;i<no;i++)
	{
		nstr[i]=str[i];
	}
	nstr[i]=ch;
	int j=i+1;
	for(;j<t+2;j++)
	{
		nstr[j]=str[i++];
	}
	printf("%s\n",nstr);
	free(nstr);
	free(str);
	return 0;
}
