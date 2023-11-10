#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

//Function object -> function wrapped in a class so that it can be used like an object
int main(){
    int arr[]={234,3,64,2,275,7,44,5543,345};
    // sort(arr,arr+7)   // arr+7 is used to sort till 7th index
    sort(arr,arr+7,greater<int>());   // "greater<int>()" is a functional object used to sort array in descending order.
    for(int i=0;i<9;i++){
        cout<<arr[i]<<endl;
    }
    
    
}
yes but what do you want from me ?
