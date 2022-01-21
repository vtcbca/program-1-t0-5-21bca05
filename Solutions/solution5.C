/* Write a program to enter any number and check it is prime number or not
Date:24/12/2021*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int no,i,c=0;
	clrscr();
	printf("\n Enter value for no:");
	scanf("%d",&no);
	for(i=2;i<no;i++)
	{
		if(no%i==0)
		c=1;
		   break;
	}
	if(c==1)
			printf("\n number is not prime");
	else
			printf("\n Number is prime");
	getch();
}
