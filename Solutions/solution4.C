/* Write a program to enter any number and check it is armstrong or not
   Date:27-12-2021*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,r,i=0,a;
	clrscr();
	printf("\n Enter value for n:");
	scanf("%d",&n);
	a=n;
	while(n>0)
	{
		r=n%10;
		i=i+(r*r*r);
		n=n/10;
	}
	if(a==i)
		printf("\n Number is  armstrong number");
	else
		printf("\n Number is not armstrong number");
	getch();
}
