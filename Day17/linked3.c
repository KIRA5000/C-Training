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
void revprint(struct node *head)
{
	int length=0;
	struct node *curr=head;
	while(curr!=NULL)
	{
		length++;
		curr=curr->next;
	}
	for(int i=0;i<length;i++)
	{
		curr=head;
		for(int j=i;j<length-1;j++)
		{
			curr=curr->next;
		}
		printf("%d ",curr->data);
	}
	printf("\n");
}
int main()
{
	struct node *head=NULL;
	int y=1;
	int data;
	while(y==1)
	{
		printf("Enter an element in linked list\n");
		scanf("%d",&data);
		head=insert(head,data);
		printf("What do you wanna do next\n");
		scanf("%d",&y);
	}
	printf("Your reverse linked list is:\n");
	revprint(head);
	printf("\n");
	return 0;
}
