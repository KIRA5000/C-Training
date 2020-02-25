#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int main()
{
	int fd=creat("hello4.txt",0755);
	fd=open("hello4.txt",O_RDONLY);
	int vim=fcntl(fd,F_GETFL,0);
	if(vim&O_ACCMODE==O_RDONLY);
	{
		printf("Your file is in read only mode\n");
		(vim&O_ACCMODE) &=~O_RDONLY;
		(vim&O_ACCMODE)|=O_RDWR;
		fcntl(fd,F_SETFL,vim);
		vim=fcntl(fd,F_GETFL,0);
	}
	if(vim&O_ACCMODE==O_RDONLY)
	{
		printf("Your file is in write mode\n");
	}
	return 0;
}
