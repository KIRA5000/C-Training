#include<stdio.h>
#include<unistd.h>
void cpy(char *str)
{
	char cpy[100];
	int i;
	for(i=0;str[i]!='\0';i++)
	{
		cpy[i]=str[i];
	}
	cpy[i]='\0';
	printf("Ready for an unexpected output:\nIn:\n");
	printf("3..\n");
	sleep(2);
	printf("2..\n");
	sleep(2);
	printf("1..\n");
	sleep(2);
	printf("Here it is:%s\n",cpy);

}
int main()
{
	char str[100];
	printf("Please enter a string (And I will copy it into another but idk what's the point of this code but still XD)\n");
	scanf("%[^\n]s",str);
	cpy(str);
	return 0;
}
