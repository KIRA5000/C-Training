#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<errno.h>
#define BUFFSIZE 4096
int main(void)
{
	char buff[BUFFSIZE];
	int fd=open("slink",O_RDONLY);
	int n;
	while((n=read(fd,buff,BUFFSIZE))!=0)
	{
		if(write(1,buff,n)!=n)
		{
			printf("Write error\n");
			perror("Write");
		}
	}
	return 0;
}
