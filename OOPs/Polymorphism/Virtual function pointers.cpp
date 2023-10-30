#include<iostream>
using namespace std;

//Pointer to derived class
//VIRTUAL 
class Base{
    public:
    int var_base=01;
    //Virtual function  -> used to indicate that pointer of this  will invoke members of those class to whom it's pointing...
    virtual void display(){ 
        cout<<"The value of var_base is "<<var_base<<endl;
    }
};

class Derived:public Base{
    public:
    int var_derived=02;
    void display(){
        cout<<"The value of var_derived is "<<var_derived<<endl;
        cout<<"The value of var_base is "<<var_base<<endl;
    }
};

//main function
int main(){
    Base obj_base;
    Derived obj_derived;
    Base * base_class_pointer;
    
    base_class_pointer=&obj_derived;    // Pointer of Base class can be used to point Derived class 
    base_class_pointer->var_base=23;
    // base_class_pointer-->var_derived=34;         // but has no access to Derived class members
    base_class_pointer->display();                 // but can invoke members of Derived class  (virtual function)
    
}































