#include<stdio.h>
int main()
{
	float f=3.14;
	double d=3.14;
	if(f<3.14)
	{
		printf("If executed\n");
	}
	else
		printf("Else executed\n");

	printf("%.10f\n",f);
	f=0.7;
	printf("%.10f\n",f);
		//printf("%d\t%d\t%d\t%d\n",sizeof(f), sizeof(d), sizeof(3.14), sizeof(3.14f));

	
	return 0;
}
