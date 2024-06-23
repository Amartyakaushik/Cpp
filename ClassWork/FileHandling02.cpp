#include<iostream>
#include<fstream>
using namespace std;
int main(){
	int n;
	cin>>n;
	ofstream outfile;
	outfile.open("File1.txt",ios::out|ios::in|ios::app);
	for(int i =0; i<19; i++){
		outfile<<n<<" X "<<i<<" = "<<(n*i)<<endl;
	}
	
//	outfile.close("File1.txt");
	
//	outfile.open("File1.txt",ios::in);
	ifstream inFile;
	char ch = inFile.get();
	while(ch!=EOF){
		cout<<ch;
		ch= inFile.get();
	}
}