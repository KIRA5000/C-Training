#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
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
		if(pathconf(argv[1],_POSIX_CHOWN_RESTRICTED)==-1)
		{
			printf("Resricted Chown, Non superuser\n");
			printf("Trying to change group id to root\n");
			int gid=st.st_gid;
			if(chown(argv[1],-1,0)==0)
			{
				printf("Group id successfull changed\n");
			}
			else
			{
				perror("chown");
				printf("Wasn't able to change file's gid\n");
			}
		}
		else
		{
			printf("Else:\n");
			printf("Trying to change group id to root\n");
                        int gid=st.st_gid;
                        if(chown(argv[1],-1,0)==0)
                        {
                                printf("Group id successfull changed\n");
                        }
                        else
                        {
                                perror("chown");
                                printf("Wasn't able to change file's gid\n");
                        }
			printf("Trying to change user id to root\n");
                        gid=st.st_uid;
                        if(chown(argv[1],0,-1)==0)
                        {
                                printf("User id successfull changed\n");
                        }
                        else
                        {
                                perror("chown");
                                printf("Wasn't able to change file's uid\n");
                        }

		}
	}
	return 0;
}
