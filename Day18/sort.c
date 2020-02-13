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
struct node* rev(struct node *head)
{
        struct node *curr=head;
        struct node *prev=NULL;
        while(curr!=NULL)
        {
                struct node *nex=curr->next;
                curr->next=prev;
                prev=curr;
                curr=nex;
        }
        head=prev;
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
struct node* sort(struct node *head)
{
	struct node *curr=head;
	int t=1;
	struct node* prev=NULL;
	while(t!=0)
	{
		curr=head;
		prev=NULL;
		t=0;
		while(curr->next!=NULL)
		{
			if((curr->data)>(curr->next->data))
			{
				int temp=curr->data;
				curr->data=curr->next->data;
				curr->next->data=temp;
				t++;
			}
			curr=curr->next;
		}
	}
	return head;
}
int main()
{
        struct node *head=NULL;
        int data;
        int y;
        printf("What do you wanna do?\n");
        printf("1. Insert\n");
        printf("2. Reverse\n");
        printf("3. Display\n");
	printf("4. Sort\n");
        printf("5. Exit\n");
        scanf("%d",&y);
        while(y!=5)
        {
                if(y==1)
                {
                        printf("Enter data in linked list\n");
                        scanf("%i",&data);
                        head=insert(head,data);
                }
                if(y==2)
                        head=rev(head);
                if(y==3)
                        print(head);
		if(y==4)
			head=sort(head);
                printf("Do you wanna enter more element(1 for yes)?\n");
                scanf("%d",&y);
        }
        return 0;
}
