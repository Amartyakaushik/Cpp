#include<iostream>
using namespace std;
#include<fstream>

//Template function with multiple parameters
template<class T1,class T2>
float average(T1 a,T2 b){
    float avg=(a+b)/2.0;
    return avg;
}

int main(){
    float avg,avg2;
    avg=average(34,43);
    avg2=average(34,4.3);
    
    cout<<avg<<endl<<avg2<<endl;
}