#include<iostream>
using namespace std;
class point{
  
int x, y;
    public:
    point(int a,int b){
x=a;
y=b;
    }
    void displaypoint(){
        cout<<"the point is"<<"("<<x<<" "<<y<<")"<<endl;
    }
   
//nodatacanbegiven

};
int main(){
   point p(1,2);
    p.displaypoint();
       point l(9,0);
       l.displaypoint();   
    
    return 0;
}