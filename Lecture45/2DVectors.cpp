#include<iostream>
#include<vector>
using namespace std;

int main(){

    // vector<vector<int> > arr;

    // vector<int> a{1, 2, 3};
    // vector<int> b{2, 4, 6, 8, 4};
    // vector<int> c{1, 3};

    // arr.push_back(a);
    // arr.push_back(b);
    // arr.push_back(c);

    // // arr.size() to find the no of rows
    // for(int i=0; i<arr.size(); i++){
    //     // arr[0].size() to find the no of cols -> [0] is used if we have sme no of columns and [i] if different no of columns are there
    //     for(int j=0; j<arr[i].size(); j++){
    //         cout<<arr[i][j]<<" ";
    //     }cout<<endl;
    // }

    // int row=3;
    // int col=5;

    // other method for initilisation of vector
    // vector<vector<int> > arr(row, vector<int>(col, 101));

    // for(int i=0; i<arr.size(); i++){
    //     for(int j=0; j<arr[i].size(); j++){
    //         cout<<arr[i][j]<<" ";
    //     }cout<<endl;
    // }

    int row=5;
    int col=5;

    vector<vector<int> > arr(row, vector<int>(col, -8));

    // printing value
    cout<<arr[2][3]<<endl;

    // taking input
    cin>>arr[3][4];

    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<arr[i].size(); j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }

    // printing and sum for both row-wise and column-wise will be sme as 2d array, we will use arr.size() to find no of rows and arr[i].size() to find no of columns

 return 0;
}