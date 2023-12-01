#include<iostream>
using namespace std;
class complex{
    //creating a constructor
    int a,b;
    public:
    //automatically invoke whenever an object is created
    complex (void);//if you change name then error 
    void printnumber(){
        cout<<"ur number is"<<a<<"+"<<b<<"i"<<endl;
    }
};
//same as main class
complex :: complex(void){//default contructor it takes no parameter
    a=10;
    b=60;
}
int main(){
complex c1,c2,c3;

c1.printnumber();

c2.printnumber();

c3.printnumber();

    return 0;
}
//it should be declare in public section of the class
//invoked when object is created
//they dont have return tpes we cannot reffer to address