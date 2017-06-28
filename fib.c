#include<stdio.h>
 int main()
{
   int n, f = 0, s= 1, nx, c;
 
   printf("Enter the number of terms\n");
   scanf("%d",&n);
 
   printf("First %d terms of series are :-\n",n);
 
   for ( c = 0 ; c < n ; c++ )
   {
      if ( c <= 1 )
         nx = c;
      else
      {
         nx = f + s;
         f = s;
         s = nx;
      }
      printf("%d\n",nx);
   }
 }
