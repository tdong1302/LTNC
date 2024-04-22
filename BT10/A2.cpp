#include <iostream>
using namespace std;
int main(){

int* p = new int;

int* p2 = p;

*p = 10;

delete p;

*p2 = 100;      //lỗi:p2 trỏ đến địa chỉ đã được giải phóng

cout << *p2;     //dòng trên sai nên dòng này cũng sai

delete p2;       //p2 trỏ đến địa chỉ đã được giải phóng
}
