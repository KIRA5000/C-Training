#include<stdio.h>
#include<stdlib.h>
struct node
{
        int data;
        struct node *next;
};
struct node *head=NULL;
struct node *tail=NULL;
void enter(int data)
{
        if(head==NULL)
        {
                head=(struct node*)malloc(sizeof(struct node));
		tail=(struct node *)malloc(sizeof(struct node));
                head->data=data;
                head->next=NULL;
		tail=head;
        }
        else
        {
                struct node *new_data=(struct node*)malloc(sizeof(struct node));
                new_data->data=data;
                new_data->next=NULL;
                tail->next=new_data;
		tail=new_data;
        }
}
void delete()
{
	if(head==NULL||head->next==NULL);
	else
	{
		head=head->next;
	}
}
void print()
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
	struct node *tail=NULL;
        int data;
	printf("What do you wanna do in stack:\n");
        printf("1. Input\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        int y=1;
        do
        {
		printf("What's next?\n");
		scanf("%d",&y);
		if(y==1)
		{
			printf("Enter data in linked list\n");
                	scanf("%i",&data);
                	enter(data);
		}
		else if(y==2)
			delete();
		else if(y==3)
			print();
		//printf("What's next?\n");
        }while(y!=4);
        return 0;
}
