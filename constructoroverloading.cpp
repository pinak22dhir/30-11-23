#include<iostream>
using namespace std;
class complex{
    //creating a constructor
    int a,b;
    public:
    //automatically invoke whenever an object is created
    complex (){
        a=0;
        b=0;}//default argument
    complex(int x,int y){
        a=x;
    b=y;
    }
    complex (int x){
        a=x;
        b=0;
    }
    void printnumber(){
        cout<<"ur number is"<<a<<"+"<<b<<"i"<<endl;
    }
};
//same as main class

int main(){
complex c1(5,7);
c1.printnumber();
complex c2(5);
c2.printnumber();
complex c3;

c3.printnumber();



    return 0;
}
