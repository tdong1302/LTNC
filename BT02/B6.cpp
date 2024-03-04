#include <iostream>
using namespace std;
int main(){
    int x,y;
    char ch;
     cin>>x>>ch>>y;
    int s1=x,s2=y;
    while(y!=0){
        int temp=y;
        y=x%y;
        x=temp;
    }
    cout<<s1/x<<"/"<<s2/x;
}


