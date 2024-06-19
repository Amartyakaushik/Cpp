#include<iostream>
using namespace std;
/* Types of pointer 
 1) Wild 2) Dangling 3) void 4)NULL 5) constant
 */
 int main(){
 	// wild
 	int *p;
// 	cout<<p<<" ";
// 	cout<<*p;
 	
// 	// Dangling
// 	{
// 		int a = 12;
// 		p = &a;
// 		cout<<*p<<endl;
//// 		declare it as null after the use 
//// 		p = NULL;
//	 }
//	 cout<<*p;
	 
	 //// null
//	 p = NULL;
	 
	 
	 //constant
	 int b = 120;
	 int * const c = &b;
	 cout<<*c<<endl;
	 
 		
	// void 
	int s = 23;
	void *d = &s;
	cout<<*(int*)d<<endl;
 	
 }