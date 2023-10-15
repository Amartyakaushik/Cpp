#include<iostream>
using namespace std;
//call by value
void swap(int x,int y);  // 

//call by pointer refrence
void swap(int* x,int* y);

//call by variable refrence
void swap(int &x , int &y);

int main(){
    int a=34;
    int b=234;
    cout<<"Value of a:"<<a<<" Value of b:"<<b<<endl;
    
    // // //call by value
    // swap(a,b); 
    // cout<<"Value of a:"<<a<<" Value of b:"<<b<<endl;
    
    // //call by pointer refrence
    // swap(&a, &b);
    // cout<<"Value of a:"<<a<<" Value of b:"<<b<<endl;
    
    //call by variable refrence
    swap(a,b);
    cout<<"Value of a:"<<a<<"Value of b:"<<b<<endl;
    
}

//function declaration

// // //call by value
// void swap(int x, int y){
//     int temp=x;
//     x=y;
//     y=temp;
// }

// //call by pointer refrence
// void swap(int* x,int* y){
//     int temp= *x;
//     *x=*y;
//     *y=temp;
// }

//call by variale refrence
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}