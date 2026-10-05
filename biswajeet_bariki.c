#include <stdio.h>
// HI
int main(){
    int last=1,secondLast=0,m,n;
    printf("Enter the number of terms you want to see in fibonanci series: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        if(i==0 || i==1){
            printf("%d\n",i);
            continue;
        }
        printf("%d\n",last+secondLast);
        m=last;
        last += secondLast;
        secondLast = m;
    }
    return 0;
}
