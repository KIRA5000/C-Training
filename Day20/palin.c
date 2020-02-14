#include<stdio.h>
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
	struct node *curr=head;
	int length=0;
	while(curr!=NULL)
	{
		curr=curr->next;
		length++;
	}
	curr=head;
	struct node *check =head;
	int ret=1;
	for(int i=0;i<length;i++)
	{
		curr=head;
		for(int j=i;j<length-1;j++)
		{
			curr=curr->next;
		}
		if(check->data!=curr->data)
		{
			ret=0;
			break;
		}
		check=check->next;
	}
	return ret;
}
int main()
{
	struct node *head=NULL;
	printf("Do you wanna insert data?(y/n)\n");
	char choice;
	scanf("%c",&choice);
	while(choice=='y')
	{
		int data;
		printf("Insert data:");
		scanf("%d",&data);
		head=insert(head,data);
		printf("What's nest?(y/n)\n");
		scanf(" %c",&choice);
	}
	if(palin(head))
	{
		printf("Linked list is a palindrome\n");
	}
	else
	{
		printf("Linked list is not a palindrome\n");
	}
	while(head!=NULL)
	{
		struct node *temp=head;
		head=head->next;
		free(temp);
	}
	return 0;
}
