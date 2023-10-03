#include<iostream>
using namespace std;

int binarySearch(int arr[], int s, int e, int x){
    while(s<=e){
        int mid = s+(e-s)/2;

        if(arr[mid] == x)
            return mid;
        else if(x > arr[mid])
            s = mid+1;
        else 
            e = mid-1;         
    }

    return -1;
}

int expSearch(int arr[], int n, int x){
    if(arr[0] == x) return 0;

    int i = 1;
    while(i<n && arr[i]<=x){
        i*= 2; // i = i*2; // i<<1;
    }

    return binarySearch(arr, i/2, min(i, n-1), x);
}

int main(){

    int arr[] = {3, 4, 5, 6, 11, 13, 14 , 15, 56, 70};
    int n = sizeof(arr)/sizeof(int);
    int x = 56;

    int ans = expSearch(arr, n, x);
    cout<<ans<<endl;

    return 0;
}