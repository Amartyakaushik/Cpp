#include<iostream>
using namespace std;
int main(){
	int a = 5;
	int *p = &a;
	cout<<a<<" "<<p<<" "<<&a<<" "<<*p<<endl;
	
	int arr[] = {1,2,3,4,5};
	cout<<*arr<<" "<<arr<<" ";
	p = arr;
	cout<<*p<<" ";
	p++;
	cout<<*p<<endl;
	int *q= &arr[4];
	cout<<q-p<<endl;  // 3 -> difference of the indexes of these pointers
}

// Arrays are constant pointers.
// and it stores the address of first value of the array...