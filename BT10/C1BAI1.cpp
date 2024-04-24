#include <iostream>
using namespace std;
char* reverse1(const char a[]){
    int len=0;
    while(a[len]!='\0') {
        len++;
    }
    char* b=new char[len+1];
     for(int i=0;i<len;i++){
        b[i]=a[len-1-i];
    }
    b[len]='\0';
    return b;
}
int main(){
    char *a="Hello World";
    char* anew=reverse1(a);
    cout<<anew<<endl;
    delete []anew;
    return 0;
}

