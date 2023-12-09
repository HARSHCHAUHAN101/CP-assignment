#include <stdio.h>
int main ()
{
	int n,count=0;
	printf("enter the no :- ");
	scanf("%d",&n);
	do{
		n/=10;
		count++;
	}while(n!=0);
	printf("no of the digits is:- %d",count);
	return 0;
}
