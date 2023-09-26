#include<iostream>
using namespace std;

int findPivot(vector<int> arr){
    int s = 0;
    int e = arr.size()-1;
    int mid = s+(e-s)/2;

    while(s<=e){
        if(mid+1<=e && arr[mid]>arr[mid+1] || s==e)
            return mid;
        else if(mid-1>=s && arr[mid-1]>arr[mid])
            return mid-1;
        
        else if(arr[s]>arr[mid])
            e = mid-1;
        else
            s = mid+1;

        mid = s+(e-s)/2;               
    }
    return -1;
}

int main(){

    vector<int> arr;
    arr.push_back(2);
    arr.push_back(4);
    arr.push_back(6);
    arr.push_back(8);
    arr.push_back(9);
    arr.push_back(10);

    int ans = findPivot(arr);
    cout<<"Pivot element index "<<ans<<endl;
    cout<<"Pivot element "<<arr[ans]<<endl;

    return 0;
}