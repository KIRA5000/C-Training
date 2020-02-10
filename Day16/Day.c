#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int j=0;
	char **day=(char **)malloc(5*sizeof(char *));
	printf("Enter 5 dates int DD-MMM-YYYY format\n");
	int arr[5]={0,0,0,0,0};
	for(int i=0;i<5;i++)
	{
		day[i]=(char *)malloc(15*sizeof(char));
	}
	for(int i=0;i<5;i++)
	{
		scanf("%s",day[i]);
	}
	while(j<5)
	{
		for(int i=7;i<11;i++)
		{
			arr[j]+=day[j][i]-48;
			arr[j]*=10;
		}
		arr[j]/=10;
		j++;
	}
	char str[5];
	j=0;
	while(j<5)
        {
                for(int i=3;i<6;i++)
                {
                        str[i-3]=day[j][i];
                }
		arr[j]*=100;
                if(strcmp(str,"JAN")==0)
                                arr[j]+=1;
                else if(strcmp(str,"FEB")==0)
                                arr[j]+=2;
                else if(strcmp(str,"MAR")==0)
                                arr[j]+=3;
                else if(strcmp(str,"APR")==0)
                                arr[j]+=4;
                else if(strcmp(str,"MAY")==0)
                                arr[j]+=5;
                else if(strcmp(str,"JUN")==0)
                                arr[j]+=6;
                else if(strcmp(str,"JUL")==0)
                                arr[j]+=7;
                else if(strcmp(str,"AUG")==0)
                                arr[j]+=8;
                else if(strcmp(str,"SEP")==0)
                                arr[j]+=9;
                else if(strcmp(str,"OCT")==0)
                                arr[j]+=10;
                else if(strcmp(str,"NOV")==0)
                                arr[j]+=11;
                else if(strcmp(str,"DEC")==0)
                                arr[j]+=12;
		j++;
        }
	j=0;
	while(j<5)
        {
                for(int i=0;i<2;i++)
                {
			arr[j]*=10;
                        arr[j]+=day[j][i]-48;
                }
                j++;
        }
	for(int i=0;i<4;i++)
	{
		int min=arr[i];
		int loc=i;
		for(int j=i+1;j<5;j++)
		{
			if(arr[j]<min)
			{
				min=arr[j];
				loc=j;
			}
		}
		int temp=arr[i];
		arr[i]=arr[loc];
		arr[loc]=temp;
	}
	int arr1[5][8]={{0,0,0,0,0,0,0,0,},{0,0,0,0,0,0,0,0,},{0,0,0,0,0,0,0,0,},{0,0,0,0,0,0,0,0,},{0,0,0,0,0,0,0,0,}};
	for(int i=0;i<5;i++)
	{
		j=0;
		int t=0;
		while(arr[i]!=0)
		{
			int rem=arr[i]%10;
			arr1[i][j++]=rem;
			arr[i]/=10;
		}
	}
	printf("Sorted dates:\n");
	for(int i=0;i<5;i++)
	{
		for(int k=1;k>=0;k--)
		{
			printf("%i",arr1[i][k]);
		}
		printf("-");
		int arr2=0;
		for(int k=2;k<4;k++)
		{
			arr2+=arr1[i][k];
			if(arr2!=0)
			arr2*=10;
		}
		arr2/=10;
		if(arr2==10)
			printf("JAN");
		else if(arr2==20)
			printf("FEB");
		else if(arr2==30)
                        printf("MAR");
		else if(arr2==40)
                        printf("APR");
		else if(arr2==50)
                        printf("MAY");
		else if(arr2==60)
                        printf("JUN");
		else if(arr2==70)
                        printf("JUL");
		else if(arr2==80)
                        printf("AUG");
		else if(arr2==90)
                        printf("SEP");
		else if(arr2==1)
                        printf("OCT");
		else if(arr2==11)
                        printf("NOV");
		else if(arr2==21)
                        printf("DEC");
		printf("-");
		for(int k=7;k>=4;k--)
		{
			printf("%i",arr1[i][k]);
		}
		printf("\n");
	}
	return 0;

}
