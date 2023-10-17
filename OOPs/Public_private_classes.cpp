#include<iostream>
using namespace std;
 //CLASS
 class Employee{
    //Private variable
    private:
    int a,b,c;
    public:
    int d,e;
    void setData(int a1,int b1,int c1);
    void getData(){
        cout<<"value of a is "<<a<<endl;
        cout<<"Value of b is "<<b<<endl;
        cout<<"Value of c is "<<c<<endl;
        cout<<"Value of d is "<<d<<endl;
        cout<<"Value of e is "<<e<<endl;
    }
 };
 
 void Employee::setData(int a1,int b1,int c1){
     a=a1;
     b=b1;
     c=c1;
 }
 
//Main function
int main(){
    Employee harry;
    // harry.a=3244;   (throw error cuz 'a' is private in Employee class)
    harry.d=32;
    harry.e=2345;
    harry.setData(1,56,43);
    harry.getData();
    
    
}
