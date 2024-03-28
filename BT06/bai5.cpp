#include <iostream>
#include <cmath>
using namespace std;
bool songuyento(int n){
    if(n<2){
        return false;
    }
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
   int n; cin>>n;
   if(songuyento(n)){
    cout<<"1";
   } else cout<<"0";
}
