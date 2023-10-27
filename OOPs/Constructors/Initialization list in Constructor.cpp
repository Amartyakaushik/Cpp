#include<iostream>
using namespace std;

class Test{
    int a;
    int b;
    
    public:
    
    // Test(int i,int j):a(i),b(j){
    //     cout<<"Constructor is called..."<<endl;
    //     cout<<"The value of a is "<<a<<endl;
    //     cout<<"The value of b is "<<b<<endl;
    // }
    
    // Test(int i,int j):a(i),b(i+j){
    //     cout<<"Constructor is called..."<<endl;
    //     cout<<"The value of a is "<<a<<endl;
    //     cout<<"The value of b is "<<b<<endl;
    // }
    
    Test(int i,int j):a(i),b(a+j){
        cout<<"Constructor is called..."<<endl;
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
    }
    
    /*Test(int i,int j):b(j),a(i+b){
        cout<<"Constructor is called..."<<endl;
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
    }
    it will throw a garbage value as 'a' is initialized first
    */
    
};

int main(){
    Test t(4,6);
}