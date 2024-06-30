#include<iostream>
using namespace std;
int main(){
	int n,m;
	cout<<"Enter the initial size: "<<endl;
	cin>>n;
	int *arr = new int[n];
	if(arr == NULL){
		cout<<"Memory allocation failed"<<endl;
		exit(1);
	}
	cout<<"Enter the array elements:"<<endl;
	for(int i =0; i<n; i++){
		cin>>arr[i];
	}
	
	cout<<"Enter new size: ";
	cin>>m;
	int *temp = new int[m];
	if(temp == NULL){
		cout<<"Memory allocatio failed: "<<endl;
		exit(1);
	}
	for(int i =0; i<n; i++){
		temp[i] = arr[i];
	}
	delete []arr;
	arr = temp;
	
	cout<<"Enter new elements of reallocated memory array"<<endl;
	for(int i =0; i<m; i++){
		cin>>arr[i];
	}
	
	for(int i =0; i<m; i++){
		cout<<arr[i];
	}
	
}