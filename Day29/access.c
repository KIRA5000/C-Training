#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>
int main(int argc,char **argv)
{
	if(argc!=2)
	{
		printf("./a.out pathname\n");
	}
	else
	{
		printf("Your uid is:%d\n",getuid());
		printf("Your gid is:%d\n",getgid());
		if(access(argv[1],R_OK)<0)
		{
			printf("No read permission\n");
		}
		else
		{
			printf("Read allowed\n");
		}
		if(access(argv[1],W_OK)<0)
                {
                        printf("No write permission\n");
                }
		else
		{
			printf("Write allowed\n");
		}
		if(access(argv[1],X_OK)<0)
                {
                        printf("No execute permission\n");
                }
		else
		{
			printf("Execute allowed\n");
		}
		if(open(argv[1],O_RDONLY)<0)
		{
			printf("Open denied\n");
		}
		else
		{
			printf("Open allowed\n");
		}
	}
	return 0;
}
