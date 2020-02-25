#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<errno.h>
int main(void)
{
	int i=1;
	int fd,fd2,fd3;
	while((fd=open("hello2.txt",O_RDWR))<0)
	{
		printf("File was not able to open\nChecking the problem...\n");
		if(errno==ENOENT)
		{
			printf("Problem found..\nFile does not exists\n");
			if((fd=creat("hello2.txt",0755))<0)
			{
				printf("Creation error\n");
			}
			else
			{
				printf("File created successfully\n");
			}
		}
		printf("Opening attept:%d\n",i++);
		if(i>5)
		{
			break;
		}
	}
	if(i>5)
	{
		printf("Opening failed...\nTerminating..\n");
	}
	else
	{
		printf("File created successfully\n");
		printf("It's file discriptor is:%d\n",fd);
		printf("Do you wanna randomly create duplicate of you wanna define duplicate file discriptor?(0/1)\n");
		int choice;
		scanf("%d",&choice);
		if(choice==0)
		{
			fd3=dup(fd);
			printf("Your new file discriptor is:%d\n",fd3);
		}
		else if(choice==1)
		{
			int j;
			printf("Enter new file discriptor:");
			scanf("%d",&j);
			int flag=fcntl(j,F_GETFD,0);
			if(fd==fd2)
			{
				printf("Both file discriptors are same\n");
				fd2=dup2(fd,fd2);
			}
			else if(flag==-1)
			{
				printf("No such discriptor exists\n");
				fd2=dup2(fd,j);
				printf("Your new file discriptor is:%d\n",fd2);
			}
			else
			{
				fd2=dup2(fd,j);
				printf("Your new file discriptor is:%d\n",fd2);
			}
		}
		else
		{
			printf("Please enter a valid choice\n");
		}
	}
	return 0;
}
