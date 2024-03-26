#include <iostream>
using namespace std;
int main(){
    int n; cin>>n;
    int minn=INT_MAX;
    int maxx=INT_MIN;
    int dem=0,s=0;
    while(n--){
        int x; cin>>x;
        if(x<minn) minn=x;
        if(x>maxx) maxx=x;
        if(x%2==0) s+=x;
        if(x%2!=0) dem++;
    }
    cout<<"min "<<minn<<endl<<"max "<<maxx<<endl<<"tongchan "<<s<<endl<<dem;
}
