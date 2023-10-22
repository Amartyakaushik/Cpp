#include<iostream>
using namespace std;

//global variable
int count;
//class 
class num{
    public:
    
    //constructor
    num(){
    count++;
        cout<<"this is time when constructor is called for object number "<<count<<endl;
    }
    
    //destructor
    ~num(){
        cout<<"This is the time when destructor is called for object number "<<count<<endl;
        count--;
    }
};

//main function
int main(){
    cout<<"Entering main function"<<endl;
    cout<<"Creating first object"<<endl;
    num n1;
    {
        cout<<"Entering this block"<<endl;
        cout<<"Creating two more objects"<<endl;
        num n2,n3;
        cout<<"Exiting this block"<<endl;
    }
    cout<<"Back to main function"<<endl;
    return 0;
}
