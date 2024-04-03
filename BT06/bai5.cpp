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
void cacsonguyentonhohon(int n){
    for(int i=2;i<n;i++){
        if(songuyento(i)){
            cout<<i<<" ";
        }
    }
}
int main(){
   int n; cin>>n;
   if(songuyento(n)){
    cout<<"1";
   } else cout<<"0";
   cout<< endl;
   cacsonguyentonhohon(n);
}
