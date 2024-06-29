#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int *ptr = new int[3];
	int sum=0;
	for(int i=0; i<3; i++){
		cin>>ptr[i];
//		cin>>*(ptr + i);   also valid
		sum += ptr[i];
	}
	cout<<"Sum is: "<<sum<<endl;
	
	*(ptr+3)=23;
	cout<<"Elements are: "<<endl;
	for(int i=0; i<4; i++){
	cout<<*(ptr + i)<<endl;
}

//	cout<<floor(2.2*100)/100<<endl;
//	cout<<ceil(2.2*100)/100<<endl;
//	cout<<floor(2.7)<<endl;
//	cout<<ceil(2.7)<<endl;
}