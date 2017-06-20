#include<stdio.h>
void main()
{
int a,b,c;
printf("enter the values of 3 no's");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
printf("A is larger");
else if(b>a&&b>c)
printf("B is larger");
else
printf("C is larger");
}
