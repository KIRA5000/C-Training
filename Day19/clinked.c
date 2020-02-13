#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
struct node
{
        int data;
        struct node *next;
};
struct node* binsert(struct node *head,int data)
{
        if(head==NULL)
        {
                head=(struct node *)malloc(sizeof(struct node));
                head->data=data;
                head->next=head;
        }
        else
        {
                struct node *ndata=(struct node *)malloc(sizeof(struct node));
                ndata->data=data;
                ndata->next=head;
                struct node *curr=head;
		while(curr->next!=head)
		{
			curr=curr->next;
		}
		curr->next=ndata;
		head=ndata;
        }
        return head;
}
struct node* insert(struct node *head,int data)
{
        if(head==NULL)
        {
                head=(struct node *)malloc(sizeof(struct node));
                head->data=data;
                head->next=head;
        }
        else
        {
                struct node *curr=head;
                while(curr->next!=head)
                {
                        curr=curr->next;
                }
                struct node *ndata=(struct node *)malloc(sizeof(struct node));
                ndata->data=data;
                ndata->next=head;
                curr->next=ndata;
        }
        return head;
}
struct node* minsert(struct node* head,int data,int loc)
{
	if(head==NULL)
	{
		printf("Your linked list is empty\nInserting at the beggining\n");
		head=(struct node *)malloc(sizeof(struct node));
		head->data=data;
		head->next=head;
	}
	else
	{
		struct node *curr=head;
		int length=1;
		curr=curr->next;
		while(curr!=head)
		{
			curr=curr->next;
			length++;
		}
		if(length<(loc-1))
		{
			printf("Your list isn't that long :(\n Inserting at end\n");
			head=insert(head,data);
		}
		else
		{
			curr=head;
			if(loc==1)
			{
				head=binsert(head,data);
			}
			else
			{
				for(int i=0;i<loc-2;i++)
				{
					curr=curr->next;
				}
				struct node *ndata=(struct node *)malloc(sizeof(struct node));
				ndata->data=data;
				ndata->next=curr->next;
				curr->next=ndata;
			}
		}
	}
	return head;
}
void print(struct node *head)
{
	struct node *curr=head;
	printf("%d ",curr->data);
	curr=curr->next;
	while(curr!=head)
	{
		printf("%d ",curr->data);
		curr=curr->next;
	}
	printf("\n");
}
struct node* bdelete(struct node *head)
{
	if(head==NULL)
	{
		printf("Your list is already empty -.-\n");
	}
	else
	{
		struct node *temp=head;
		struct node *curr=head->next;
		while(curr->next!=head)
		{
			curr=curr->next;
		}
		head=head->next;
		curr->next=head;
		free(temp);
	}
	return head;
}
struct node* mdelete(struct node *head,int loc)
{
	if(head==NULL)
	{
		printf("Your linked list is already empty :(\n");
	}
	else
	{
		int length=1;
		struct node *curr=head->next;
		while(curr!=head)
		{
			curr=curr->next;
			length++;
		}
		if(length<(loc-1))
		{
			printf("Your list isn't that long ..\nNo action taken\n");
		}
		else
		{
			curr=head;
			for(int i=0;i<loc-2;i++)
			{
				curr=curr->next;
			}
			struct node *temp=curr->next;
			curr->next=curr->next->next;
			free(temp);
		}
	}
	return head;
}
struct node* delete(struct node *head)
{
        if(head==NULL)
        {
                printf("Your list is already empty -.-\n");
        }
        else
        {
                struct node *curr=head;
		while(curr->next->next!=head)
		{
			curr=curr->next;
		}
                struct node *temp=curr->next;
		curr->next=head;
                free(temp);
        }
        return head;
}
int main()
{
        struct node *head=NULL;
	system("clear");
	int choice=1;
	while(choice!=4)
	{
		printf("What do you wanna do in your circular linked list?\n");
		printf("1. Insert\n");
		printf("2. Delete\n");
		printf("3. Display\n");
		printf("4. Exit\n");
		scanf("%d",&choice);
		getchar();
        	system("clear");
		if(choice==1)
		{
			printf("Where do you wanna insert in linked list?\n");
			printf("1. At beggining?\n");
			printf("2. At Middle?\n");
			printf("3. At End?\n");
			scanf("%d",&choice);
			system("clear");
			int data;
			int loc;
			if(choice==1)
			{
				printf("Please enter data you wanna enter\n");
				scanf("%d",&data);
				head=binsert(head,data);
				printf("Data has been added\n");
				getchar();
				getchar();
				system("clear");
			}
			else if(choice==2)
			{
				printf("Your linked list is as follows:\n");
                                print(head);
				printf("Please enter data you wanna enter\n");
				scanf("%d",&data);
				printf("Please insert location where you wanna enter data\n");
				scanf("%d",&loc);
				head=minsert(head,data,loc);
				printf("Data has been added\n");
				getchar();
				getchar();
				system("clear");
			}
			else if(choice==3)
			{
				printf("Please enter data you wanna enter\n");
                                scanf("%d",&data);
                                head=insert(head,data);
                                printf("Data has been added\n");
                                getchar();
				getchar();
                                system("clear");
			}
		}
		else if(choice==2)
		{
			printf("Where do you wanna delete in linked list?\n");
                        printf("1. At beggining?\n");
                        printf("2. At Middle?\n");
                        printf("3. At End?\n");
                        scanf("%d",&choice);
                        system("clear");
			int loc;
			if(choice==1)
                        {
                                head=bdelete(head);
                                printf("Your Data has been Deleted\n");
                                getchar();
				getchar();
                                system("clear");
                        }
                        else if(choice==2)
                        {
				printf("Your linked list is as follows:\n");
                                print(head);
                                printf("Please insert location where you wanna delete data\n");
                                scanf("%d",&loc);
                                head=mdelete(head,loc);
                                printf("Data has been delete\n");
                                getchar();
				getchar();
                                system("clear");
                        }
                        else if(choice==3)
                        {
                                head=delete(head);
                                printf("Data has been deleted\n");
                                getchar();
				getchar();
                                system("clear");
                        }
		}
		else if(choice==3)
		{
			print(head);
		}
	}
        return 0;
}
