#include<iostream>
using namespace std;

//Ambiguity Resolution

//1st method of Ambiguity Resolution

class Base1{
    public:
    void greet(){
        cout<<"Hello! Good morning"<<endl;
    }
};

class Base2{
    public:
    void greet(){
        cout<<"Kaise ho!!"<<endl;
    }
};

class Derived : public Base1, public Base2{
    int a;
    public:
    void set_a(int b){
        a=b;
    }
    
    void greet(){
        Base2::greet();
    }
};

//2nd method of Ambiguity Resolution

class Bs{
    public:
    void say(){
        cout<<"Hello world!"<<endl;
    }
};

class drv:public Bs{
    public:
    void say(){
        cout<<"Kem choo!"<<endl;
    }
};

//main function
int main(){
    Base1 B;
    Base2 C;
    Derived D;
    
    //1st method of Ambiguity Resolution
    B.greet();
    C.greet();
    D.greet();
    
    //2nd method of Ambiguity Resolution
    drv d2;
    d2.say();
    
}