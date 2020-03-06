#include<stdio.h>
#include<stdlib.h>
#include<sys/sysmacros.h>
#include<errno.h>
#include<sys/stat.h>
#include<fcntl.h>
int main(int argc, char **argv)
{
	struct stat st;
	if(argc==1)
	{
		printf("./a.out pathnames\n");
	}
	else
	{
		for(int i=1;i<argc;i++)
		{
			printf("\nPath: %s\n",argv[i]);
			if(stat(argv[i],&st)<0)
			{
				perror("stat");
				exit(0);
			}
			printf("Major: %d, Minor: %d\n",major(st.st_dev),minor(st.st_dev));
			if(S_ISCHR(st.st_mode)||S_ISBLK(st.st_mode))
			{
				printf("%s rdev:%d,%d\n",(S_ISCHR(st.st_mode))?"Char":"Blk",major(st.st_rdev),minor(st.st_rdev));
			}
		}
	}
	return 0;
}
