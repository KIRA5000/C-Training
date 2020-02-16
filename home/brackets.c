#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct node
{
	char data;
	struct node *next;
};
struct node *head=NULL;
struct node *tail=NULL;
void insert(char data)
{
	if(head==NULL)
	{
		head=(struct node *)malloc(sizeof(struct node));
		head->data=data;
		head->next=NULL;
		tail=head;
	}
	else
	{
		struct node* ndata=(struct node *)malloc(sizeof(struct node));
		ndata->data=data;
		ndata->next=NULL;
		tail->next=ndata;
		tail=ndata;
	}
}
char check()
{
	return tail->data;
}
void delete()
{
	if(head->next!=NULL)
	{
		struct node *temp=head;
		while(temp->next!=tail)
		{
			temp=temp->next;
		}
		free(tail);
		tail=temp;
		tail->next=NULL;
	}
	else
	{
		struct node *temp=head;
		head=head->next;
		free(temp);
	}
}
int main(void)
{
	char str[100];
	printf("Enter a string of brackets\n");
	scanf("%s",str);
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]=='['||str[i]=='{'||str[i]=='(')
		{
			insert(str[i]);
		}
		else if(str[i]==']'||str[i]=='}'||str[i]==')')
		{

			if(str[i]==')')
			{
				if(check()=='(')
				{
					delete();
				}
				else
				{
					break;
				}
			}
			else if(str[i]==']')
                        {
                                if(check()=='[')
                                {
                                        delete();
                                }
				else
				{
					break;
				}
                        }

			else if(str[i]=='}')
                        {
                                if(check()=='{')
                                {
                                        delete();
                                }
				else
				{
					break;
				}
                        }
		}
	}
	printf("Now let's check if your string is balanced or not\n");
	if(head==NULL)
	{
		printf("The string is balanced\n");
	}
	else
	{
		printf("String is not balanced\n");
	}
	return 0;
}
