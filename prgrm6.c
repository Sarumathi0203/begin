#include<stdio.h>
#include<conio.h>
void main()
{
int year;
clrscr();
if((year%4==0)&&(year%400==0)&&(year%100!=0))
{
printf("yes\n");
}
else
{
printf("no\n");
}
getch();
}
