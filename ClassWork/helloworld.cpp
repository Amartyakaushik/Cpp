#include<iostream>
using namespace std;
// ## INLINE FUNCTION
// used instead of small functions (generally less than 5 lines)
// prevent function call overhead

// ## ENUM (enumaration)
// allows to assign the name / 
// user defined data types
//class Calculator{
//    int x;
//    int y;
//    public:
//    // This is an inline function as it's defined inside the class. 
//    void sum(int a, int b){
//        x = a;
//        y = b;
//        cout<< x+y<< " \n";
//    }
//
//    inline void sub(int a, int b);
//};
//
//void Calculator :: sub(int a, int b){
//    x =a;
//    y = b;
//    cout<< x - y<< "\n";
//}


//// ##     Struct
//   // -> user defined data type
//   // -> collection of hetrogenous data types  elements.
//   // -> by Default member of the structure are public (access specifier).
//   // -> memory allocation => contiguous memory allocation, each member is assigned with individual unique space.
//struct student{
//	int roll;
//	int marks;
//}s2={2,88};




//// ## Union
////   // -> user defined data type
////   // -> collection of hetrogenous data types  elements.
////   // -> by Default member of the structure are public (access specifier).
////   // -> memory allocation => contiguous memory allocation, each member is assigned in same space.
////   // -> default size of empty stucture/ union/ object is 1 ( 0 in c).
//union student{
//	int roll;
//	int marks;
//}s2={10};



struct employee{
	char name[20];
	int employee_id;
	void get_details(){	
		cout << "enter name: ";
		cin >> name;
		cout<< "employee id: ";
		cin >> employee_id;
	}
	
	void show_details(){
		cout<<"name of the employee is "<< name << "\n employee id is "<< employee_id;
	}
};

int main(){
    // int x;
    // cout << "Enter the value of x";
    // cin >> x;
    // cout << "value of x is " << x;

//    Calculator c;
//    c.sum(3,4);
//    c.sub(4,5);
    
    
    
    
//    //Enum
//    enum days{mon=1,tue=2,wed=3,thur=4};
//    // we cannot create another enum with same variables...
//    enum days d = wed;
//    for(int i=mon; i<=wed; i++){
//    	cout<<i<<"\n";
//	}
////	cout<<wed;
//	
//	switch(d)
//	{
//	case 1:
//		cout<<"Monday";
//		break;
//	
//	case 2:
//		cout<<"Tuesday";
//		break;
//		
//	case 3:
//		cout<<"Wednesday";
//		break;
//		
//	case 4:
//		cout<<"Thursday";
//		break;
//		
//	default:
//		cout<<"Enter a valid day";
//}
   
   
   
   
//   // Structure
//   struct student s;
//   s.roll = 23;
//   s.marks = 99;
//   cout<< s.roll<<"\n";
//   cout<< s.marks<<"\n";
//   
//   cout<<s2.roll<<"\n";
//   cout<<s2.marks<<"\n";
//   cout<<"Memory allocation \n";
//   cout<<&s2.roll<< "\n"<<&s2.marks<<"\n";


//// ## UNION
//union student s;
//   s.roll = 23;
//   s.marks = 99;
//   cout<< s.roll<<"\n";   // 99  -> overiding the value as all the elements are stored in same space
//   cout<< s.marks<<"\n";  // 99 -> override cause of sharing space memory allocation
//   
////   cout<<s2.roll<<"\n";
////   cout<<s2.marks<<"\n";
//   cout<<"Memory allocation \n";
//   cout<<&s.roll<< "\n"<<&s.marks<<"\n";
//
//   cout<<s2.roll<< "\n"<<s2.marks<<"\n";

    
    
    employee e1;
    e1.get_details();
    e1.show_details();
}