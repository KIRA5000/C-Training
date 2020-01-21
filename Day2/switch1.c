#include<stdio.h>
int main(void)
{
	char ch='a';
	switch(ch)
	{
		case 97:
			printf("It's an a\n");
			break;
		default:
			printf("It's not checking ASCII\n");
	}
	return 0;
}
