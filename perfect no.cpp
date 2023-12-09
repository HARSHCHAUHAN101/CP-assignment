#include<stdio.h>
int main ()
{
	int n;
	printf("enetr the number:- ");
	scanf("%d",&n);
	int sum=0,c;
	c=n;
	for(int i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum+=i;
		}
	}
	if(sum==c)
	{
		printf("%d number is perfect no",c);
	}
	else
	{
		printf("%d number is not perfect no.",c);
	}
}
