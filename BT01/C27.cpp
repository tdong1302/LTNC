#include <iostream>
using namespace std;
int main(){
    while(true){
        int n; cin>>n;
        if(n==-1){
            cout<<"Bye"<<endl;
            break;
        }
        int kqua=(n>=0&&n%5==0)?(n/5):-1;
        cout<<kqua<<" "<<endl;
    }
}




