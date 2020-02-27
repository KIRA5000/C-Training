#include<stdio.h>
#include<sys/stat.h>
#include<dirent.h>
#include<string.h>
#include<fcntl.h>
#include<errno.h>
int main(int argc,char **argv)
{
	DIR* dr;
	struct dirent *dirp;
	struct stat st;
	if(argc<2)
	{
		dr=opendir(".");
		while((dirp=readdir(dr))!=NULL)
		{
			printf("%s ",dirp->d_name);
		}
		printf("\n");
	}
	else
	{
		if(argv[1][0]=='-')
		{
			if(argv[1][1]=='l')
			{
				int path;
				if(argc!=3)
				{
					dr=opendir(".");
                                	path=open(".",O_RDONLY);
				}
				else
				{
					dr=opendir(argv[2]);
					path=open(argv[2],O_RDONLY);
				}
				while((dirp=readdir(dr))!=NULL)
				{
					fstatat(path,dirp->d_name,&st,0);
					switch(st.st_mode&S_IFMT)
					{
						case S_IFDIR:
							printf("d");
							break;
						default:
							printf("-");
					}
					for(int i=2;i>=0;i--)
					{
						if(st.st_mode&(1<<3*i+2))
							printf("r");
						else
							printf("-");
						if(st.st_mode&(1<<3*i+1))
                                                        printf("w");
                                                else
                                                        printf("-");
						if(st.st_mode&(1<<3*i+0))
                                                        printf("x");
                                                else
                                                        printf("-");
					}
					printf(" %-10o %-10d %-10d %-10ld %s\n",st.st_mode,st.st_uid,st.st_gid,st.st_size,dirp->d_name);
				}
			}
		}
		else
		{
			dr=opendir(argv[1]);
			while((dirp=readdir(dr))!=NULL)
			{
				printf("%s ",dirp->d_name);
			}
			printf("\n");
		}
	}
	return 0;
}
