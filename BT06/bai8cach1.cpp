///////////////// cach 1 : dung ceil va floor
#include <iostream>
#include <cmath>
int rnd(double x){
    if(x==0){
        return x;
    } else
    if(x<0){
        x=-x;
         if(ceil(x)-x>0.5){
    return -floor(x);
    }
    return -ceil(x);
    } else
    if(ceil(x)-x>0.5){
    return floor(x);
    }
    return ceil(x);
}
using namespace std;
int main(){
    double x; cin>>x;
    cout<<rnd(x);
    cout<<endl;

}
