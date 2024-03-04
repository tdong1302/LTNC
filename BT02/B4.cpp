#include <iostream>
using namespace std;
int main(){
    int x,y; cin>>x>>y;
    int s1=x,s2=y;
    while(y!=0){
        int temp=y;
        y=x%y;
        x=temp;
    }
    cout<<(s1*s2)/x;
}
