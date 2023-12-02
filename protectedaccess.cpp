#include<iostream>
using  namespace std;
class base {
    protected :
    int a;// private inherit ho skta hai
    private:
    int b;
};
//for a protected member:
//             public  derivation         private        protected
// 1. private not inherited    not             not 
// 2. protected  protected      private          protected 
// 3. public members  public   private           protected
class derived: protected  base {

};

int main(){
    base b;
    derived d;
    // cout<<d.a; in public it is protected cannot print 
    // cout<< b.a; inherit directly nhii hoga private ki trh hoi naature dikhayega
    return 0;
}