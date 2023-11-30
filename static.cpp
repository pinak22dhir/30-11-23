#include<iostream>
using namespace std;
class employee{
int id;
static int count;
// int count=0;
//static functions only static mebers only with class no object
//bydefault u start with it zero only annd bahr declare
public:

void setdata(void){
    cout<<"enter id";
    cin>>id;
    count++;
}
void getdata(void){
    cout<<"the id of employee is" <<id<<" this ids employee number" <<count<<endl;

}
static void getcount(void){
    cout<<"the value of count is tt " <<count<<endl;
}};
// 
//static in objects dependes on class if u write object 4 next willl be 5
//ek hi variable ko share 
int employee:: count=1000;//default value is 0
int main(){
    employee harry,pinak,charvu;
    // harry.count=9;
  
    harry.setdata();
 harry.getdata();
   employee:: getcount();
    pinak.setdata();
   pinak.getdata();
     employee:: getcount();
   charvu.setdata();
    charvu.getdata();
      employee:: getcount();
      return 0;
}