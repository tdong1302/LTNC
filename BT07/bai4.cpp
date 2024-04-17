#include <iostream>
using namespace std;
bool timkiem(int *a,int n,int x){
    int l=0,r=n-1;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(*(a+mid)==x){
            return true;
        } else
        if(*(a+mid)<x){
            l=mid+1;
        } else
        r=mid-1;
    }
    return false;
}
int main(){
    int a[] = {1,2,3,4,5,6,7,8,10};
    int n = 6;
    int x = 9;
    if(timkiem(a, n, x)){
        cout<<"YES";
    } else
    cout<< "NO";
}
