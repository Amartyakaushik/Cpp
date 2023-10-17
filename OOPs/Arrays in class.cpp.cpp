#include<iostream>
using namespace std;

//class
class Shop{
    int item_id[100];
    int item_price[100];
    int counter;
    
    public:
    void initcounter(void){
        counter =0;
    }
    void set_price(void);
    void display(void);
};

//set price function
void Shop::set_price(void){
    for(int i=0;i<counter;i++){
        cout<<"enter item id: ";
        cin>>item_id[counter];
        cout<<"Enter item_price: ";
        cin>>item_price[counter];
    }
}

// display function
void Shop::display(void){
    for(int i=0;i<counter;i++){
        cout<<"price of item with id"<<item_id[i]<<" is "<<item_price[i]<<endl;
    }
}

//main function
int main(){
    Shop dukaan;
    dukaan.initcounter();
    dukaan.set_price();
    dukaan.set_price();
    dukaan.set_price();
    dukaan.display();
}


