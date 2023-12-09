# include <stdio.h>
int main()
{
	int n,sum=0,sum_n=0;
	printf("enter your no:- ");
	scanf("%d",&n); 
	while (n>0)
	{
		sum= sum+(n%10);
		n= n/10;
		
	}
	while (sum>0)
	{
		sum_n=sum_n+(sum%10);
		sum=sum/10;
	}
	printf("sum of the digits of the number is: - %d",sum_n);
	return 0;
	
}
