#include <stdio.h>
 int main()
{
  int a, n, fac = 1;
 
  printf("Enter a no to calculate \n");
  scanf("%d", &n);
 
  for (a = 1; a <= n; a++)
    fac = fac * a;
 
  printf("Factorial of %d = %d\n", n, fac);
 
}
