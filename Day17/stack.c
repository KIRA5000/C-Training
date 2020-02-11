#include<stdio.h>
#include<stdlib.h>
struct node
{
        int data;
        struct node *next;
};
struct node* push(struct node *head,int data)
{
        if(head==NULL)
        {
                head=(struct node*)malloc(sizeof(struct node));
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
                struct node *new_data=(struct node*)malloc(sizeof(struct node));
                new_data->data=data;
                new_data->next=NULL;
                curr->next=new_data;
        }
        return head;
}
struct node* pop(struct node *head)
{
	if(head==NULL||head->next==NULL)
	{
		return NULL;
	}
	else
	{
		struct node *curr=head;
		while(curr->next->next!=NULL)
		{
			curr=curr->next;
		}
		curr->next=NULL;
	}
	return head;
}
void print(struct node *head)
{
        struct node* curr=head;
        while(curr!=NULL)
        {
                printf("%d ",curr->data);
                curr=curr->next;
        }
	printf("\n");
}
int main()
{
        struct node *head=NULL;
        int data;
        int y=1;
        do
        {
		printf("What do you wanna do in stack:\n");
		printf("1. Push\n");
		printf("2. Pop\n");
		printf("3. Display\n");
		printf("4. Exit\n");
		scanf("%d",&y);
		if(y==1)
		{
			printf("Enter data in linked list\n");
                	scanf("%i",&data);
                	head=push(head,data);
		}
		else if(y==2)
			head=pop(head);
		else if(y==3)
			print(head);
        }while(y!=4);
        return 0;
}
