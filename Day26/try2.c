#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<errno.h>
int main(void)
{
	int i=2;
	int fd;
	while((fd=open("hello1.txt",O_RDWR))<0)
	{
		printf("File Creation Error :(\n");
		if(errno==ENOENT)
		{
			printf("Creating file...\n");
			if((fd=creat("hello1.txt",0755))<0)
			{
				printf("Sorry creation error\n");
			}
			else
			{
				printf("File created successfully\n");
			}
		}
		printf("Re trying to open file try:%d\n",i++);
		if(i>5)
		{
			break;
		}
	}
	if(i>5)
	{
		printf("Couldn't open file\n");
	}
	else
	{
		printf("File open successfull\n");
	}

}
