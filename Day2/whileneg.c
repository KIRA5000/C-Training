#include<stdio.h>
int main(void)
{
	int t=0;
	while(-1)
	{
		printf("Hello\n");
		if(t==2)
			break;
		t++;
	}
	return 0;
}
