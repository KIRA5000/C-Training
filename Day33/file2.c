#include<stdio.h>
int main(int argc,char **argv)
{
        if(argc!=2)
        {
                printf("./a.out pathname\n");
        }
        else
        {
                FILE *fp;
                if((fp=fopen(argv[1],"a+"))!=NULL)
                {
                        printf("Enter some data\n");
                        char n;
                        while((n=getchar())!=EOF)
                        {
                                fputc(n,fp);
                        }
                        printf("Your data in file is:\n");
                        rewind(fp);
			while((n=fgetc(fp))!=EOF)
                        {
				if(n=='\n')
				{
					ungetc('#',fp);
				}
				printf("%c",n);
			}
			
                }
                else
                {
                        ferror(fp);
                }
        }

        return 0;
} 
