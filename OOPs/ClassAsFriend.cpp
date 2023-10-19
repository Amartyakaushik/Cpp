#include<iostream>
using namespace std;

//forward declaration
class Complex;

class Calculator{
    public: 
    int add(int x,int y){
        return x+y;
    }
    
    int sumRealComplex(Complex,Complex);
    int sumComComplex(Complex,Complex);
    
};

class Complex{
    int a,b;
    // friend int Calculator::sumRealComplex(Complex,Complex);
    
    public:
    void setComplexData(int v1,int v2){
        a=v1;
        b=v2;
    }
    
    void printNum(){
        cout<<"The Complex number is "<<a<<" + "<<b<<"i"<<endl;
    }
    // friend int Calculator::sumComComplex(Complex,Complex);
    
    //Alter:  convert the entire class as friend 
    friend class Calculator;
};


//Friend function declaration
int Calculator::sumRealComplex(Complex o1,Complex o2){
    return (o1.a + o2.a);
}

int Calculator::sumComComplex(Complex o1,Complex o2){
    return (o1.b + o2.b);
}


//Main function
int main(){
    Complex c1,c2;
    c1.setComplexData(23,12);
    c2.setComplexData(42,2);
    
    Calculator calc;
    int res=calc.sumRealComplex(c1,c2);
    int resC=calc.sumComComplex(c1,c2);
    
    cout<<"The sum of Real part of the complex number is "<<res<<endl;
    cout<<"The sum of comlex part of the complex number is "<<resC<<endl;
}

