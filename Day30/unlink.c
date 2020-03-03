#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<errno.h>
int main(int argc,char **argv)
{
        if(argc!=2)
        {
                printf("./a.out path\n");
        }
        else
        {
                if(unlink(argv[1])<0)
                {
                        printf("unLink error\n");
                        perror("unLink");
                }
                else
                {
                        printf("Link deleted\n");
                }
        }
        return 0;
}

