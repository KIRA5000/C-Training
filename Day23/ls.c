#include<stdio.h>
#include<dirent.h>
int main(int argc,char *argv[])
{
	DIR *d;
	struct dirent *dir;
	if(argc!=2)
		printf("Enter a Directory name\n");
	if((d=opendir(argv[1]))==NULL)
	{
		printf("File does not exists\n");
	}
	else
	{
		while((dir=readdir(d))!=NULL)
		{
			printf("%s ",dir->d_name);
		}
		printf("\n");
	}
	closedir(d);
}
