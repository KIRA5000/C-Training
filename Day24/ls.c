#include<dirent.h>
#include<stdio.h>
#include<unistd.h>
int main(int argc, char** argv)
{
	DIR *dp;
	struct dirent *dir;
	if(argv[1]==NULL)
	{
		dp=opendir(".");
		while((dir=readdir(dp))!=NULL)
                {
			printf("%s ",dir->d_name);
                }
                printf("\n");
	}
	else
	{
		dp=opendir(argv[1]);
		if(dp==NULL)
		{
			fprintf(stderr,"Enter a valid directory pathway\n");
		}
		else
		{
			while((dir=readdir(dp))!=NULL)
			{
				printf("%s\n",dir->d_name);
			}
			printf("\n");
		}
	}
	closedir(dp);
	return 0;
}
