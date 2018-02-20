#include<stdio.h>
int main()
{
	int n;
	printf("enter the no");
	scanf("%d",&n);
	if(n>0)
	{
		printf("no is positive");
	}
	else if(n<0)
	{
		printf("the no is negative");
	}
	else
	{
		printf("no is zero");
	}
	
}
