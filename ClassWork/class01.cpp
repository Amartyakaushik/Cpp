#include<iostream>
using namespace std;
// ## INLINE FUNCTION
// prevent function call overhead
class Calculator{
    int x;
    int y;
    public:
    // This is an inline function as it's defined inside the class. 
    void sum(int a, int b){
        x = a;
        y = b;
        cout<< x+y;
    }

    void sub();
};

void Calculator::sub(int a, int b){
    x =a;
    y = b;
    cout<< x - y;
}

int main(){
    // int x;
    // cout << "Enter the value of x";
    // cin >> x;
    // cout << "value of x is " << x;

    Calculator c;
    c.sum(3,4);
    c.sub(4,5);

    
}