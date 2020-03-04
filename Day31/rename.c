#include<stdio.h>
#include<errno.h>
int main(int argc,char** argv)
{
	if(argc!=3)
	{
		printf("./a.out pathname_old pathname_new\n");
	}
	else
	{
		if(rename(argv[1],argv[2])<0)
		{
			perror("Rename");
		}
		else
		{
			printf("Rename was successfull\n");
		}
	}
	return 0;
}
