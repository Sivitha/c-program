#include<stdio.h>
void main()
{
int i,n,flag=0;
printf("Enter the number");
scanf("%d",&n);
for(i=2;i<=n/2;++i)
{
if(n/i==0)
{
flag=1;
break;
}
if(flag==0)
printf("the no is prime");
else
printf("the no is not prime");
}}
