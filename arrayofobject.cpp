#include<iostream>
using namespace std;
class employee{
    int id;
     int salary;
    public:
   
    void setid(void){
        salary=190;
        cout<<"enter id of employee";
      
        cin>>id;
    }
    void getid(void){
        cout<<"this is id of employee"<<id<<endl;
    }
};
int main(){
//     employee pinu,charvu,iuu,shruti;
// pinu.setid();
// pinu.getid();
employee fb[4];
for(int i=0;i<4;i++){

fb[i].setid();
fb[i].getid();

}

}