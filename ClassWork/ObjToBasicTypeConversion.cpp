#include<iostream>
using namespace std;
class Distance{
	int km,m;
	public:
		Distance(){
			km = m = 0;
		}
		
		void getData(){
			cout<<"Enter km:";
			cin>>km;
			cout<<"Enter meter:";
			cin>>m;
			
		}
		
		operator int(){
			int t = km * 1000 + m;
			return t;
		}
};

int main(){
	int m;
	Distance d;
	d.getData();
	m = d;  // (int) d   --> Internal representation...
	cout<<"Total distance: "<<m<<"meters";
}