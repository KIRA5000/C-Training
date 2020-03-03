#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<errno.h>
int main(int argc,char **argv)
{
	if(argc!=3)
	{
		printf("./a.out existing_path new_path\n");
	}
	else
	{
		if(link(argv[1],argv[2])<0)
		{
			printf("Link error\n");
			perror("Link");
		}
		else
		{
			printf("Link created\n");
		}
	}
	return 0;
}
