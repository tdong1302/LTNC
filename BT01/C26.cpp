#include <iostream>
#include <climits>
using namespace std;
int main(){
    int minn=INT_MAX;
    int maxx=INT_MIN;
    double s=0;
    int n; cin>>n;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        s+=x;
        if(x<minn){
            minn=x;
        }
        if(x>maxx){
            maxx=x;
        }
    }
    cout<<"Mean: "<<s/n<<endl<<"Max: "<<maxx<<endl<<"Min: "<<minn;
}



