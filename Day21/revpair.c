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
struct node* aturev(struct node *head,int i)
{
	if(head==NULL)
	{
		return head;
	}
	if((i%2==0)&&(i%4==2))
	{
		if(head->next!=NULL)
		{
			if((head->next->next!=NULL))
			{
				struct node *temp=head->next;
				struct node *temp2=head->next->next;
				head->next=temp2;
				temp->next=temp2->next;
				temp2->next=temp;
				head->next=aturev(head->next,i+1);
			}
		}
		else
		{
			return head;
		}
	}
	else
        {
		head->next=aturev(head->next,i+1);
        }
	return head;

}
void print(struct node *head)
{
	struct node *curr=head;
	while(curr!=NULL)
	{
		printf("%d ",curr->data);
		curr=curr->next;
	}
	printf("\n");
}
struct node* rev(struct node *head)
{
	if(head==NULL)
		return NULL;
	else if(head->next==NULL)
	{
		return head;
	}
	else
	{
		int i=1;
		head=aturev(head,i);
	}
	return head;
}
int main(void)
{
	struct node *head=NULL;
	printf("Let's first enter data in linked list\n");
	int choice =1;
	while(choice)
	{
		int data;
		printf("Enter data:");
		scanf("%d",&data);
		head=insert(head,data);
		printf("Wanna enter more?(0,1)\n");
		scanf("%d",&choice);
	}
	print(head);
	printf("Now let's reverse the list in pairs XD\n");
	head=rev(head);
	print(head);
	return 0;
}
