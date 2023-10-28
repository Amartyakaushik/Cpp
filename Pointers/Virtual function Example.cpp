#include<iostream>
using namespace std;

//Virtual function

//Base class
class CWA{
    protected:
    string title;
    float rating;
    
    public:
    CWA(string s,float r){
        title=s;
        rating=r;
    }
    
    virtual void display(void){
        cout<<"This is the base class"<<endl;
    }
};

//Derived class
class CWAVideo:public CWA{
    float videoLength;
    
    public:
    CWAVideo(string s,float r,float vl):CWA(s,r){
        videoLength=vl;
    }
    void display(void){
        cout<<title<<endl;
        cout<<"The rating of this video tutorial is "<<rating<<endl;
        cout<<"The length of this video tutorial is "<<videoLength<<endl;
    }
};

//Derived class
class CWAText:public CWA{
    int wordsCount;
    
    public:
    CWAText(string s,float r,int wC):CWA(s,r){
        wordsCount=wC;
    }
    void display(void){
        cout<<title<<endl;
        cout<<"The rating of this textual lecture is "<<rating<<endl;
        cout<<"The number of words in this textual lecture is "<<wordsCount<<endl;
    }
};

//Main function
int main(){
    string title;
    float rating,videoLength;
    int wordsCount;
    
    //for video of code with Amartya
    title="Amartya video tutorial";
    rating=4.92;
    videoLength=4.9;
    CWAVideo AKvideo(title,rating,videoLength);
    
    //for text of code with Amartya
    title="Amartya textual tutorial";
    rating=3.92;
    wordsCount=489;
    CWAVideo AKtext(title,rating,wordsCount);
    
    //pointer of base class
    CWA *tutrs[2];
    // pointing pointers of base class to the derived classes objects
    tutrs[0]=&AKvideo;
    tutrs[1]=&AKtext;
    
    tutrs[0]->display();
    tutrs[1]->display();
    
}








