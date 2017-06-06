#include<stdio.h>
#include<conio.h>
int main()
{
int n;
printf("enter the integer:");
scanf("%d",&n);
if(n/2==0)
{
printf("%d is even number",n);
}
else
{
printf("%d is odd number",n);
}
return 0;
getch();
}