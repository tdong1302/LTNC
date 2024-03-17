#include <iostream>
using namespace std;
int a1[5]; //cau a

//int b1[3]={1,2,3,4};//caub bi loi
int b2[5]={1,2,3,4};//caub

int c1[]={1,2,3,4};
int main(){
   int a2[5]; //cau a
  // int b3[3]={1,2,3,4};//caub bi loi
   int b4[4]={1,2,3,4};//caub
  int c2[]={1,2,3,4};
  for(int i=0;i<5;i++){
    cout<<a2[i]<<" ";
  }
   cout<<endl;

  for(int i=0;i<4;i++){
    cout<<b4[i]<<" ";
  }
   cout<<endl;

 for(int i=0;i<4;i++){
   cout<<c2[i]<<" ";
  }
}
