#include<iostream>
#include<map> 
using namespace std;

//Map
int main(){
    map<string,int> marks;
    marks["Amartya"]=98;
    marks["Charchil"]=99;
    marks["suraj"]=100;
    
    //iterator
    map<string,int> :: iterator iter;
    for(iter=marks.begin();iter!=marks.end();iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }
    cout<<endl;
    
    //insert   -> used to insert value at last of the map
    marks.insert({{"Himmu",99},{"Anjali",100}});
    for(iter=marks.begin();iter!=marks.end();iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }

    
    //size()  -> displays the size of the map
    marks.size();
    
    //max_size()  -> displays the limit of the size of the Map
    marks.max_size();
}