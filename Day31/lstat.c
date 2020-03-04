#include<stdio.h>
#include<sys/stat.h>
int main(void)
{
	struct stat st;
	lstat("slink",&st);
	{
		printf("%-10ld\n",st.st_ino);
	}
	return 0;
}
