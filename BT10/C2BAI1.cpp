#include <iostream>
using namespace std;
char* delete_char(const char a[], char c) {
    int n=0;
    while(a[n]!='\0'){
            n++;}
    char* result=new char[n+1];

    int x=0;
    for(int i=0;a[i]!='\0';i++) {
        if(a[i]!=c){
            result[x++]=a[i];
        }
    }
    result[x]='\0';
    return result;
}

int main() {
    const char a[] = "Hello World";
    char c = 'o';
    char* s = delete_char(a, c);
    cout<<s<<endl;
    delete[] s;
    return 0;
}
