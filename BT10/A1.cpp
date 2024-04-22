#include <iostream>
#include <cstring>
using namespace std;
char* concat(const char*a,const char*b){
    int len1=strlen(a),len2=strlen(b);
    int newlen=len1+len2;
    char* c =new char[newlen+1];
    strcpy(c,a); //Chép chuỗi thứ nhất vào đầu mảng động
    strcat(c,b); //Chép/nối chuỗi thứ hai vào cuối mảng
    return c;
}
int main(){
    const char a[]="abc";
    const char b[]="def";
    char*c=concat(a,b);
    cout<<c;
    delete[]c;
}
