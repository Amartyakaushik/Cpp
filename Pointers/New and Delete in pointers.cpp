#include<iostream>
using namespace std;

//New and Delete keywords in pointer

int main(){
    int a=98;
    
    //Basic Example
    int* ptr=&a;
    cout<<"The value of a is "<< *ptr<<endl;
    
    // New keyword
    int *pt=new int(2332);
    float *fpt=new float(32.23);
    
    cout<<"The value at address pt is "<<*pt<<endl;
    cout<<"The value at address fpt is "<<*fpt<<endl;
    
    int *arr=new int[3];
    arr[0]=10;
    *(arr+1)=11;
    arr[2]=12;
    
    cout<<"The value at address arr[0] is "<<arr[0]<<endl;
    cout<<"The value at address arr[1] is "<<arr[1]<<endl;
    cout<<"The value at address arr[2] is "<<arr[2]<<endl;
    
    //Delete keyword
    cout<<"After deletion of pointer"
    delete[] arr;
    cout<<"The value at address arr[1] is "<<arr[1]<<endl;
    cout<<"The value at address arr[2] is "<<arr[2]<<endl;
}