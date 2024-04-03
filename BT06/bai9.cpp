#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int songaunhiennhohon(int n){
    int x=rand();
    x=(x*n)/RAND_MAX;
    return x;
}
int main(){
    srand(time(NULL));
    int n; cin>>n;
    cout<<songaunhiennhohon(n);
}
