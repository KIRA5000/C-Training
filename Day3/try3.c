#include<stdio.h>
int main(void)
{
	int i;
	char s[] ="Mayank Srivastava";
	for( i=0;s[i];i++);
	printf("Size:%i\n",i);
	i=0;
	while(s[i++]);
	printf("Size:%i\n",i);
	i=0;
	while(s[++i]);
        printf("Size:%i\n",i);
	return 0;
}
