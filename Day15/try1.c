#include<stdio.h>
#include<stdlib.h>
struct demo
{
	char ch;
	char arr[];
};
int main()
{
	struct demo *ptr=(struct demo *)malloc(sizeof(struct demo)+50);
	scanf("%[^\n]s",ptr->arr);
	ptr->ch='A';
	printf("%s\n",ptr->arr);
	printf("%c\n",ptr->ch);
	return 0;
}
