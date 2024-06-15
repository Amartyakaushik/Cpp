#include<iostream>
using namespace std;
class two_D{
	int a[100][100];
	int n,m;
	public:
		void getData(){
			int i, j;
			cout<<"Enter rows and columns: "<<endl;
			cin>>n>>m;
			cout<<"Enter elements of array: "<<endl;
			for(int i = 0; i<n; i++){
				for(int j = 0; j<m; j++){
					cin>>a[i][j];
				}
			}
		}
		
		void printArray(){
			cout<<"Enter elements of array: "<<endl;
			for(int i = 0; i<n; i++){
				for(int j = 0; j<m; j++){
					cout<<a[i][j]+10<<" ";
				}
				cout<<endl;
			}
		}
		
};

int main(){
	two_D array;
	array.getData();
	array.printArray();
}
// searching , binary, linear , assertion and deletion