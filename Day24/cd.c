#include<stdio.h>
#include<unistd.h>
int main(int argc,char **argv)
{
	if(argv[1]==NULL)
	{
		chdir("/home");
	}
	else
	{
		if(chdir(argv[1])==-1)
		{
			printf("Enter a valid pathname\n");
		}
	}
	return 0;
}
