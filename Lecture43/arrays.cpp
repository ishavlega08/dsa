#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void inc(int arr[], int size){
    arr[0]+=10;
    printArray(arr, size);
}

int main(){

    // ---------------- pass by reference -----------
    int arr[] = {5, 6};
    int size = 2;

    inc(arr, size);
    printArray(arr, size);

    // // --------------- in class task -------------
    // // create an array of size 53
    // int arr[53];

    // // character array of size 106
    // char chArr[106];

    // // bool array of size 23
    // bool boolArr[23];

    // // take 5 inputs in array & print their doubles
    // int arr[5];
    
    // cout<<"Enter elements: ";
    // for(int i=0; i<5; i++){
    //     cin>>arr[i];
    // }

    // cout<<"Doubles: ";
    // for(int i=0; i<5; i++){
    //     cout<<2*arr[i]<<" ";
    // }
    
    // // changing all input in arrays to 1
    // int arr[5] = {1, 3, 5, 7, 9};

    // for(int i=0; i<5; i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    
    // for(int i=0; i<5; i++){
    //     arr[i] = 1;
    // }

    // for(int i=0; i<5; i++){
    //     cout<<arr[i]<<" ";
    // }

    // //  MEMSET
    // // syntax : void* memset( void* str, int ch, size_t n);
    // // It copies a single character for a specified number of times to an object. It is useful for filling a number of bytes with a given value starting from a specific memory location. It is defined in <cstring> header file.
    // char str[] = "geeksforgeeks";
    // memset(str, 't', sizeof(str));
    // cout << str;

    // // --------------- array basics -------------------
    // // array declaration 
    // int arr[7];

    // // address of an array
    // cout<<arr<<endl;
    // cout<<&arr<<endl; // both are sme 

    // cout<<"Array created successfully";

    // // --------------- array initialisation -----------
    // int arr[] = {1, 2, 3, 4, 5};
    // int brr[5] = {2, 4, 6, 8, 10};
    // int crr[10] = {2, 4, 6, 8, 10};
    // // error
    // int drr[4] = {1, 3, 5, 7, 9};

    // // character array
    // char arr[10] = {'a', 'b', 'c'};

    // cout<<"Array initialised successfully";

    // // ---------------- accessing array ---------------
    // int arr[5] = {1, 3, 5, 7, 9};

    // cout<<arr[0]<<endl;
    // cout<<arr[4]<<endl;

    // // printing all elements in array
    // for(int i=0; i<5; i++){
    //     cout<<arr[i]<<" ";
    // }

    // ---------------- taking input in array ---------------
    // int arr[5];

    // cout<<"Enter the input values in array: ";
    // for(int i=0; i<5; i++){
    //     cin>>arr[i];
    // }
    
    // cout<<"Printing the values in array: ";
    // for(int i=0; i<5; i++){
    //     cout<<arr[i]<<" "; 
    // }

    // --------- initialising all value with 0 in array ----
    // int arr[10] = {0};
    // for(int i=0; i<10; i++){
    //     cout<<arr[i]<<" "; 
    // }cout<<endl;

    // // it will only set 0 or -1 for all values in int not for any other values
    // memset(arr, -1, sizeof(arr));
    // for(int i=0; i<10; i++){
    //     cout<<arr[i]<<" "; 
    // }

 return 0;
}