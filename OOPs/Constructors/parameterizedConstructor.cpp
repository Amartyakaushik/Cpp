#include<iostream>
using namespace std;

//class
class Complex{
    int a;
    int b;
    
    public:
    //parameterized constructor
    Complex(int,int);
    
    void displaydata(){
        cout<<"The complex number is "<<a<<" + "<<b<<"i"<<endl;
    }
    
};

//constructor defination
Complex::Complex(int x,int y){
    a=x;
    b=y;
}

//Main function
int main(){
    Complex c1=Complex(23,34);
    Complex c2(23,654);
    
    c1.displaydata();
    c2.displaydata();
}