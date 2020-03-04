#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<errno.h>
int main(void)
{
	char *ptr=(char *)malloc(100);
	int size=100;
	if((getcwd(ptr,size))!=NULL)
	{
		printf("cwd: %s\n",ptr);
	}
	else
	{
		perror("getcwd");
	}
	chdir("/");
	if((getcwd(ptr,size))!=NULL)
        {
                printf("cwd: %s\n",ptr);
        }
        else
        {
                perror("getcwd");
        }
	return 0;
}
