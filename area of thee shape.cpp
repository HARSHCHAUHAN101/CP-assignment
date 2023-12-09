# include <stdio.h>
int main()
{
	char area;
	int  a;
	printf("which area you want to calculate \n for area of rectangle type r\n  for area of circle type c \n  for area of triangle type t ");
	scanf("%c",&area);
	switch (area)
	{
		case 'r' :
			int l,b;
			printf("enter the length of the rectangle:- ");
			scanf("%d",&l);
			printf("enter the breath of the rectangle:- ");
			scanf("%d",&b);
			printf("area of the rectangle is:- %d",l*b);
			break;
		case 't' :
		int h,c;
		printf("enter the hight of the triangle:- ");
			scanf("%d",&h);
			printf("enter the base of the triangle:- ");
			scanf("%d",&c);
			printf("area of the triangle is:- %d",(h*c)/2);
				break;
		case 'c' :
			float r,pie=3.14;
		printf("enter the radius of the circle:- ");
			scanf("%f",&r);
			
			printf("area of the circle is:- %.02f",pie*r*r);
				break;		
	}
	return 0;
}
