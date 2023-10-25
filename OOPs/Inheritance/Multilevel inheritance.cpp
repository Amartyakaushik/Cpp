#include<iostream>
using namespace std;

//Multilevel inheritance

class Student{
    
    protected:
    int roll_number;
    
    public:
    void set_rollNumber(int);
    void get_rollNumber(void);
};

void Student::set_rollNumber(int r){ 
    roll_number=r;
}

void Student::get_rollNumber(void){   
    cout<<"The roll number is "<<roll_number<<endl;
}

//1st Derived class

class Exam : pubic Student {
    
    protected:
    float phys_marks;
    float maths_marks;
    
    public:
    void set_marks(float,float);
    void get_marks(void);
};

void Exam::set_marks(float P,float M){
    phys_marks=P;
    maths_marks=M;
}

void Exam::get_marks(void){
    cout<<"your marks of physics is "<<phys_marks<<" and of maths is "<<maths_marks<<endl;
}

//2nd Derived class

class result : public Exam{
    float percantage;
    
    public:
    void display(){
        get_rollNumber();
        get_marks();
        cout<<"the marks of roll number "<<roll_number<<" is "<<(maths_marks+phys_marks)/2<<"%"<<endl;
    }
};

//Main function
int main(){
    result Amar;
    Amar.set_marks(98.0,99.0);
    Amar.set_rollNumber(13);
    Amar.display();
}








