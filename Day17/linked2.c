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
struct node* insert1(struct node *head,int loc,int data)
{
	if(head==NULL)
		return NULL;
	else
	{
		int pre=1;
		struct node *curr=head;
		while(pre!=loc)
		{
			curr=curr->next;
			pre++;
		}
		struct node *ndata=(struct node*)malloc(sizeof(struct node));
		ndata->data=data;
		ndata->next=curr->next;
		curr->next=ndata;
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

                printf("Enter data in linked list\n");
                scanf("%i",&data);
                head=insert(head,data);
                printf("Do you wanna enter more element(1 for yes)?\n");
                scanf("%d",&y);
        }while(y==1);
	printf("Your linked list uptil now is:\n");
        print(head);
	int loc;
	printf("Enter location where you wanna enter\n");
	scanf("%d",&loc);
	printf("Enter data you wanna enter\n");
	scanf("%d",&data);
	head=insert1(head,loc-1,data);
	printf("Your new linked list is:\n");
	print(head);
        return 0;
}

