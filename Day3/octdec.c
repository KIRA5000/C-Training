#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
void main()
{
	char ch[100];
	printf("Please enter a octal number:\n");
	scanf("%s",ch);
	int no=0;
	for(int i=1;i<strlen(ch);i++)
	{
		int c = ch[i];
		c-=48;
		no+=c*pow(8,strlen(ch)-i-1);
	}
	printf("Your decimal of number is:%i\n",no);
}
