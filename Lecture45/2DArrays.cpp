#include<iostream>
using namespace std;

int main(){

    // declare 2D array
    // int arr[3][3];

    // // initilisation
    // int brr[3][3] = {
    //     {1, 2, 3}, 
    //     {4, 5, 6}, 
    //     {7, 8, 9}};

    // // cout<<brr[2][2]<<endl;

    // cout<<"Printing row wise: "<<endl;
    // // row-wise print
    // // outer loop
    // for(int i=0; i<3; i++){
    //     // for every row, we need to print value in each column
    //     for(int j=0; j<3; j++){
    //         cout<<brr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // cout<<"Printing column wise: "<<endl;
    // // column-wise print
    // // outer loop
    // for(int i=0; i<3; i++){
    //     // for every row, we need to print value in each column
    //     for(int j=0; j<3; j++){
    //         cout<<brr[j][i]<<" ";
    //     }
    //     cout<<endl;
    // }

    int arr[3][3];
    int rows = 3;
    int cols = 3;

    // // row-wise
    // // input
    // cout<<"Enter the values"<<endl;
    // for(int i=0; i<rows; i++){
    //     for(int j=0; j<cols; j++){
    //         cin>>arr[i][j];
    //     }
    // }
    // cout<<"Printing row wise"<<endl;
    // for(int i=0; i<rows; i++){
    //     for(int j=0; j<cols; j++){
    //         cout<<arr[i][j]<<" ";
    //     }cout<<endl;
    // }

    // column-wise
    // input
    cout<<"Enter the values"<<endl;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cin>>arr[j][i];
        }
    }
    cout<<"Printing column wise"<<endl;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }

 return 0;
}