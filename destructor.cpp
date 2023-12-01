#include<iostream>
using namespace std;
int count=0;
class num{
    public:
    num(){
        count++;
        cout<<"time when constuctor is called"<<count<<endl;
    }
    ~num(){
        cout<<"this is the time when destructor is called"<<count<<endl;
        count--;
    }
    // void display(){
    //     cout<<"the number for this object is"<<a<<endl;
    // }
};
int main(){
    cout<<"we are inside our main function"<<endl;
    cout<<"creating first object n1"<<endl;;
num n1;//created a block{
{
    cout<<"entering this block "<<endl;
    cout<<"creating 2 or more objects "<<endl;
    num n2,n3;
    cout<<"existing this block "<<endl;
}
cout<<"back to main"<<endl;// main block is n1 
return 0;
}