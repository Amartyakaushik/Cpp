/* C++ --> initially called (C with classes) by stroustroup
class --> exension of structure (in c)
Structure had limitation
1- members are public
2- No methods
classes --> can have methods and properties as well 
it can make few member as public and few as private
Structures in C++ are typedef already
here with help of oops  you can declare objects along with the class declaration
*/

//Nesting of member function
#include<string>
#include<iostream>
using namespace std;

class binary{
    string s;
    private: 
    void check_binary();
    
    public:
    void read_binary();
    void ones_compliment();
    void display();
};

//Read binary function
void binary:: read_binary(){
        cout<<"enter the binary number: ";
        cin>>s;
}

//Check binary function
void binary::check_binary(){
    for(int i=0;i< s.length();i++){
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"Invalid binary format"<<endl;
            exit (0);
        }
    }
}

//Ones_compliment function
void binary::ones_compliment(){
    check_binary();
    for(int i=0;i<s.length();i++){
        if(s.at(i)=='0'){
            s.at(i)='1';
        } else{
            s.at(i)='0';
        }
    }
}

//Display function
void binary::display(){
    for(int i=0;i<s.length();i++){
        cout<<s.at(i);
    }
    cout<<endl;
}


//Main function
int main(){
    binary b;
    b.read_binary();
    // b.check_binary();  (error cuz check binary is private in binart class)
    b.display();
    b.ones_compliment();
    b.display();
}






