#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>
int main(int argc,char** argv)
{
	if(argc!=2)
	{
		printf("./a.out filename\n");
	}
	else
	{
		umask(0022);
		if(creat(argv[1],0777)!=-1)
		{
			printf("File created\n");
		}
		else
		{
			printf("File not created\n");
		}
	}
	return 0;
}
