#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    bool check[10001]={false};
    bool kiemtra=false;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        if(check[x]){
            kiemtra=true;
            break;
        } else
        check[x]=true;
    }
    if(kiemtra){
        cout<<"Yes";
    } else
    cout<<"No";
}
