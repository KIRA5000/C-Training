#include<stdio.h>
#include<sys/stat.h>
#include<errno.h>
int main(int argc,char **argv)
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
			if(stat(argv[i],&st)>=0)
			{
				if(st.st_nlink>1)
				{
					printf("Symbolic Link\n");
				}
				if(S_ISCHR(st.st_mode))
				{
					printf("Character File\n");
				}
				else if(S_ISBLK(st.st_mode))
				{
					printf("Block file\n");
				}
				else if(S_ISDIR(st.st_mode))
				{
					printf("Directory\n");
				}
				else if(S_ISREG(st.st_mode))
                                {
                                        printf("Regular File\n");
                                }
			}
			else
			{
				perror("stat");
			}
		}
	}
	return 0;
}
