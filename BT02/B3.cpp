#include <iostream>
using namespace std;
int main(){
    int a1,a2,a3;
    cin>>a1>>a2>>a3;
    if(a1+a2>a3&&a1+a3>a2&&a2+a3>a1){
        cout<<a1+a2+a3<<endl;
        if(a1*a1+a2*a2==a3*a3||a1*a1+a3*a3==a2*a2||a2*a2+a3*a3==a1*a1){
            cout<<"vuong";
        } else
        if(a1==a2&&a1==a3){
            cout<<"deu";
        } else
        if(a1==a2||a2==a3||a1==a3){
            cout<<"can";
        } else
        cout<<"thuong";
    } else
    cout<<"Invalid";
}
