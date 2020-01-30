#include<stdio.h>
int main()
{
	char name[100];
	printf("Please enter a name\n");
	scanf("%[^\n]s",name);
	int loop=0;
	int i=0;
	while(name[i]!='\0')
	{
	
		for(int l=0;l<=3;l++)
		{
			for(int j=0;j<l;j++)
			{
				printf("*");
			}
			printf("%c\n",name[i++]);
			if(name[i]=='\0')
				goto end;
		}
	
		for(int l=2;l>0;l--)
		{
			for(int j=0;j<l;j++)
			{
				printf("*");
			}
			printf("%c\n",name[i++]);
			if(name[i]=='\0')
                                goto end;

		}
	}
end:
	return 0;
}

