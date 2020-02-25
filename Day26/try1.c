#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#define BUFFSIZE 4096
int main()
{
	int buff[BUFFSIZE];
	int fd=open("hello.txt",O_RDONLY);
	int n=pread(fd,buff,BUFFSIZE,20);
	if(write(1,buff,n)!=n)
	{
		printf("write error\n");
	}
	return 0;
}
