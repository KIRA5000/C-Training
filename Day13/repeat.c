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
	int *arr=(int *)calloc(52,sizeof(int));
        while(choice!=10)
        {
                str=(char*)realloc(str,t+1);
                t++;
		if(choice!=10)
		{
			if(s==' ')
			{
				str[i++]=s;
			}
			else if(choice<91&&choice>64)
			{
				if(arr[choice-65]==0)
				{
					str[i++]=s;
					arr[choice-65]++;
				}
			}
			else if(choice>96&&choice<123)
			{
				if(arr[choice-97]==0)
				{
					str[i++]=s;
					arr[choice-97]++;
				}
			}
		}
		scanf("%c",&s);
                choice=s;
        }
        t--;
	printf("%s\n",str);
	free(str);
	return 0;
}
