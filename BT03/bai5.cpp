#include <iostream>
using namespace std;
struct Point{
    int x,y;
};
struct Rect{
    int x,y,w,h;
    bool contains(const Point &p){
    if(p.x>=x&&(p.y>=y)&&p.x<=x+w&&p.y<=y+h){
        return true;
    } else
    return false;
}
};
void nhap(Point &p){
    cin>>p.x>>p.y;
}
int main(){
    Rect hcn;
    cin>>hcn.x>>hcn.y>>hcn.w>>hcn.h;
    Point p;
    nhap(p);
    cout<<hcn.contains(p);
}
