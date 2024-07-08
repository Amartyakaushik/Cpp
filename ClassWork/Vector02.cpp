#include<iostream>
#include<vector>
using namespace std;
int main(){
	int key;
	int arr[] = { 2323,434,23,3,25,2222,21,23};
	vector<int> v(arr, arr+8);
	vector<int>::iterator iter;
	cout<<"Enter value: ";
	cin>>key;
	iter = find(v.begin(), v.end(), key);
	if(iter != v.end()){
		cout<<"Element "<<key<<" found "<<endl;
	}else{
		cout<<"Element "<<key<<" no in vector v"<<endl;
	}
}
