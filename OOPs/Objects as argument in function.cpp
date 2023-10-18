#include<iostream>
using namespace std;

//Passing objects as function argument
class complex{
    int a;
    int b;
    
    public:
    void setcomplexdata(int v1,int v2){
        a=v1;
        b=v2;
    }
    
    void setdatabysum(complex o1,complex o2){
        a=o1.a + o2.a;
        b=o1.b + o2.b;
    }
    
    void printnum(){
        cout<<"the value of complex number is"<<a<<"+"<<b<<"i"<<endl;
    }
};

//Main function
int main(){
    complex c1,c2,c3;
    c1.setcomplexdata(1,2);
    c1.printnum();
    
    c2.setcomplexdata(12,13);
    c2.printnum();
    
    c3.setdatabysum(c1,c2);
    c3.printnum();
}