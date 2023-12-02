#include<iostream>
using namespace std;
class base1{
    protected:
    int baseint;
    public:
    void setbasic_int(int a){
baseint=a;
    }
};
class base2{
    protected :
    int base2int;
    public:
     void setbasi2_int (int a){
        base2int=a;

    }
};
class derived: public base1 , public base2{
    public:
    void show(){
        cout<<"the value of base1 is"<<base1int<<endl;
    }
};

int main(){
    derived pinu;
    pinu.setbase
}
