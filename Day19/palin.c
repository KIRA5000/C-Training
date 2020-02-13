#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node* insert(struct node *head,int data)
{
	if(head==NULL)
	{
		head=(struct node *)malloc(sizeof(struct node));
		head->data=data;
		head->next=NULL;
	}
	else
	{
		struct node *curr=head;
		while(curr->next!=NULL)
		{
			curr=curr->next;
		}
		struct node *ndata=(struct node *)malloc(sizeof(struct node));
		ndata->data=data;
		ndata->next=NULL;
		curr->next=ndata;
	}
	return head;
}
int palin(struct node *head)
{
	struct node *head1=NULL;
	struct node *curr=head;
	while(curr->next!=NULL)
	{
		curr=curr->next;
	}
	head1->data=curr->data;
}	
int main()
{
	struct node *head=NULL;
	printf("Do you wanna insert data in linked list?(y/n)\n");
	char ch;
	scanf("%c",&ch);
	while(ch=='y')
	{
		int data;
		printf("Data:");
		scanf("%d",&data);
		head=insert(head,data);
		printf("Do you wanna enter more?(y/n)\n");
		scanf("%c",&ch);
	}
	printf("Now let's check if it is palindrome or not :)\n");
	printf("Please wait..\n");
	sleep(5);
	int check=palin(head);
	if(check==1)
	{
		printf("The linked list is palindrome\n");
	}
	else
	{
		printf("It is not a palindrome\n");
	}
	return 0;
}
