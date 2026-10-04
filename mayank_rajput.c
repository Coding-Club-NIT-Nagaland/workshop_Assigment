// program to calculate factorial of positive integers

#include<stdio.h>

int factorial(int num){
    int fact=1;
    for(int i=1; i<=num; i++){
        fact=fact*i;
    }
    return fact;
}

int main(){
    int n;
    printf("enter the number :");
    scanf("%d",& n);
    int answer=factorial(n);
    printf("the factorial of %d is %d",n,answer);

    return 0;
}