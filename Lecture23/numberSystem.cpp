#include<iostream>
using namespace std;

int decimalToBinaryMethod1(int n){
    //division method
    int binaryNo=0;
    int i=0;
    
    while(n>0){
        int bit=n%2;
        binaryNo = bit*pow(10, i++)+binaryNo;
        n=n/2;
    }
    return binaryNo;
}

int decimalToBinaryMethod2(int n){
    //bitwise method
    int binaryNo=0;
    int i=0;
    
    while(n>0){
        int bit=(n&1);
        binaryNo = bit*pow(10, i++)+binaryNo;
        n=n>>2;
    }
    return binaryNo;
}

int binaryToDecimalMethod1(int n){
    // division method
    int decimal=0;
    int i=0;
    while(n){
        int bit=n%10;
        decimal = decimal+bit*pow(2, i++);
        n/=10;
    }
    return decimal;
}

int binaryToDecimalMethod2(int n){
    // bitwise method
    int decimal=0;
    int i=0;
    while(n){
        int bit=n%10;
        decimal = decimal+(bit<<i);
        n/=10;
        i++;
    }
    return decimal;
}

int main(){

    int binaryNo;
    cin>>binaryNo;
    
    cout<<binaryToDecimalMethod1(binaryNo)<<endl;
    cout<<binaryToDecimalMethod2(binaryNo)<<endl;

    // int n;
    // cin>>n;
    // int binary = decimalToBinaryMethod1(n);
    // cout<<binary<<endl;

    // int binary2 = decimalToBinaryMethod1(n);
    // cout<<binary2<<endl;

 return 0;
}