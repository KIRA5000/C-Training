#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
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
	int min=INT_MAX;
	int max=INT_MIN;
	int count=0;
	for(int j=0;j<=t;j++)
	{
		count++;
		if(str[j]==' ')
		{
			count--;
			if(min>count)
				min=count;
			if(max<count)
				max=count;
			count=0;
		}
	}
	printf("Max length:%i\n",max);
	printf("Min length:%i\n",min);
	return 0;
}
