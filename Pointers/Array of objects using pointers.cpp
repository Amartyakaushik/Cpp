#include<iostream>
using namespace std;
 
 //Array of objects using pointer
 class Shop{
     int id;
     float price;
     
     public:
     void setData(int i,float j){
         id=i;
         price=j;
     }
     
     void getData(void){
         cout<<"The id of the item is "<<id<<endl;
         cout<<"The price of the item is "<<price<<endl;
     }
 };
 
 //Main function
 int main(){
     int size=4;
     Shop *ptr=new Shop[size];
     Shop *ptrTemp= ptr;
     int p,i;
     float q;
     
     //setting data to different array of objects
     for(i=0;i<size;i++){
         cout<<"Enter id of item no."<<i+1<<endl;
         cin>>p;
         cout<<"Enter price of item no."<<i+1<<endl;
         cin>>q;
         
         ptr->setData(p,q);
         ptr++;
     }
     
     //Print data of those different arrays of objects
     for(i=0;i<size;i++){
         cout<<"id and price of item no."<<i+1<<endl;
         ptrTemp->getData();
         ptrTemp++;
     }
     
 }
 
 
 
 
 
 
 
 
 
 
 
 
 