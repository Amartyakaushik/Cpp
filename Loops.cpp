#include <iostream>
using namespace std;
int main(){
    /*  LOOPS IN C++
        There are three types of loops in c++
        1-for loop
        2-while loop
        3-Do while loop
    */
    
    /* for loop 
       syntax:
       for(initialization; condition; updarion){
           loop body(c++ code);
       }
    */
    for(int i=0;i<10;i++){
        cout<<i<<endl;
    }
    cout<<"end of for loop"<<endl;

    
    /* while loop
       syntax:
       initialization;
       while(condition){
           loop body(c++ code);
           updation;
       }
    */
    int j=23;
    while(j<30){
        cout<<j<<endl;
        j++;
    }
    cout<<"end of while loop"<<endl;
    
    /* do while loop
       syntax:
       initialization;
       do{
           loop body(c++ code);
           updation;
       }while(condition)
    */
    
    int k=12;
    do{
        cout<<k<<endl;
        k++;
    }while(k<30);
    cout<<"end of do while loop"<<endl;
    
    
    //print table of 6 with the help of do while loop
    int var=1,tab;
    cout<<"enter value to print table:";
    cin>>tab;
    do{
        cout<<tab<<" x "<<var<<"="<<var*tab<<endl;;
        var++;
    }while(var<=10);
    
    
}