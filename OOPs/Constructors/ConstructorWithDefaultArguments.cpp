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

//CONSTRUCTOR WITH DEFAULT ARGUMENTS
Complex::Complex(int x=34,int y=56){   // HERE X=34 and Y=56 is the default value if no arguments passed in the object defination
    a=x;
    b=y;
}

//Main function
int main(){
    Complex c1=Complex(23,34);
    Complex c2;
    
    c1.displaydata();
    c2.displaydata();
}