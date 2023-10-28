#include<iostream>
using namespace std;

//Pointer to derived class
class Base{
    public:
    int var_base;
    void display(){
        cout<<"The value of var_base is "<<var_base<<endl;
    }
};

class Derived:public Base{
    public:
    int var_derived;
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
    base_class_pointer->display();                 // also cannot invoke members of Derived class
    
    
    Derived *derived_class_pointer;
    // derived_class_pointer=&obj_base;        //  Pointer of Derived class cannot  be used to point Base class 
    derived_class_pointer=&obj_derived;
    derived_class_pointer->var_base=2654;       // but has  access to Base class members
    derived_class_pointer->var_derived=23454;
    derived_class_pointer->display();         // also cannot invoke members of Base class
}































