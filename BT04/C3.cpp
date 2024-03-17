#include <iostream>
using namespace std;
bool sodoiguong(int n){
	int sogoc=n;
	int s=0;
    while(n){
        int m;
		m=n%10;
		s=s*10+m;
		n/=10;
	}
	return s==sogoc;
}
int main() {
     int T;
     cin>>T;
	 while(T--){
		int a,b; cin>>a>>b;
		int dem=0;
		for(int i=a;i<=b;i++){
		if(sodoiguong(i)){
			dem++;
		}
	  }
	  cout<<dem<<endl;
	 }
}
