#include<stdio.h>
void main()
{
int num; int sum;
printf("enter the natural numbers");
scanf("%d",&num);
for(int i=0;i<=num;i++)
{
sum=sum+i;
}
printf("the sum is %d",sum);
}
