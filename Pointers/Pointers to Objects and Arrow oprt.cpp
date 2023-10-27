#include<iostream>
using namespace std;

//Pointers to object
class Complex{
    int real;
    int imaginary;
    
    public:
    void setData(int i,int j){
        real=i;
        imaginary=j;
    }
    
    void getData(){
        cout<<"Real: "<<real<<endl;
        cout<<"Imaginary:"<<imaginary<<endl;
    }
};

int main(){
    // Complex c1;
    // Complex (*ptr) = &c1;
    
    Complex (*ptr)=new Complex;
    (*ptr).setData(23,2343);
    // (*ptr)->getData();
    //or
    (ptr)->getData();
}