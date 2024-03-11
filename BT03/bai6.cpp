#include <iostream>
using namespace std;
struct Rect{
    int x,y,w,h;
};
struct Ship{
    Rect p;
    string id;
    int dx,dy;
};
void move(Ship &thuyen){
    thuyen.p.x+=thuyen.dx;
    thuyen.p.y+=thuyen.dy;
}
void display(const Ship&ship){
    cout<<ship.id<<endl<<ship.p.x<<" "<<ship.p.y<<" ";
}
void nhap(Ship&thuyen){
    cin>>thuyen.p.x>>thuyen.p.y>>thuyen.p.w>>thuyen.p.h>>thuyen.id>>thuyen.dx>>thuyen.dy;
}
int main(){
    Ship p;
    nhap(p);
    move(p);
    display(p);
}
