#include<iostream>
using namespace std;
class base{
    int data1;
    //private by default  and is not inheritale
    public:
    int data2;
    void setdata();
    int getdata1();
     int getdata2();

};
void base:: setdata(void){
    data1=90;
    data2=98;

}
int base:: getdata1(){
    return data1;
    
}
int base:: getdata2(){
    return data2;
    
}
class derived:private base{
    //class is being derived publically
    int data3;
    public:
    void process();
    void display();
};
void derived:: process(){
    setdata();
    data3=data2 *getdata1();
}
void derived:: display(){
cout<<"value of data1 is"<<getdata1()<<endl;
cout<<"value of data2 is"<<data2<<endl;
cout<<"value of data3 is"<<data3<<endl;
}
int main(){
derived der;
// der.setdata(); cant work on private member
der.process();
der.display();
return 0;
}