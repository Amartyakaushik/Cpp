#include<iostream>
using namespace std;
#include<fstream>
#include<vector>

//Vectors 
template<class T>
void display(vector<T> &v){
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int>vec1;
    int element,size;
    
    cout<<"Enter the size of vector:";
    cin>>size;
    for(int i=0;i<size;i++){
        cout<<"Enter the elements:";
        cin>>element;
        vec1.push_back(element);           // push_back is used to insert value to the vector
    }
    display(vec1);
    
    vector<char>vec2;
    vec2.push_back('A');
    vec2.push_back('m');
    vec2.push_back('a');
    vec2.push_back('r');
    display(vec2);
    
    vector<float>vec3;
    vec3.push_back(32.23);
    vec3.push_back(33.23);
    vec3.push_back(34.23);
    vec3.push_back(35.23);
    vec3.push_back(36.23);
    display(vec3);
    
    vec3.pop_back();                       // pop_back is used to delete the last item
    display(vec3);
    
    // use of iterator
    vector<int>::iterator iter=vec1.begin();
    vec1.insert(iter+1 , 52);
    display(vec1);
    
    vector<float>::iterator iter2=vec3.begin();
    vec3.insert(iter2+1, 23.23);
    display(vec3);
    
    // NOT VALID FOR THE CHAR DATA TYPE
    // vector<char>::iterator vter=vec2.begin();
    // vec2.insert(vter+2,'R');
    // display(vec2);

    
}