#include<stdio.h>
#include<stdlib.h>
void main()
{
	char s[]="Hello	world";
	int i=0,j=0;
	char *t=(char*)malloc(sizeof(s));
	while(s[i] !='\0')
	{
		if(s[i] == '\t')
		{
			t[j++]='\\';
			t[j++]='t';
		}
		else if(s[i] == '\n')
		{
			t[j++] = '\\';
			t[j++]='n';
		}
		else
		{
			t[j++]=s[i];
		}
		i++;
	}
	printf("%s\n",t);
}
