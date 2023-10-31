#include<iostream>
using namespace std;

//File input and output
#include<fstream>
/* To work with files we need to open a file and basically, there are two ways to open a file
1) using the constructor
2) using the member function "open()" of the class
*/

//using constructor
int main(){
    // opening file using constructor and writing to it.
    // string st="Amartya kaushik";
    // ofstream out("Sample60.txt");
    // out<<st;
    
    // opening file using constructor and writing to it.
    string st2;
    ifstream in("Sample60.txt");
    // in>>st2; // only reads first word/string of the file
    getline(in,st2);   //reads the whole single line of the file
    cout<<st2;
}
