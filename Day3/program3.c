#include<stdio.h>
void lower(char* c)
{
	for(int i=0;c[i]!='\0';c++)
	{
		char ch = c[i];
		c[i]=(c[i]>='A'&&c[i]<='Z')?(ch+'a'-'A'):ch;
	}
}
int main(void)
{
	char c[100];
	printf("Please Enter the string:\n");
	scanf("%[^\n]s",c);
	lower(c);
	printf("%s\n",c);
	return 0;
}
