#include<stdio.h>
#include<unistd.h>
#include<sys/stat.h>
int main(int argc,char** argv)
{
	if(argc!=2)
	{
		printf("./a.out pathname\n");
	}
	else
	{
		int size;
		struct stat st;
		stat(argv[1],&st);
		printf("Your current file size is: %ld\n",st.st_size);
		printf("Please enter new size:");
		scanf("%d",&size);
		truncate(argv[1],size);
		stat(argv[1],&st);
		printf("Your new file size is: %ld\n",st.st_size);
	}
	return 0;
}
