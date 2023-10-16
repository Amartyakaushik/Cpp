#include<iostream>
using namespace std;

//Recursion
//Q1- Factorial
int fact(int a){
    if(a<1){
        return 1;
    }
    int fact_am1=fact(a-1);
    int fact_a=a*fact_am1;
    return fact_a;
}

//Fabonacci series
int fab(int a){
    if(a<1){
        return 1;
    }
    return fab(a-2)+fab(a-1);;
}


int main(){
    int b=5;
    cout<<fact(b)<<endl;
    
    cout<<fab(b)<<endl;
    
}