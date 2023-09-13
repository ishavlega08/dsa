#include<iostream>
using namespace std;

// global variable
// using global variables are bad practice
// int raja = 420;

int main(){

    // -------------- switch-case -----------------------------
    // we cannot use continue with a switch case statement
    int val;
    cin>>val;

    switch (val){
        case 1: cout<<"Love";
        break;

        case 2: cout<<"Ishav";
        break;

        case 3: cout<<"Ramesh";
        break;

        case 4: cout<<"Vijay";
        break;    
    
        default: cout<<"Ajay";
    }

    // -------------- variable scoping ------------------------
    // local variables

    // decalaration
    // int a;
    // initialisation
    // int b = 5;
    // updation
    // b = 16;

    // cout<<raja<<endl;

    // if(true){
    //     int b = 10;
    //     cout<<raja<<endl;
    //     cout<<b<<endl;
    // }

    // cout<<b<<endl;

    // -------------- break and continue keyword --------------
    // break 
    // int n = 5;
    // for(int i=0; i<n; i++){
    //     if(i==3){
    //         continue;
    //     }
    //     cout<<i<<endl;
    // }
    
    // break 
    // int n = 5;
    // for(int i=0; i<n; i++){
    //     cout<<"Ishav"<<endl;
    //     break;
    // }
    // cout<<"Lega"<<endl;

    // -------------- pre/post increment/decrement ------------
    
    // int a=5;
    // cout<<(++a)*(++a);

    // int a=3;
    // int b=4;

    // int c = (--a)*(b++);
    // cout<<c<<endl;
    
    // post decrement
    // int a = 11;
    // cout << a-- <<endl;;
    // cout<<a;
    
    // pre decrement
    // int a = 11;
    // cout << --a;
    
    // post increment
    // int a = 11;
    // cout << a++ <<endl;
    // cout<<a;

    // int a=6;
    // int c = a++ + 1;
    // cout<<c;

    // pre increment
    // int a = 11;
    // cout << ++a;

    // int a=6;
    // int c = ++a + 1;
    // cout<<c;

    // -------------- left and right shift --------------------
    // right shift
    // int a = -6; 
    // a = a >> 1;
    // cout<<a<<endl;

    // left shift
    // int a = 12;
    // // we cannot left shift in negative 
    // a = a << 3;

    // cout<<a<<endl;

 return 0;
}