#include<iostream>
#include<iomanip>
using namespace std;
class SimpleInterest{
	SimpleInterest *arr;
	int size;
	int principal;
	float rate;
	int time;
	public:
		void objectSize(){
			cout<<"Enter size: ";
			cin>>size;
			arr = new SimpleInterest[size];	
		}
		
		
		void getData(){
			for(int i=0; i<size; i++){
				
			cout<<"Enter principle amount: ";
//			cin>> arr[i].principal;
		cin>> (*(arr + i)).principal;
			cout<<"Enter rate: ";
			cin>>arr[i].rate;
			cout<<"Enter Time: ";
			cin>>arr[i].time;
		}
		}
//		
		void calculateInterest(){
			for(int i=0; i<size; i++){
			float interest = (arr[i].principal * arr[i].rate * arr[i].time)/100;
			cout<<"Your total interest: "<<fixed<<setprecision(2)<<interest<<endl;
		}
		}
};

int main(){
	SimpleInterest si;
	
////	for(int i =0; i<n; i++){
////		si.getData();
////		si.calculateInterest();
////		
////	}
//

	si.objectSize();
	si.getData();
	si.calculateInterest();
//	SimpleInterest *fi = new SimpleInterest[n];
}