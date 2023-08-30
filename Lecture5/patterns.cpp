#include<iostream>
using namespace std;

int main(){

    // float f = 2.7;
    // int n = 157;
    // int diff = n-f;
    // cout<<diff;

    // short a = 65535; // 2^16-1
    // short b = 10;
    // short sum = a+b;

    // patterns

    // cout<<"Solid Rectangle"<<endl;
    // // * * * * *
    // // * * * * *
    // // * * * * *
    // for(int row=0; row<3; row++){
    //     for(int col=0; col<5; col++){
    //         cout<<"* ";
    //     }cout<<endl;
    // }

    // cout<<endl<<"Solid Square"<<endl;
    // // * * * *
    // // * * * *
    // // * * * *
    // // * * * *
    // for(int row=0; row<4; row++){
    //     for(int col=0; col<4; col++){
    //         cout<<"* ";
    //     }cout<<endl;
    // }

    // cout<<endl<<"Hollow Rectangle"<<endl;
    // // * * * * *
    // // *       *
    // // * * * * *
    // for(int row=0; row<3; row++){
    //     // first row or last row -> print 5*
    //     if(row == 0 || row == 2){
    //         for(int col=0; col<5; col++){
    //             cout<<"* ";
    //         }
    //     }
    //     else{
    //         // remaining middle rows
    //         // first star
    //         cout<<"* ";
    //         // spaces
    //         for(int col=0; col<3; col++){
    //             cout<<"  ";
    //         }
    //         // last star
    //         cout<<"*";
    //     }cout<<endl;
    // }

    // cout<<endl<<"Half Pyramid"<<endl;
    // // *
    // // * *
    // // * * *
    // // * * * *
    // // * * * * *
    // // * * * * * *
    // for(int row=0; row<6; row++){
    //     for(int col=0; col<row+1; col++){
    //         cout<<"* ";
    //     }cout<<endl;
    // }

    // cout<<endl<<"Inverted Half Pyramid"<<endl;
    // // * * * * * *
    // // * * * * * 
    // // * * * * 
    // // * * * 
    // // * * 
    // // *  

    // for(int row=0; row<6; row++){
    //     for(int col=0; col<6-row; col++){
    //         cout<<"* ";
    //     }cout<<endl;
    // }

    // cout<<endl<<"Numeric Half Pyramid"<<endl;
    // // 1 
    // // 1 2
    // // 1 2 3
    // // 1 2 3 4
    // // 1 2 3 4 5
    // for(int row=0; row<5; row++){
    //     for(int col=0; col<row+1; col++){
    //         cout<<col+1<<" ";
    //     }cout<<endl;
    // }

    // cout<<endl<<"Inverted Numeric Half Pyramid"<<endl;
    // // 1 2 3 4 5
    // // 1 2 3 4
    // // 1 2 3
    // // 1 2
    // // 1
    // for(int row=0; row<5; row++){
    //     for(int col=0; col<5-row; col++){
    //         cout<<col+1<<" ";
    //     }cout<<endl;
    // }

    // cout<<endl<<"Full Pyramid"<<endl;
    // //      *
    // //     * *
    // //    * * *
    // //   * * * * 
    // //  * * * * * 
    // // * * * * * *
    // for(int row=0; row<6; row++){
    //     for(int col=0; col<6-row+1; col++){
    //         cout<<"  ";
    //     }
    //     for(int col=0; col<row; col++){
    //         cout<<"* ";
    //     }cout<<endl;
    // }

    // if else statement 
    // int score;
    // cout<<"Enter the score: ";
    // cin>>score;

    // if(score < 300){
    //     cout<<"India wins!"<<endl;
    // }
    // else{
    //     cout<<"Pak wins!";
    // }

    // if - elseif - else statement
    // int marks;
    // cout<<"Enter your marks: ";
    // cin>>marks;

    // if(marks>=90){
    //     cout<<"A Grade";
    // }
    // else if(marks>=80 && marks<90){
    //     cout<<"B Grade";
    // }
    // else if(marks>=60 && marks<80){
    //     cout<<"C Grade";
    // }
    // else if(marks>=40 && marks<60){
    //     cout<<"D Grade";
    // }
    // else{
    //     cout<<"F Grade";
    // }

    // for loop
    // for(int i=1; i<=10; i++){
    //     cout<<2*i<<endl;
    // }

    // for(int i=0; i<5; i++){
    //     cout<<i<<endl;
    // }

    // int i=0;
    // for(; i<5; i++){
    //     cout<<i<<endl;
    // }

    // int i=0;
    // for(; ;){
    //     if(i<5){
    //         cout<<i<<endl;
    //         i++;
    //     }
    // }

    // this will print nothing
    // int n;
    // if(cin>>n){
    //     cout<<"Ishav";
    // }

    // it will print nothing
    // if(cout<<"ishav"){
    //     cout<<"lega";
    // }

 return 0;
}