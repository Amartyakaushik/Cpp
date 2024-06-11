#include<iostream>
using namespace std;

//Array of objects
class Employee{
    int id;
    int salary;
    
    public: 
    void setid(void){
        cout<<"Enter id of the employee:";
        cin>>id;
    }
    void getid(void){
        cout<<"id of the employee is "<<id<<endl;
    }
    
};

//Main function
int main(){
    Employee F[4];
    for(int i=0;i<4;i++){
        F[i].setid();
        F[i].getid();
    }
}