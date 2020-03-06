#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<errno.h>
int main(void)
{
	char *buff=(char *)malloc(100);
	getcwd(buff,100);
	printf("Your starting cwd:%s\n",buff);
	chroot("/home/kira5000");
	perror("chroot");
	chdir("/Desktop");
	perror("chdir");
	getcwd(buff,100);
        printf("Your new cwd:%s\n",buff);
        chroot("/home/kira5000");
	return 0;
}
