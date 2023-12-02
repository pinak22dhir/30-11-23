#include<iostream>
using namespace std;
class employee{
    // int id;
    // float salary;
    public: 
      int id;
        float salary;
    employee(int empid){
        id=empid;
        salary=78.0;}
};
//default : private visibility
class programmer: public employee{
    public:
//    programmer(int imp2id){
//         id=imp2id;
//     }
   programmer(int impid) : employee(impid) {
    id=impid;
   }
    void getdata(){cout<<id<<endl;}
    int languagecode=9;
};
//derived class syntac{}: visibility
//base class name{ class mebers methods}
int main(){
employee pinak(1),charvu(8);
// cout<<pinak.salary<<endl;
// cout<<charvu.salary<<endl;
programmer paku(6);
cout<<paku.languagecode;
paku.getdata();//as void toh no cout
cout<<paku.id<<endl;

return 0;
}
//base class ke private hi inherit hoyenge
