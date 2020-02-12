#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *front;
	struct node *back;
};
struct node* insert(struct node *head,int data)
{
	if(head==NULL)
	{
		head=(struct node*)malloc(sizeof(struct node));
		head->data=data;
		head->front=NULL;
		head->back=NULL;
	}
	else
	{
		struct node *curr=head;
		while(curr->front!=NULL)
		{
			curr=curr->front;
		}
		struct node *ndata=(struct node*)malloc(sizeof(struct node));
		ndata->data=data;
		ndata->front=NULL;
		ndata->back=curr;
		curr->front=ndata;
	}
	return head;
}
void print(struct node* head)
{
	struct node *curr=head;
	while(curr!=NULL)
	{
		printf("%d ",curr->data);
		curr=curr->front;
	}
	printf("\n");
}
void revprint(struct node *head)
{
	struct node *curr=head;
	while(curr->front!=NULL)
	{
		curr=curr->front;
	}
	while(curr!=NULL)
	{
		printf("%d ",curr->data);
		curr=curr->back;
	}
	printf("\n");
}
int main()
{
	struct node *head=NULL;
	printf("What do you wanna do?\n");
	printf("1. Insert\n");
	printf("2. Delete //Not active\n");
	printf("3. Display\n");
	printf("4. Exit\n");
	printf("5. Reverse Display\n");
	int y;
	scanf("%d",&y);
	while(y!=4)
	{
		if(y==1)
		{
			int data;
			printf("Insert data you wanna enter\n");
			scanf("%d",&data);
			head=insert(head,data);
		}
		if(y==3)
			print(head);
		printf("What's next?\n");
		scanf("%d",&y);
		if(y==5)
		{
			revprint(head);
		}
	}
	return 0;
}
