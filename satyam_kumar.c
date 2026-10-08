// factorial of a number
#include <stdio.h>
int main()
{
    int n, i, c;
    printf("enter value of n");
    scanf("%d", &n);
    c = 1;
    for (i = 1; i <= n; i++)
    {
        c = c * i;
    }
    printf("%d", c);
    return 0;
}