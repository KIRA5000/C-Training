#include<stdio.h>
#include<stdlib.h>
int main()
{
	struct demo
	{
		int i;
		char *arr;
	};
	struct demo *d=(struct demo *)malloc(sizeof(struct demo));
	d->arr=(char*)malloc(50);
	scanf("%[^\n]s",d->arr);
	printf("%s\n",d->arr);
	return 0;
}
