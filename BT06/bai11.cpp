#include <iostream>
#include <vector> 1010 0101
#include <algorithm>
using namespace std;
void doinhiphan(int n){
    if(n==0) cout<<0;
    vector<int> a;
    while(n!=0){
        int m;
        m=n%2;
        n/=2;
        a.push_back(m);
    }
  reverse(a.begin(), a.end());
    for(int x:a){
        cout<<x;
    }
}
int doithapphan(string n){
    string m; int len=n.length();
    for(int i=len-1;i>=0;i--){
        m+=n[i];
    }
    int s=0;
    int power=1;
    for(char x:m){
        int x1=x-'0';
        s+=x1*power;
        power*=2;
    }
    return s;
}
int main(){
    int N;
    cin>>N;
    doinhiphan(N);
    cout<<endl;
    string a;
    cin>>a;
    cout<<doithapphan(a);
}
