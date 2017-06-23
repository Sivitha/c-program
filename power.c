#include <stdio.h>
int main()
{
    int b,p;
    int r = 1;

    printf("Enter a number: ");
    scanf("%d", &b);

    printf("Enter a power: ");
    scanf("%d", &p);

    while (p != 0)
    {
        r=b;
      --p;
    }

    printf("Answer = %d", r);

    return 0;
}
