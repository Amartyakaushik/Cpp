#include<iostream>
using namespace std;
#include<fstream>

//Template
template<class T1,class T2,class T3>
class Operation{
    public:
    T1 data1;
    T2 data2;
    
    Operation(T1 a,T2 b){
        data1=a;
        data2=b;
    }
    
    T3 product(){
        T3 pdt=data2*data1;
        return pdt;
    }
    
    T2 sum(){
        T2 sm=data1+data2;
        return sm;
    }
    
    void display(){
        
        cout<<"These two data are: "<<endl<<data1<<endl<<data2<<endl;
    }
};

int main(){
    Operation<int,int,float>obj(23,11);
    float pdt=obj.product();
    float sm=obj.sum();
    cout<<pdt<<endl;
    cout<<sm<<endl;
    obj.display();
}