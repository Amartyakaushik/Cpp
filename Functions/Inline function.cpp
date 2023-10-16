#include<iostream>
using namespace std;
//Inline function
inline int product(int a,int b){
    return a*b;
}

//STATIC VARIABLE
int sum(int a,int b){
    static int c=0;    // this value cannot be initialized again
    c=c+1;
    return a*b+c;
}

//DEFAULT ARGUMENT
int moneyreceived(int principleamount,int factor=1.04){
    return principleamount*factor;
}

// //Constant ARGUMENT
// int strlen(const char *p){       // constant argument ensure that the value of p will not change while whole definition
    
// }

//main function
int main(){
    int a,b;
    cout<<"Enter value of a and b:"<<endl;
    cin>>a>>b;
    cout<<product(a,b)<<endl;
    
    cout<<sum(a,b)<<endl;
    cout<<sum(a,b)<<endl;
    cout<<sum(a,b)<<endl;
    
    int currentbalance;
    cout<<"currentbalance: ";
    cin>>currentbalance;
    cout<<"balance after applying interest "<<moneyreceived(currentbalance)<<endl;
    
    cout<<1000*1.04;
    
    
}