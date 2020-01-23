#include<stdio.h>
void palin(int no)
{
	int n=no;
	int rev=0;
	int status=1;
	for(int i=2;i<no;i++)
	{
		if(no%i==0)
		{
			status=0;
			break;
		}
	}
	if(status==1)
	{
		while(no!=0)
		{
			rev+=no%10;
			rev*=10;
			no/=10;
		}
		rev/=10;
		if(rev==n)
			printf("It's a palprime\n");
		else
			printf("It's not a palprime\n");
	}
	else
	{
		printf("It's not a palprime\n");
	}
}
int main()
{
	int no;
	printf("Enter a number to chack if it is a palindrome or not\n");
	scanf("%i",&no);
	palin(no);
	return no;
}
