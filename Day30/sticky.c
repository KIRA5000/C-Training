#include<stdio.h>
#include<unistd.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<errno.h>
int main(int argc,char **argv)
{
	struct stat st;
	if(argc!=2)
	{
		printf("./a.out pathname\n");
	}
	else
	{
		stat(argv[1],&st);
		chmod(argv[1],st.st_mode|S_ISVTX|S_IXOTH);
	}
	return 0;
}
