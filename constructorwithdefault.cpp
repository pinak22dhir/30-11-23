#include<iostream>
using namespace std;
class simple{
    int data;
    int data2;
    public:
    simple(int a,int b=99){
        data=a;
        data2=b;
    }
    void printdata();
    // void simple:: printdata(){
    //     cout<<"the value of data is"<<data <<"and"<<data2<<endl;
    // }
};
 void simple:: printdata(){
        cout<<"the value of data is"<<data <<"and"<<data2<<endl;
    }
int main(){
    simple s(1,4);
     simple s2(1);
    s2.printdata();
}