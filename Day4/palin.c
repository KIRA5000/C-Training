#include<stdio.h>
void palin(int no)
{
	int n=no;
	int rev=0;
	while(no!=0)
	{
		rev+=no%10;
		rev*=10;
		no/=10;
	}
	rev/=10;
	if(rev==n)
		printf("It's a palindrome\n");
	else
		printf("It's not a palindrome\n");
}
int main()
{
	int no;
	printf("Enter a number to chack if it is a palindrome or not\n");
	scanf("%i",&no);
	palin(no);
	return no;
}
