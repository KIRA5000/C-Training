#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<fcntl.h>
#define BUFFSIZE 20
int main(int argc,char** argv)
{
        char buff[BUFFSIZE];
        int n;
	int fd1=open("/home/kira5000/Desktop/C-Training/Day24",O_RDONLY);
        int fd=openat(fd1,"hello.txt",O_RDWR);
        while((n=read(fd,buff,BUFFSIZE))>0)
        {
                /*if(write(1,buff,n)!=n)
                {
                        printf("Write Error\n");
                }*/
        }

	if(lseek(fd,10,SEEK_END)==-1)
	{
		printf("Seek Error");
	}
	else
	{
		if(write(fd,"\nWhen i was a child.\n",21)==-1)
		{
			printf("Write error");
		}
	}

	printf("New:");
	//fflush(stdout);
	lseek(fd,0,SEEK_SET);
	while((n=read(fd,buff,BUFFSIZE))>0)
	{
		//printf("Second:\n");
		write(1,buff,n);
	}
	close(fd);
        return 0;
}

