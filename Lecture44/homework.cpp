#include<iostream>
using namespace std;

// approach 1 -> using temp array 
// TC -> O(n)
// SC -> O(n)
void rotate(int arr[], int n, int d){
    // creating temp array for storing the values
    int temp[n];

    // to keep track of current element
    int k = 0;

    // storing d to n-1 elements
    for(int i=d; i<n; i++){
        temp[k] = arr[i];
        k++;
    }

    // storing 0 to d-1 elements
    for(int i=0; i<d; i++){
        temp[k] = arr[i];
        k++;
    }

    // copying the elements of temp[] to arr[]
    for(int i=0; i<n; i++){
        arr[i] = temp[i];
    }
}

// approach 2 -> rotate one
// TC -> O(n*d)
// SC -> O(1) as no extra space
void rotate1(int arr[], int n, int d){
    
    int p=1;
    while(p<=d){
        int last = arr[0];
        for(int i=0; i<n-1; i++){
            arr[i] = arr[i+1];
        }
        arr[n-1] = last;
        p++;
    }
}

void printArr(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int main(){

    // ARRAY LEFT ROTATION BY D POSITIONS
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int N = sizeof(arr)/sizeof(int);

    int d = 3;

    rotate1(arr, N, d);
    printArr(arr, N);

 return 0;
}