///////////////// cach 2 : ko dung ceil va floor
#include <iostream>
#include <cmath>
int rnd(double x){
    if(x>0){
        int s=x;
    if(x-s>=0.5){
        return s+1;
    }
    return s;}
    if(x<0){
       x=-x;
    int s=x;
        if(x-s>=0.5){
        return -(s+1);
    }
    return -s;
    }
}
using namespace std;
int main(){
    double x; cin>>x;
    cout<<rnd(x);
}

