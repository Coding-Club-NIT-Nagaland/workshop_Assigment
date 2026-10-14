/*Factorial Calculator*/

#include <stdio.h>

int main (){
    int number, factorial;
    printf("ENTER YOUR NUMBER : ");
    scanf("%d", &number);

    factorial = 1;
    if(number<0){
        printf("YOUR ENTERED NUMBER IS INVALID");
    }
    else{
    for(int i = 1; i<=number; i++){
        factorial = factorial*i;
    }
    printf("THE FACTORIAL OF is %d is %d", number,factorial);
}
    return 0 ;
}