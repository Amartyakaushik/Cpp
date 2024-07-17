#include<iostream>
using namespace std;

/* Relationship between objects
 
 Inheritance  -> " is a kind of "
 composition -> sum of objects of one class ( library is composed of books)
 aggregation  -> " has a " 
*/

// 1) aggregation
class Author{
	public:
	string name = "Amartya Kaushik";
	string address = "Kii korbe leke";
};
class Book{
	public:
	string name = "Vidhi ka Vidhan";
	Author author;
};
int main(){
	Book b1;
	cout<<b1.author.name;
}