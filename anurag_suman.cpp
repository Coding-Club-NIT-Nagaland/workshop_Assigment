
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter your desired number : ";
    cin>>n;

    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<"Non-Prime"<<endl;
            return 0;
        }
    }
    cout<<"Prime";
    return 0;
}