#include<iostream>
#include<string>
using namespace std;
class Student{
	string name;
	string dob;
	public:
		void getStudentData(){
			cout<<"Enter Name: ";
			getline(cin,name);
			cout<<"Enter Date of Birth: ";
			getline(cin,dob);
		}
		
		void showStudentData(){
			cout<<"Name: "<<name<<endl;
			cout<<"Data of Birth: "<<dob<<endl;
		}
};

class Person{
	int age;
	public:
		void getPersonData(){
			cout<<"Enter Age: ";
			cin>>age;
		}
		
		void showPersonData(){
			cout<<"Age: "<<age<<endl;
		}
};

class Employee: protected Student, protected Person{
	string empID;
	int salary;
	public:
		void getEmployeeData(){
			getStudentData();
			getPersonData();
			cout<<"Enter Employee ID: ";
			cin.ignore();
			getline(cin,empID);
			cout<<"Enter salary: ";
			cin>>salary;
		}
		
		void showEmployeeData(){
			showStudentData();
			showPersonData();
			cout<<"Employee Id: "<<empID;
			cout<<"Salary: "<<salary;
		}
};

int main(){
	Employee e;
	e.getEmployeeData();
	e.showEmployeeData();
}