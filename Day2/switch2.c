#include<stdio.h>
int main(void)
{
	char ch='a';
	switch(ch)
	{
		case "a":
			printf("It does compare char and string\n");
			break;
		default:
			printf("It does not compare char and string\n");
			break;
	}
	return 0;
}
