# include <stdio.h>
int main()
{
	int n1,n2,n3;
	printf("enter first no:- ");
	scanf("%d",&n1);
	printf("enter second no:- ");
	scanf("%d",&n2);
	printf("enter third no:- ");
	scanf("%d",&n3);
	if(n1>n2&&n1>n3)
	{
		printf("%d is the largst no",n1);
	}
	if(n2>n1&&n2>n3)
	{
		printf("%d is the largst no",n2);
	}
	if(n3>n1&&n3>n2)
	{
		printf("%d is the largst no",n3);
	}
	return 0;
}
