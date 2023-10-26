#include<iostream>
using namespace std;

class Base1{
    int data;
    
    public:
    Base1(int x){
        cout<<"The constructor of Base1 is called"<<endl;
        data=x;
    }
    
    void getDataBase1(void){
        cout<<"The value of data is "<<data<<endl;
    }
};

class Base2{
    int data;
    
    public:
    Base2(int y){
        cout<<"The constructor of Base2 is called"<<endl;

        data=y;
    }
    
    void getDataBase2(void){
        cout<<"The value of data is "<<data<<endl;
    }
};


class Derived:public Base2,public Base1{
    int derived1,derived2;
    
    public:
    Derived(int a,int b,int c,int d):Base1(a),Base2(b){
        cout<<"The constructor of Derived is called"<<endl;
        derived1=c;
        derived2=d;
    }
    
    void getDataDerived(void){
        cout<<"The value of derived1 is "<<derived1<<endl;
        cout<<"The value of derived2 is "<<derived2<endl;
    }
};


//Main function
int main(){
    Derived db(12,13,14,15);
    
    db.getDataBase2();
    db.getDataBase1();
    
    db.getDataDerived();













