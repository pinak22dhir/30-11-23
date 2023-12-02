
#include<iostream>
using namespace std;
class student{
    protected:
    int roll_no;
    public:
    void set_rollno(int);
     void get_rollno(void);//for printing 
};
void student:: set_rollno(int r){
    roll_no=r;
}
void student:: get_rollno(){
 cout<<"the roll number is "<<roll_no<<endl;
}
class exam: public student{// in protected public remains rotected
    protected:
    float maths;
    float physics;
    public:
void set_marks(float,float);
void get_marks(void);
};
void exam:: set_marks(float m1,float m2){
    maths=m1;
    physics=m2;
}
void exam:: get_marks(){
    cout<<"the marks obtained in maths are"<<maths<<endl;
     cout<<"the marks obtained in physics are"<<physics<<endl;

}
class result:public exam{
float percentage;
public:
void display(){
   
    get_marks();
cout<<"ur percentage is"<<(maths+physics)/2<< endl;}
};
//a to b to c
int main(){
result piaki;
piaki.set_rollno(789);
piaki.set_marks(79.89,90);
piaki.display();
}
