#include<iostream>
#include<list> 
using namespace std;

//List

void display(list<int> &lst){
    list<int> :: iterator it;
    it=lst.begin();
    for(it;it!=lst.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main(){
    list<int> list1;
    list<int> list2(6);
    int size,element;
    
    cout<<"Enter the size of the list:";
    cin>>size;
    int i;
    for(i=0;i<size;i++){
        cout<<"Enter the element:";
        cin>>element;
        list1.push_back(element);
    }
    display(list1);
    
    int element2;
    list<int>:: iterator iter=list2.begin();
    for(int i=0;i<list2.size();i++){
        cout<<"Enter elements for list 2:";
        cin>>element2;
        *iter=element2;
        iter++;
    }
    display(list2);
    
    // pop_back
    list1.pop_back();
    display(list1);
    
    //pop_front
    list1.pop_front();
    display(list1);
    
    //remove
    list2.remove(element2);      // here element2 is the last element taken as input from user for list2
    display(list2);
    
    list1.sort();
    list2.sort();
    list1.merge(list2);
    
}