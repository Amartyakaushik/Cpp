#include<iostream>
using namespace std;

//Structures  are data types used to store variables of different data types
struct employee{
    int eid;
    char favchar;
    float salary;
};

//Typedef  used as a shortcut to call STRUCTURE
typedef struct person{
    string name;
    int age;
}id;

//UNION is for better memory management as i defines only one data out of all.
union money{
    int rice;
    char car;
    float pound;
};



int main(){
    cout<<"STRUCTURE"<<endl;
    struct employee Charchil;
    Charchil.eid=34;
    Charchil.favchar='F';
    Charchil.salary=123443;
    cout<<"eid of charchil: "<<Charchil.eid<<endl;
    cout<<"favouritecharacter of charchil: "<<Charchil.favchar<<endl;
    cout<<"salary of charchil: "<<Charchil.salary<<endl;
    
    //Typedef shortcut
    id p1;
    p1.name="Amartya";
    p1.age=19;
    cout<<"name of p1 is "<<p1.name<<endl;
    cout<<"age of p1 is "<<p1.age<<endl;
    
    //Union
    union money m1;
    m1.rice=344;
    m1.car='M';
    m1.pound=23.43;
    
    cout<<m1.rice<<endl; // first-344 then garbage value
    cout<<m1.car<<endl; // overwrite and returs 'M'
    cout<<m1.pound<<endl; // overwrite and then  returns-23.43 
    
    //enum
    enum Meal{Breakfast,Lunch,Dinner};
    Meal M1=Lunch;
    Meal M2=Breakfast;
    
    cout<<(M1==2)<<endl;     // returns 0
    cout<<(M2==0)<<endl;  // returns 1
    
}