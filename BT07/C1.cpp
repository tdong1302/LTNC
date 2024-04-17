#include <bits/stdc++.h>
using namespace std;
void reverse1(char a[]){
    int n = 0;
    for(int i = 0; a[i] != '\0'; i++){
        n++;
    }
    int l = 0, r = n-1;
    while(l < r){
        char c = a[l];
        a[l] = a[r];
        a[r] = c;
        l++; r--;
    }
}
int main(){
    char a[] = "Hello World";
    reverse1(a);
    cout << a << endl;
    return 0;
}
