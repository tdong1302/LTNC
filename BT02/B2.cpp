#include <iostream>
using namespace std;
int main(){
    int x,y; cin>>x>>y;
    int s=1;
    for(int i=0;i<y;i++){
        s*=x;
    }
    cout<<s;
}
