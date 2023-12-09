# include <stdio.h>
int main()
{
	int n,m,l;
	printf("enter the lsat no till which you want to print prime no:- ");
	scanf("%d",&n);
	printf("\n\n\t\t\t\t\tAll prime no between 1 to %d\t\t\t\t\t",n);
	for(int i=1;i<=n;i++)
	{
		m=i;
		l=0;
		for(int j=2;j<m;j++)
		{
			if(m%j==0)
			{
				l=1;
				break;
			}
		}
	
	if(l==0)
	{
		printf("\n%d",i);
	}
}
return 0;
}
