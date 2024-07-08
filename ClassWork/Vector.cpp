#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	vector<int> v1(10);
	cout<<"Size of vector: "<<v1.size()<<endl;
	for(int i=0; i<10; i++){
		v1[i] = (i+1) *5;
	}
	for(int i=10; i<17; i++){
		v1.push_back((i+1) * 5);
	}
	cout<<"Size of vector now: "<<v1.size()<<endl;
	vector<int>::iterator v = v1.begin();
	while(v != v1.end()){
		cout<<*v<<" ";
		v++;
	}
	cout<<endl;
	v1.pop_back();
	v1.pop_back();
	cout<<"Size of vector now: "<<v1.size()<<endl;
	
	v1.insert(v1.begin()+2,10);
	v1.insert(v1.begin()+4,110);
	
//    v1.insert(4,110); // error as position cannot be refrenced as integer...
	vector<int>::iterator v2 = v1.begin();
	while(v2 != v1.end()){
		cout<<*v2<<" ";
		v2++;
	}
	cout<<endl;
	v1.erase(v1.begin()+1, v1.begin()+4);
	vector<int>::iterator v3 = v1.begin();
	while(v3 != v1.end()){
		cout<<*v3<<" ";
		v3++;
	}
	cout<<endl;
}

/*
int* pos = g1.data();
g1.at(3);
g1.front();
g1.back();
*/