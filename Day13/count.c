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
        int *count=(int *)malloc(sizeof(int));
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
	printf("Number of characters in string are:%i\n",t);
	return 0;
}
