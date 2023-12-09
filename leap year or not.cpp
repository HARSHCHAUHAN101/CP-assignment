#include <stdio.h>
int main()
{
	int n;
	printf("enter the no of days in this year:- ");
	scanf("%d",&n);
	if(n==365)
	{
		printf("this year is not leap year",n);
	}
	else if(n==363)
	{
		printf("this is  a leap year ",n);
	}
	else  
	{
		printf("enter valid no of days in this year");
	}
	return 0;
}

