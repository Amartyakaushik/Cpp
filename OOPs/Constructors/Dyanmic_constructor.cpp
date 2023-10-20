#include<iostream>
using namespace std;

//Dynamic initialization of objects using Constructor

//class
class Bankdeposite{
    int principal;
    int years;
    float interestRate;
    float returnValue;
    
    public:
    Bankdeposite(int p,int y,double r);
    Bankdeposite(int p,int y,int R);
    
    // to check total return returnValue
    void show();
};

//Constructor defination
Bankdeposite :: Bankdeposite(int p,int y,double r){
    principal=p;
    years=y;
    interestRate=r;
    returnValue=principal;
    
    //update returnValue after every years(period specific )
    for(int i=0;i<y;i++){
        returnValue *= (1+interestRate);
    }
}


Bankdeposite :: Bankdeposite(int p,int y,int R){
    principal=p;
    years=y;
    interestRate=float(R)/100;
    returnValue=principal;
    
    //update returnValue after every years(period specific )
    for(int i=0;i<y;i++){
        returnValue *= (1+interestRate);
    }  
}

// function defination
void Bankdeposite::show(){
    cout<<"Investement of "<<principal<<" for "<<years<<" years with interestRate "<<interestRate<<" will be "<<returnValue<<endl;
}

//Main function
int main(){
    // Bankdeposite bd1,bd2;
    Bankdeposite bd1=Bankdeposite(70000,5,0.09);
    Bankdeposite bd2=Bankdeposite(100000,7,11);
    
    bd1.show();
    bd2.show();
    return 0;
}










