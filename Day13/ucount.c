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
                if(s!=' ')
                str[i++]=s;
                scanf("%c",&s);
                choice=s;
        }
        t--;
	printf("Enter a character you check count for\n");
	char no;
	scanf("%c",&no);
	int count=0;
	for(int i=0;i<=t;i++)
	{
		if(str[i]==no)
			count++;
	}
	printf("Your count is:%i\n",count);
	return 0;
}
