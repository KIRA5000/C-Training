#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<errno.h>
int dupli(int fd,int j)
{
	char str[100]="\0";
	sprintf(str,"/proc/%d\n",j);
	int fd2=open(str,O_RDWR);
	perror("open");
	printf("Your new file discriptor is:%d\n",fd2);
	return 0;
}
int main(int argc,char **argv)
{
	if(argc!=2)
	{
		printf("./a.out file_name\n");
	}
	else
	{
		printf("The pid of this process is:%d\n",getppid());
		int fd=open(argv[1],O_RDWR | O_CREAT,0755);
		printf("Your current file discriptor is:%d\n",fd);
		printf("Do you wanna copy this file into another file discriptor?(0/1)\n");
		int choice;
		scanf("%d",&choice);
		if(choice==1)
		{
			int fd2,j;
			printf("Enter a file discriptor for new file\n");
			scanf(" %d",&j);
			fd2=dupli(fd,j);
		}
		else
		{
			printf("Okay...\nTerminating program..\n");
		}
	}
	return 0;
}
