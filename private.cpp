#include<iostream>
using namespace std;
class employee{
    private:
    int a,b,c;
    public:
    int d,e;
//nodatacanbegiven

    void setdata(int a1,int b1,int c1);
    void getdata(){
        cout<<"the value of a"<<a<<endl;//declaration 
         cout<<"the value of d"<<d<<endl;
    }

};
void employee:: setdata(int a1,int b1,int c1){
    a=a1;
    b=b1;
    c=c1;
}
int main(){
    employee pinak;
    // pinak.d=99;
      pinak.d=99;
    pinak.setdata(1,2,4);
    pinak.getdata();
    return 0;
}