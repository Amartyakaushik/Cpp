#include<iostream>
using namespace std;
int main(){
    //POINTERS
    //  Pointer is a data type which holds the address of other data types
    int a=34;
    int* b=&a;
    
    // &--------> (address of) operator
    cout<<"the address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;
    
    // *--------> (value at) derefrence operator
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of a is "<<*b<<endl;
    
    //POINTER OF POINTER ----> it's a data type which holds the address of other pointers
    int** c=&b;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl;
    
    cout<<"The value of b is "<<b<<endl;
    cout<<"The value of b is "<<*c<<endl;
    
    cout<<"The value at address value_at(value_at c) is "<<**c<<endl;
}