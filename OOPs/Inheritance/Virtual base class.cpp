#include<iostream>
using namespace std;

//VIRTUAL BASE CLASS
class Student{
    private:
    int roll_num;
    
    public:
    void set_roll(int r){
        roll_num=r;
    }
    void print_roll(void){
        cout<<roll_num;
    }
};

class Test:virtual public Student{
    protected:
    int phy_marks,maths_marks;
    
    public:
    void set_marks(int P,int M){
        phy_marks=P;
        maths_marks=M;
    }
    
    void print_marks(){
        cout<<"these are your marks:"<<endl;
        cout<<"physics:"<<phy_marks<<endl;
        cout<<"Maths:"<<maths_marks<<endl;
    }
};

class Score:public virtual Student{
    protected:
    int pt_score;
    
    public:
    void set_score(int pt){
        pt_score=pt;
    }
    void print_score(void){
        cout<<"Your PT score is "<<pt_score<<endl;
    }
};


class Result: public Test,public Score{
    private:
    float total;
    
    public:
    void display_result(){
        total=maths_marks+phy_marks+pt_score;
        print_roll();
        print_score();
        print_marks();
        cout<<"your total marks is "<<total<<endl;
    }
    
};


int main(){
    Result Amar;
    Amar.set_roll(13);
    Amar.set_marks(99,98);
    Amar.set_score(9);
    
    Amar.display_result();
}





