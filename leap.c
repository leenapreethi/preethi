#include<stdio.h>
#include<conio.h>
int main()
{
int year;
printf("enter the year:");
scanf("%d",&year);
if(year%4==0)
{
printf("%d is leap year",year);
}
else
{
printf("%d not an leap year",year);
}
return 0;
getch();
}
