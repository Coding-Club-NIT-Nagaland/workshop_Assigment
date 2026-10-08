#include <stdio.h>
int main(){
    int f=0,i,n;
    printf("Enter your number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i == 0)
            f++;
    }
    if(f==2)
        printf("The number is prime.");
    else
        printf("The number is not prime.");
    return 0;
}