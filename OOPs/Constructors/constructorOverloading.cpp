#include<iostream>
using namespace std;

//class
class Complex{
    int a;
    int b;
    
    public:
    //parameterized constructor
    Complex(int,int);
    Complex(int);
    Complex(void);
    
    void displaydata(){
        cout<<"The complex number is "<<a<<" + "<<b<<"i"<<endl;
    }
    
};

//constructor defination
Complex::Complex(int x,int y){
    a=x;
    b=y;
}

Complex::Complex(int x){
    a=x;
    b=0;
}

Complex::Complex(void){
    a=0;
    b=0;
}

//Main function
int main(){
    Complex c1=Complex(23,34);
    Complex c2(23);
    Complex c3;
    
    c1.displaydata();
    c2.displaydata();
    c3.displaydata();
}