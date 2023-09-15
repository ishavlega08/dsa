#include<iostream>
//#include<limits.h>
using namespace std;

void printArr(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

bool linearSearch(int arr[], int size, int key){
    for(int i=0; i<size; i++){
        if(arr[i]==key)
            return true;
    }
    return false;
}

int main(){

    // -------------- linear search -----------------------
    // method 1 -> using function
    // int arr[] = {1, 3, 5, 7, 9};
    // int size = 5;

    // cout<<"Enter the element to find: ";
    // int key;
    // cin>>key;

    // if(linearSearch(arr, size, key))
    //     cout<<"Found"<<endl;
    // else
    //     cout<<"Not found"<<endl;    

    // method 2 -> without function
    // int arr[10] = {2, 4, 6, 8 , 10};
    // int size=5;

    // int key=10;
    // bool flag=0;
    // // 0 -> absent
    // // 1 -> present

    // for(int i=0; i<size; i++){
    //     if(arr[i]==key)
    //         flag=1;
    // }

    // if(flag)
    //     cout<<"Present"<<endl;
    // else   
    //     cout<<"Absent"<<endl;

    // ----------------- 0's and 1's in array --------------  
    // int arr[] = {0, 1, 1, 0, 1, 0, 0, 0, 1, 0, 1, 1};
    // int size = 12;

    // int numZero=0;
    // int numOne=0;

    // for(int i=0; i<size; i++){
    //     // if zero found, increment numZero
    //     if(arr[i]==0)
    //         numZero++;

    //     // if one found, increment numOne
    //     if(arr[i]==1)
    //         numOne++; 
    // }

    // cout<<"Number of 0's: "<<numZero<<endl;
    // cout<<"Number of 1's: "<<numOne<<endl;

    // --------- maximum and minimum number in array --------
    // int arr[] = {2, 4, 6, 1, -4, 7, 9, 12, 56, 43, 21};
    // int size = 11;

    // // initialise the maxi variable with the minimum possible integer value
    // int maxi = INT_MIN;
    
    // // initialise the mini variable with the maximum possible integer value
    // int mini = INT_MAX;

    // for(int i=0; i<size; i++){
    //     if(arr[i]>maxi)
    //         // found a number greater then maxi, update maxi
    //         maxi=arr[i];
    //     else if(arr[i]<mini)
    //         // found a number greater then maxi, update maxi
    //         mini=arr[i];

    // }

    // cout<<"Maximum number: "<<maxi<<endl;
    // cout<<"Minimum number: "<<mini<<endl;

    // -------------- extreme print in array ----------------
    // int arr[8] = {10, 20, 30, 40, 50, 60, 70};
    // int size = 7;

    // int start=0;
    // int end=size-1;

    // while(start<=end){
    //     if(start==end){
    //         cout<<arr[start]<<" ";
    //     }
    //     else{
    //         cout<<arr[start]<<" ";
    //         cout<<arr[end]<<" ";
    //     }

    //     start++;
    //     end--;
    // }

    // ---------------- reverse an array --------------------
    // int arr[8] = {10, 20, 30, 40, 50, 60, 70, 80};
    // int size = 8;

    // int start=0;
    // int end=size-1;

    // while(start<=end){
    //     swap(arr[start], arr[end]);
    //     start++;
    //     end--;
    // }

    // printArr(arr, size);

    // ------------------- swapping -------------------------
    int num1 = 12;
    int num2 = 6;

    cout<<"Before swapping: "<<num1<<" "<<num2<<endl;

    // using temporary integer variable
    // int temp = num1;
    // num1 = num2;
    // num2 = temp;
    // cout<<"After swapping: "<<num1<<" "<<num2<<endl;

    // using arithemetic operators
    // num1 = num1 + num2; // 12+6 = 18
    // num2 = num1 - num2; // 18-6 = 12
    // num1 = num1 - num2; // 18-12 = 6
    // cout<<"After swapping: "<<num1<<" "<<num2<<endl;

    // using bitwise XOR operator(^)
    num1 = num1 ^ num2;
    num2 = num1 ^ num2;  
    num1 = num1 ^ num2;
    cout<<"After swapping: "<<num1<<" "<<num2<<endl;

 return 0;
}