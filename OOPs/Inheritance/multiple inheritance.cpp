#include<iostream>
using namespace std;

//Base1 
class Base1{
    protected:
    int base1int;
    
    public:
    void set_Base1int(int i){
        base1int=i;
    }
};

//Base2
class Base2{
    protected:
    int Base2int;
    
    public:
    void set_Base2int(int j){
        Base2int=j;
    }
};

//Base3
class Base3{
    protected:
    int Base3int;
    
    public:
    void set_Base3int(int k){
        Base3int=k;
    }
    
};

//Derived class
class derived  : public Base1, public Base2,public Base3{
    public:
    void show(){
    cout<<"the value of Base1 is "<<base1int<<endl;
    cout<<"the value of Base2 is "<<Base2int<<endl;
    cout<<"the value of Base3 is "<<Base3int<<endl;
    cout<<"The sum of these values are "<<Base3int+Base2int+base1int<<endl;
    }
};

//main function
int main(){
    derived d;
    d.set_Base3int(32);
    d.set_Base2int(22);
    d.set_Base1int(12);
    d.show();
}









