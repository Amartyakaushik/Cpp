#include<iostream>
using namespace std;
int main(){
    //Control structure
    //1-sequence control structure
    int a=23,b=45;
    cout<<"the value of a was:"<<a<<endl;
    cout<<"the value of b was:"<<b<<endl;
    
    a=523,b=765;
    cout<<"The value of a is:"<<a<<endl;
    cout<<"the value of b is:"<<b<<endl;
    
    // //2-Selection control structure: if-else statement
    // string occupation;
    // cout<<"specify your occupation(student,job seeker,any): ";
    // cin>>occupation;
    // if(occupation=="student" || occupation=="Student"){
    //     cout<<"students are not allowed in this meeting"<<endl;
    // }else{
    //     cout<<"your are eligble"<<endl;
    // }
    
    //2-Selection control structure: if else-if else statement
    int age;
    cout<<"Enter your age for verification:";
    cin>>age;
    
    // if(age<18 && age>=1){
    //     cout<<"Kids are not allowed in this party"<<endl;
    // } else if(age==18){
    //     cout<<"better luck next time"<<endl;
    // } else if(age<1){
    //     cout<<"You are not born yet"<<endl;
    // } else if(age>18){
    //     cout<<"WELCOME to the party!"<<endl;
    // } else {
    //     cout<<"invalid age input..."<<endl;
    // }
    
    //2-Selection control structure: switch statement
    switch(age){
        case 18:
        cout<<"you are 18"<<endl;
        break;
        
        case 1:
        cout<<"hey kid!"<<endl;
        break;
        
        case 45:
        cout<<"Namaste uncle :)"<<endl;
        break;
        
        default :
        cout<<"Good to see you"<<endl;
    }
    
    
    
}