#include<iostream>
using namespace std;

class Complex{
    int a,b;
    public:
    void setData(int v1,int v2){
        a=v1;
        b=v2;
    }
    
    void printNum(){
        cout<<"The complex number is "<<a<<" + "<<b<<"i"<<endl;
    }
    //Constructor declaration
    Complex (void);
};

//Constructo defination
Complex :: Complex(void){
    a=8;
    b=9;
}

int main(){
    Complex c1,c2;

    
    c1.printNum();
    c2.printNum();
}

//Characteristics of Constructors
/*
1) It should be declared in the public section of the class
2) They automatically invoked whenever the object is created
3)They cannot return value and so, do not have return types
4) It can have default arguments
5) we cannot refer to their address
*/