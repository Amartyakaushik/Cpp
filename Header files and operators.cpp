//There are two types of header files
//1-System header file (comes with the compiler)
#include<iostream>

//2-User defined header file  (defined by the programmer)
// #include "header.h"  (this will throw an error if "header.h" file is missing in the current directory)

using namespace std;
int main(){
    cout<<"Operators"<<endl;
    cout<<"These are the following types of operators: "<<endl;
    
    //1)Arithmetic operator
    int a=3,b=5;
    cout<<"a + b is: "<<a+b<<endl;
    cout<<"a - b is: "<<a-b<<endl;
    cout<<"a / b is: "<<a/b<<endl;
    cout<<"a % b is: "<<a%b<<endl;
    cout<<"a * b is: "<<a*b<<endl;
    cout<<"++"<<a<<" is: "<<++a<<endl;
    cout<<"--"<<a<<" is: "<<--a<<endl;
    cout<<a<<"++"<<" is: "<<a++<<endl;
    cout<<a<<"--"<<" is: "<<a--<<endl;
    
    //2)Assignment operator
    int c=4;
    int d=c;
    cout<<"the value of c: "<<c<<"the value of d: "<<d<<endl;
    
    //3)Comparison operator
    cout<<"a==b: "<<(a==b)<<endl;
    cout<<"a!=b: "<<(a!=b)<<endl;
    cout<<"a>b: "<<(a>b)<<endl;
    cout<<"a<b: "<<(a<b)<<endl;
    cout<<"a>=b: "<<(a>=b)<<endl;
    cout<<"a<=b: "<<(a<=b)<<endl;
    
    //Assignment operator
    int age;
    cout<<"enter your age: ";
    cin>>age;
    if(age>18 && age<25){
        cout<<"Congrats! Your are eligible for the army :)"<<endl;
    }else{
        cout<<"Good luck!"<<endl;
    }
    
    if(age<18 || age>25){
        cout<<"Oops! your are not eligile to fill the form"<<endl;
    }
    
    cout<<"(!) this converts the answer"<<(!true);
    
    //bitwise operators
    
}
