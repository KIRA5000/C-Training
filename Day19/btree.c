#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *left;
	struct node *right;
};
struct node* insert(struct node *root,int data)
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
			root->left=insert(root->left,data);
		else
		{
			root->right=insert(root->right,data);
		}
	}
}
void print(struct node *root)
{
	if(root!=NULL)
	{
		printf("%d ",root->data);
		print(root->left);
		print(root->right);
	}
}
int main()
{
	struct node *root=NULL;
	printf("Do you wanna enter data in binary search tree?(y/n)\n");
	char choice;
	scanf("%c",&choice);
	while(choice=='y')
	{
		int data;
		printf("Enter data that you wanna store:");
		scanf("%d",&data);
		root=insert(root,data);
		printf("Wanna enter more?(y/n)\n");
		scanf(" %c",&choice);
	}
	printf("Your inorder traversal of tree is:\n");
	print(root);
	printf("\n");
	return 0;
}
