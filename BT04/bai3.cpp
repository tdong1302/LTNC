#include <iostream>
using namespace std;

int main() {
  int n; cin>>n;
  int a[10] = {0};

  for(int i=0;i<n;i++){
    int x; cin>>x;
    a[x]++;
  }
  for(int i=0;i<10;i++) {
    cout<<i<<" "<<a[i]<<endl;
  }
}
