#include<iostream>
using namespace std;

//SINGLE LEVEL
class Employee{
    public: 
    int id;
    float salary=45.5;
    
    Employee();
};

//derived class
class Programmar:public Employee{
    public:
    int langCode=9;
    Programmar(int);
    
    void show(){
        cout<<id<<endl;
    }
};
Programmar::Programmar(int inpid){
    id=inpid;
}

//main function
int main(){
    Employee P1;
    P1.id=23;
    cout<<P1.id<<endl;
    
    Programmar p2(12);
    p2.show();
}
