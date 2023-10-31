#include<iostream>
using namespace std;
#include<fstream>

//Template
template<class T>
class Vector{
    public:
    
    T *arr;
    int size;
    
    Vector(int m){
        size=m;
        arr=new T [size];
    }
    
    T dotProduct(Vector &v){
        T dtp=0;
        for(int i=0;i<size;i++){
            dtp += (this->arr[i])* (v.arr[i]);
        }
        return dtp;
    }
};

int main(){
    Vector<float>v1(3);
    v1.arr[0]=23.23;
    v1.arr[1]=12.12;
    v1.arr[2]=11.11;
    
    Vector<float>v2(3);
    v2.arr[0]=23.23;
    v2.arr[1]=12.12;
    v2.arr[2]=11.11;
    
    float dtp=v1.dotProduct( v2);
    cout<<dtp;

}