#include<iostream>
using namespace std;

void printRowWiseSum(int arr[][3], int rows, int cols){
    // row sum -> row-wise traversal
    cout<<"Printing row-wise sum"<<endl;
    for(int i=0; i<rows; i++){
        int sum=0;
        for(int j=0; j<cols; j++){
            sum+=arr[i][j];
        }
        cout<<sum<<endl;
    }
}

void printColWiseSum(int arr[][3], int rows, int cols){
    // row sum -> row-wise traversal
    cout<<"Printing column-wise sum"<<endl;
    for(int i=0; i<rows; i++){
        int sum=0;
        for(int j=0; j<cols; j++){
            sum+=arr[j][i];
        }
        cout<<sum<<endl;
    }
}

bool linearSearch(int arr[][3], int rows, int cols, int key){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(arr[i][j]==key){
                return true;
            }
        }
    }

    // key not present
    return false;
}

int getMax(int arr[][3], int rows, int cols){
    int maxi = INT_MIN;

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(arr[i][j]>maxi)
                maxi = arr[i][j];
        }
    }
    return maxi;
}

int getMin(int arr[][3], int rows, int cols){
    int mini = INT_MAX;

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(arr[i][j]<mini)
                mini = arr[i][j];
        }
    }
    return mini;
}

void transpose(int arr[][3], int rows, int cols, int transposeArr[][3]){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            transposeArr[j][i] = arr[i][j];
        }
    }
}

void printArr(int arr[][3], int rows, int cols){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
}

int main(){

    // -------------------------- COL-SUM print --------------------------
    int arr[3][3];
    int rows=3;
    int cols=3;

    cout<<"Enter the values"<<endl;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Printing array"<<endl;
    printArr(arr, rows, cols);

    // TRANSPOSE A MATRIX
    int transposeArr[3][3];
    cout<<"Transposing start"<<endl;
    transpose(arr, rows, cols, transposeArr);
    cout<<"Printing array again"<<endl;
    printArr(transposeArr, rows, cols);


    // printColWiseSum(arr, rows, cols);

    // MAX-MIN 
    // cout<<"Maximum element: "<<getMax(arr, rows, cols)<<endl;
    // cout<<"Minimum element: "<<getMin(arr, rows, cols)<<endl;

    // LINEAR SEARCH
    // int key = 3;
    // cout<<"Key is present: ";
    // if(linearSearch(arr, 3, 3, key))
    //     cout<<"True"<<endl;
    // else
    //     cout<<"False"<<endl;    

    // // -------------------------- ROW-SUM print --------------------------
    // int arr[3][3];
    // int rows=3;
    // int cols=3;

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

    // printRowWiseSum(arr, rows, cols);

    return 0;
}