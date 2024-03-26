#include <iostream>
using namespace std;
int main(){
    int n; cin>>n;
    int a[100];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    double tb;
    double s1=0;
    for(int i=0;i<n;i++){
        s1+=a[i];

    }
    tb=s1/n;
    cout<<"gia tri trung binh "<<tb<<endl;
    double s2=0;
    for(int i=0;i<n;i++){
        s2+=(a[i]-tb)*(a[i]-tb);
    }
    cout<<"gia tri phuong sai "<<s2/n;
}
