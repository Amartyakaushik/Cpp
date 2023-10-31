#include<iostream>
using namespace std;

//File input and output
#include<fstream>
/* To work with files we need to open a file and basically, there are two ways to open a file
1) using the constructor
2) using the member function "open()" of the class
*/

//using member function "open()" and "eof()"
int main(){
    string s1="Amar Rana";
    ofstream hout;
    hout.open("Sample62.txt");
    hout<<s1;
    hout.close();
    
    string s2;
    ifstream hin;
    hin.open("Sample62.txt");
    while(hin.eof()==0){
        getline(hin,s2);
        cout<<s2;
    }
    hin.close();
    
    
    return 0;
}
