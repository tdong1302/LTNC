#include <iostream>
using namespace std;
int dem(const char* a, const char* b){
    int n1 = strlen(a);
    int n2 = strlen(b);
    int cnt = 0;
    for(int i = 0; i < n2; i++){
        char c[n1];
        for(int j = 0; j < n1; j++){
            c[j] = b[i+j];
        }
        if(strcmp(a, c) == 0){
            cnt++;
            i+=2;
        }
    }
    return cnt;
}
int main(){
    const char a[] = "acc";
    const char b[] = "abccaccbcabc";
    cout << dem(a, b) ;

}

