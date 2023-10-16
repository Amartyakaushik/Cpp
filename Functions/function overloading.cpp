#include<iostream>
using namespace std;
// FUNCTION OVERLOADING

//Volume of cube
int vol(int a){
    return (a*a*a);
}

//Volume of cylinder
int vol(int r,int h){
    return (3.14*r*r*h);
}

//Volume of cuboid
int vol(int l, int b, int h){
    return (l*b*h);
}

int main(){
    int side,length,breadth,height,radius;
    cout<<"enter side: ";
    cin>>side;
    cout<<"enter length: ";
    cin>>length;
    cout<<"Enter breadth: ";
    cin>>breadth;
    cout<<"Enter height: ";
    cin>>height;
    cout<<"Enter radius: ";
    cin>>radius;
    
    cout<<"Volume of cuboid is "<<vol(length,breadth,height);
    cout<<"Volume of cylinder is "<<vol(radius,height);
    cout<<"Volume of cube is "<<vol(side);
}