#include<iostream>
using namespace std;
// class employee2{

// }piny,vipin,charvu;
// class employee{
//     private:
//     int a,b,c;
//     public:
//     int d,e;
// //nodatacanbegiven

//     void setdata(int a1,int b1,int c1);
//     void getdata(){
//         cout<<"the value of a"<<a<<endl;//declaration 
//          cout<<"the value of d"<<d<<endl;
//     }

// };
// void employee:: setdata(int a1,int b1,int c1){
//     a=a1;
//     b=b1;
//     c=c1;
// }
// int main(){
//     employee pinak;
//     // pinak.d=99;
//       pinak.d=99;
//     pinak.setdata(1,2,4);
//     pinak.getdata();
//     return 0;
// }
class binary{
string s;
void check_bin(void);
public:
void read(void);
// void check_bin(void);
void ones(void);
void display(void);
};
void binary:: read(void){
    cout<<"enter a binary";
    cin>>s;
}
// void check_bin(void){
//     for(int i=0;i<s.length();i++){
//         if(s.at(i)!='0'&&  s.at(i)!='1'){
//             cout<<"inccorrect binary format"<<endl;
//         }
//     }
// }
void binary ::check_bin(void){
    for(int i=0;i<s.length();i++){
        if(s.at(i)!='0'&&  s.at(i)!='1'){
            cout<<"inccorrect binary format"<<endl;
            exit(0);
        }
    }
}
void binary:: ones(void){
    // check_bin(); nesting
    for(int i=0;i<s.length();i++){
        if(s.at(i)=='0'){
            s.at(i)='1';
        }
        else{
           s.at(i)='0' ;
        }
    }
}
void binary:: display(void){
for(int i=0;i<s.length();i++
){
    cout<<s.at(i);
}cout<<endl;}
int main(){
    binary b;
    b.read();
    // b.check_bin();
    b.display();
    b.ones();
    b.display();
    return 0;
}