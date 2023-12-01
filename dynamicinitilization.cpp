#include<iostream>
using namespace std;
class bankdeposit{
    int principal;
    int years;
    float interestrate;
    float returnvalue;
    public:
    bankdeposit(){};
    bankdeposit(int p, int y,float r);
    //r can be a value like 0.04
     bankdeposit(int p, int y,float r);
};
bankdeposit::  bankdeposit(int p, int y,float r){
    principal=p;
    years=y;
    interestrate=r;
    returnvalue=principal;
    for(int i=0;i<y;i++){
        returnvalue=returnvalue*(1+r);
    }
}
ba