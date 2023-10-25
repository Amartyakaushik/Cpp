#include<iostream>
using namespace std;

class base{
    protected:
    int a;
    
    private:
    int b;
};

/*for protected member:
                        public derivation      private derivation     protected derivation
    1. private member     not inherited         not inherited            not inherited
    2. Protected member   Protected               private                Protected
    3. Public member      Public                  private                Protected
*/

//derived class
class derived:public base{
    
};

//Main function
int main(){
    base f;
    derived d;
    
    // cout<<f.a;       (error) cuz it's Protected in the base class
    // cout<<d.a;   (error) cuz it's Protected in the bothe base as well as derived class   
}
