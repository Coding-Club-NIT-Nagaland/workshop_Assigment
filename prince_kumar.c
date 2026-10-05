#include <stdio.h>
int main() {
int a;
long long b=1;
printf("Enter a number:");
scanf("%d", &a);
for(int i=1; i<=a; i++) {
b= b*i;
}
printf("The factorial of %d is %lld", a,b);
return 0;
}
