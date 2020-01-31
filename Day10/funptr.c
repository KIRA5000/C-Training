#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int sum(int a,int b)
{
	return a+b;
}
int dif(int a,int b)
{
	return abs(a-b);
}
int main()
{
	int a=10;
	int b=20;
	int choice;
	int (*fptr)(int,int)=NULL;
	printf("Enter action you wanna perform(0 to add,1to difference)\n");
	scanf("%i",&choice);
	switch(choice)
	{
		case 0:
			fptr=sum;
			break;
		case 1:
			fptr=dif;
			break;
	}
	if(fptr!=NULL)
	{
		int act=fptr(a,b);
		printf("Action done:%i\n",act);
	}
	else
	{
		printf("Please enter 0 or 1\n");
	}
	return 0;
}
