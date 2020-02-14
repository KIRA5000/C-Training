#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *left;
	struct node *right;
};
struct level
{
	int level;
	struct node *data;
	struct level *next;
};
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
struct level* tinsert2(struct node *root,struct level *root1,int t)
{
        if(root1==NULL)
        {
                root1=(struct level *)malloc(sizeof(struct level));
                root1->data=root;
		root1->level=t;
		root1->next=NULL;
        }
        else
        {
		struct level *curr=root1;
		while(curr->next!=NULL)
		{
			curr=curr->next;
		}
		struct level *ndata=(struct level *)malloc(sizeof(struct level));
		ndata->data=root;
		ndata->level=t;
		ndata->next=NULL;
		curr->next=ndata;
        }
	if(root->left!=NULL)
	{
		root1=tinsert2(root->left,root1,t+1);
	}
	if(root->right!=NULL)
        {
                root1=tinsert2(root->right,root1,t+1);
        }
        return root1;
}
int find(struct level *root1,int data)
{
	while(root1!=NULL)
	{
		if((root1->data->data)==data)
		{
			return root1->level;
		}
		root1=root1->next;
	}
}
int main()
{
        struct node *root=NULL;
	struct level *root1=NULL;
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
	root1=tinsert2(root,root1,0);
	int data;
	printf("Insert node whose deapth you wanna find");
	scanf("%d",&data);
	printf("Your depth of the node is:%d\n",find(root1,data));
	return 0;
}
