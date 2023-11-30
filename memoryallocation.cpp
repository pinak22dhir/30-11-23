// #include<iostream>
// using namespace std;
// class shop{
//     int itemid[100];
//     int itemprice[100];
//     int counter;
//     public:
// void initcounter(void){counter=0;}
// void getprice(void);
// void setprice(void);
// void displayprice(void);


// };
// void shop::setprice(void){
// cout<<"enter id of ur element"<<counter<<endl;
// cin>>itemid[counter];
// cout<<"enter price of ur element"<<endl;
// cin>>itemprice[counter];counter++;
// }
// void shop:: displayprice(void){
//     for(int i=0;i<i<counter;i++){
//         cout<<"the price of item with id"<<itemid[i]<<" "
//     <<"is"<<itemprice[i];}
// }
// int main(){
//     shop dukaan;
//     dukaan.setprice();
//       dukaan.setprice();
//         dukaan.setprice();
//         dukaan.displayprice();
//     return 0;
// }
#include<iostream>
using namespace std;

class shop {
    int itemid[100];
    int itemprice[100];
    int counter;

public:
    void initcounter(void) { counter = 0; }
    void getprice(void);
    void setprice(void);
    void displayprice(void);
};

void shop::setprice(void) {
    cout << "Enter id of your element " << counter +1<< endl;
    cin >> itemid[counter];
    cout << "Enter price of your element" << endl;
    cin >> itemprice[counter];
    counter++;
}

void shop::displayprice(void) {
    for (int i = 0; i < counter; i++) {
        cout << "The price of item with id " << itemid[i] << " is " << itemprice[i] << endl;
    }
}

int main() {
    shop dukaan;
    shop dukan;
    dukaan.initcounter();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    // dukaan.initcounter();
    // dukan.setprice();
    // dukan.setprice();
    // dukan.setprice();
    // dukan.displayprice();

    dukaan.displayprice();
        // dukan.displayprice();

    return 0;
}
