#include <iostream>
using namespace std;
int main(){
    string n;
    getline(cin,n);
    int len=n.length();
    for(int i=0;i<len;i++){
        if(n[i]!=n[len-i-1]){
            cout<<"No";
            return 0;
        }
    }
    cout<<"Yes";
}
