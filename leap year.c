#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("\n enter a year");
scanf("%d",&a);
if(a%400==0)||(a%100==0)&&(a%4==0)
{
printf("\n %d is a leap year");
}
else
{
printf("\n not leap year");
}
getch();
}
