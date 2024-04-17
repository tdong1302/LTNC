#include <iostream>
using namespace std;
void *catxau(char a[], char c){
    int n = 0;
    for(int i = 0; a[i] != '\0'; i++){
        n++;
    }
    char *result = new char[n+1];
    int cnt = 0;
    for(int i = 0; a[i] != '\0'; i++){
        if(a[i] != c){
            result[cnt++] = a[i];
        }
    }
    char x[cnt+1];
    for(int i = 0; i < cnt; i++){
        x[i] = result[i];
    }
    cout << x;
    delete []result;
}
int main(){
    char a[] = "Hello World";
    char c = 'l';
    catxau(a, c);
    return 0;
}
