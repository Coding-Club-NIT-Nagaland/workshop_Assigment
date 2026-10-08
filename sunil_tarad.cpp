// Option A: Prime Number Checker


#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"enter number";
    cin>>num;
    int count=1;

    for(int i=2;i<num;i++){
        count*=(num%i);

    }if(count==0){
        cout<<"non prime";
    }else{
        cout<<"prime";
    }
     
    return 0;
}