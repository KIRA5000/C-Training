#include<stdio.h>
int main()
{
	void view();
	printf("Hello\n");
	view();
	void view()
	{
		printf("View\n");
	}
	printf("Hello\n");
	return 0;
}
