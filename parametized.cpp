#include<iostream>
using namespace std;
class complex{
    //creating a constructor
    int a,b;
    public:
    //automatically invoke whenever an object is created
    complex (int,int);//if you change name then error 
    void printnumber(){
        cout<<"ur number is"<<a<<"+"<<b<<"i"<<endl;
    }
};
//same as main class
complex :: complex(int x,int y){//default contructor it takes no parameter
    a=10;
    b=60;
}
int main(){
    //implicit call
complex a(7,8);
a.printnumber();
//explicit call
complex b=complex(8,9);
b.printnumber();
return 0;
 
}
