#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
int main(int argc,char **argv)
{
	int val;
	if(argc!=2)
	{
		printf("./a.out <#discriptor>\n");
	}
	else
	{
		val=fcntl(atoi(argv[1]),F_GETFL,0);
		printf("Your flag numerically is:%d",val);
		if((val & O_ACCMODE)==O_RDONLY)
		{
			printf("Read only");
		}
		else if((val & O_ACCMODE)==O_WRONLY)
		{
			printf("Write only");
		}
		else if((val & O_ACCMODE)==O_RDWR)
		{
			printf("Read and Write");
		}
		if(val & O_APPEND)
		{
			printf(", append");
		}
		printf("\n");
	}
	return 0;
}
