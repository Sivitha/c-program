#include<stdio.h>
void main()
{
int leap;
printf("enter the year");
scanf("&d",&year);
if(year%4==0)
printf("this is leap year");
else if(year%100==0)
printf("this is not leap year");
else if(year%4==0)
printf("leap year");
else
printf("this is not leap year");
}
