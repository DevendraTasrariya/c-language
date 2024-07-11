#include<stdio.h>
#include<conio.h>
#define PI 3.14
main()
{
	int r;
	int area;
	clrscr();

	printf("Enter the vulue of radius :");
	scanf("%d",&r);

	area = PI*r*r;
	printf("Area of circle is : %d",area);

	getch();
}