#include<iostream>
#include<cmath>
using namespace std;

class SimpleCalculator{
    int a ,b;
    public:
    SimpleCalculator(){
        cout<<"SimpleCalculator Running "<<endl;
    }
    void getSimpleData(){
        cout<<"Enter the value of a:";
        cin>>a;
        cout<<"Enter the value of b:";
        cin>>b;
    }
    
    void performSimpleOpt(){
        cout<<"The value of a + b is"<<a+b<<endl;
        cout<<"The value of a - b is"<<a-b<<endl;
        cout<<"The value of a % b is"<<a%b<<endl;
        cout<<"The value of a / b is"<<a/b<<endl;
        cout<<"The value of a * b is"<<a*b<<endl;
    }
};

class ScientificCalculator{
    int a,b;
    public:
    ScientificCalculator(){
        cout<<"ScientificCalculator Running "<<endl;
        
    }
    void getScientificData(){
        cout<<"Enter the value of a:";
        cin>>a;
        cout<<"Enter the value of b:";
        cin>>b;
    }
    
    void performScientificOpt(){
        cout<<"The value of cos(a) is"<< cos(a) <<endl;
        cout<<"The value of sin(a) is"<< sin(a) <<endl;        
        cout<<"The value of tan(b) is"<< tan(b) <<endl;
        cout<<"The value of exp(b) is"<< exp(b) <<endl;
    }
};

class HybridCalculator:public SimpleCalculator,public ScientificCalculator{
};

//main function
int main(){
    HybridCalculator hb;
    
    hb.getSimpleData();
    hb.performSimpleOpt();
    
    hb.getScientificData();
    hb.performScientificOpt();
}








