#include <iostream>
using namespace std;
int main(){
    int nam;
    cin>>nam;
    if(nam<=0){
        cout<<"false";
    }
    if(nam%400==0||(nam%4==0&&nam%100!=0)){
          cout<<"true";
    } else
    cout<<"false";
}

