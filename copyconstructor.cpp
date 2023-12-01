#include<iostream>
using namespace std;
class number{
    int a;
    public:
    number(){
        // a=0;
    }//default important
    number(number &obj){
        a=obj.a;
    }
    number(int n){
        a=n;
    }
    void display(){
        cout<<"the number for this object is"<<a<<endl;
    }
};
int main(){
    number x,y,z(56);
    x.display();
     y.display();
    z.display();
//z1 should resemble 
number z1(x);//defsult copy constructor  compiler khud copy constructor dedega
z1.display();
// z2=x//copy construct not invoked
number z3=z;
z3.display();

return 0;
}