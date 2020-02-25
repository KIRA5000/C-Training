#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include <fcntl.h>
#define BUFFSIZE 4096
int main(int argc,char** argv)
{
	char buff[BUFFSIZE];
	int n;
	int fd=openat(AT_FDCWD,"hello.txt",O_RDONLY);
	while((n=read(fd,buff,BUFFSIZE))>0)
	{
		if(write(1,buff,n)!=n)
		{
			printf("Write Error\n");
		}
	}
	return 0;
}
