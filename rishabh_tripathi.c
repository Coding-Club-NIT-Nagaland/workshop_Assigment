#include <stdio.h>
int main ()
{
    int x;
    long int y=1;
    printf("enter a value");
    scanf("%d",&x);
    int i;
    for(i=1;i<=x;i++)
{
    y=y*i;
}
printf("factorial:- %ld",y);
return 0;
}