#include<iostream>
using namespace std;

/*Friend function  --> is not a member of class in which it is declared but 
it has access to all the private members of the clas.
*/
class Complex{
    int a;
    int b;
    friend Complex sumcomplex(Complex o1,Complex o2);  // friend function canbe defined anywhere in the class
    public:
    void setcomplexdata(int v1,int v2){
        a=v1;
        b=v2;
    }
    
    void printnum(){
        cout<<"the complex number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

Complex sumcomplex(Complex o1,Complex o2){     // Usually contains objects as an argument
    Complex o3;
    o3.setcomplexdata((o1.a + o2.a),(o1.b + o2.b));   // it cannot access member by their name but by (object_name.member_name).
}

//Main function
int main(){
    Complex c1,c2,c3;
    c1.setcomplexdata(12,13);
    c1.printnum();
    
    c2.setcomplexdata(23,52);
    c2.printnum();
    
    c3=sumcomplex(c1,c2);     // friend function is not the member of the class (declared) so use it as global function
    c3.printnum();
}