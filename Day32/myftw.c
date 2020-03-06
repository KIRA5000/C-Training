#include<stdio.h>
static int myftw(char *pathname,Myfunc *func)
{

}
int main(int argc,char **argv)
{
	int ret;
	if(argc!=2)
	{
		printf("./a.out pathname\n");
	}
	else
	{
		ret=myftw(argv[1],myfunc);
	}
	return 0;
}
