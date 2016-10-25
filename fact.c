#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int n,fact=1,i;
clrscr();
printf("\n Enter the number to find factorial:");
scanf("%d",&n);
if(n<0)
{
printf("0");
}
for(i=1;i<=n;i++)
{
fact=fact*i;
}
printf("\n %d",fact);
getch();
}
