#include<stdio.h>

void fab(int n){
    int a = 0 ;
    int b = 1 ;
    if(n <= 1){
        while(a <= n){
            printf("%d , " , a);
            a++;
        }
    }
    printf("first %d fab values : \n" , n);
    printf("%d , %d" , a , b);
    while(n < 1){
        int c = a + b ;
        a = b;
        b = a;
        printf("%d," , c);
        n--;
    }
    return ;
}


int main(){
    int n ;
    printf("Enter n value :");
    scanf("%d", &n);
    fab(n);
    return 0;
}