//properties of friend class 
// since it is not in scope of class, it cannot be called the object 
//usually contains ths object as arguments 
// after class not link with object link the private parts using friend
#include<iostream>
using namespace std;
class complex;
class calculator{
    public:
    
        int add(int a,int b){
            return(a+b);
        }
        // int sumrealcomplex(complex o1,complex o2){
        //     return(o1.a+o2.b);
        // }
        int sumrealcomplex(complex ,complex );
        int sumcompcomplex(complex ,complex );
    };

class complex{
    int a,b;
    //krlo mera data access
    // friend int calculator::sumrealcomplex(complex ,complex );
    //  friend int calculator::sumcompcomplex(complex ,complex );k
    friend class calculator;
    public:
    void setnumber(int n1,int n2){
        a=n1;
        b=n2;
    }
    void printnumber(){
        cout<<"ur number is"<<a<<"+"<<b<<"i"<<endl;
    }
};
int calculator:: sumrealcomplex(complex o1, complex o2)
{
    return (o1.a+o2.a);
}
int calculator:: sumcompcomplex(complex o1, complex o2)
{
    return (o1.b+o2.b);
}
int main(){
    complex o1,o2;
    o1.setnumber(1,4);
    o2.setnumber(9,4);
    calculator calc;
   int res= calc.sumrealcomplex(o1,o2);
   cout<<"the sum of real part of o1 and o2"<<res<<endl;
   int res2= calc.sumcompcomplex(o1,o2);
   cout<<"the sum of real part of o1 and o2"<<res2<<endl;
   return 0;
    
}