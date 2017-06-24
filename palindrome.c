#include <stdio.h>
int main()
{
    int n, r = 0, re, o;

    printf("Enter an integer: ");
    scanf("%d", &n);
    o = n;
       while( n!=0 )
    {
        r = n%10;
        r = *10 + r;
        n /= 10;
    }
        if (o == r)
        printf("%d is a palindrome.", o);
    else
        printf("%d is not a palindrome.", o);
       }
