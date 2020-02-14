#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *left;
	struct node *right;
};
struct queue
{
	struct node *data;
	struct queue *next;
};
struct queue *head=NULL;
struct queue *tail=NULL;
struct node* tinsert(struct node *root,int data)
{
	if(root==NULL)
	{
		root=(struct node *)malloc(sizeof(struct node));
		root->data=data;
		root->left=NULL;
		root->right=NULL;
	}
	else
	{
		if(root->data>data)
		{
			root->left=tinsert(root->left,data);
		}
		else
		{
			root->right=tinsert(root->right,data);
		}
	}
	return root;
}
void qinsert(struct node *root)
{
	if(head==NULL)
	{
		head=(struct queue *)malloc(sizeof(struct queue));
		head->data=root;
		head->next=NULL;
		tail=head;
	}
	else
	{
		struct queue *ndata=(struct queue *)malloc(sizeof(struct queue));
		ndata->data=root;
		ndata->next=NULL;
		tail->next=ndata;
		tail=ndata;
	}
}
int qcheck()
{
	if(head==NULL)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
struct node* qdelete()
{
	struct queue *temp=head;
	head=head->next;
	struct node *data =temp->data;
	free(temp);
	return data;
}
void travel(struct node *root)
{
	if(root!=NULL)
	{
		if(qcheck()==0)
		qinsert(root);
		while(qcheck())
		{
			struct node *print=qdelete();
			printf("%d ",print->data);
			if(print->left!=NULL)
			qinsert(print->left);
			if(print->right!=NULL)
			qinsert(print->right);
		}
	}
}
int main()
{
	struct node *root=NULL;
	printf("Let's insert data in tree first\n");
	printf("Do you wanna?(y/n)\n");
	char choice;
	scanf("%c",&choice);
	while(choice=='y')
	{
		int data;
		printf("Enter data you wanna enter\n");
		scanf("%d",&data);
		root=tinsert(root,data);
		printf("More?(y/n)\n");
		scanf(" %c",&choice);
	}
	printf("Okay let's try level order traversal XD\n");
	travel(root);
	printf("\n");
	return 0;
}
