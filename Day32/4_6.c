#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#define size 1
int main(int argc,char **argv)
{
	if(argc!=3)
	{
		printf("./a.out pathname pathname\n");
	}
	else
	{
		int flag=0;
		char buff[2];
		int count=0;
		char str[100];
		int j=0;
		for(int i=0;argv[1][i]!='\0';i++)
		{
			count++;
		}
		for(int i=count-1;i>=-1;i--)
		{
			if(argv[1][i-1]=='/'||i==0)
			{
				for(int k=i;argv[1][k]!='\0';k++)
				{
					str[j++]=argv[1][k];
				}
				str[j]='\0';
				flag=1;
				break;
			}
			if(flag==1)
				break;
		}
		int fd1=open(argv[1],O_RDONLY);
		chdir(argv[2]);
		int fd2=open(str,O_WRONLY | O_CREAT | O_EXCL,0755);
		int n;
		while((n=read(fd1,buff,size))!=0)
		{
			if(buff[0]!='\0')
			{
				write(fd2,buff,size);
			}
		}
	}
	return 0;
}
