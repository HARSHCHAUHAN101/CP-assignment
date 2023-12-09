# include <stdio.h>
int main ()
{
	int n;
	printf("enter  the no whose table you want :- ");
	scanf("%d",&n);
	for(int i=1;i<=10;i++)
	{
		printf("%d*%d=%d\n",n,i,n*i);
	}
	return 0;
}
