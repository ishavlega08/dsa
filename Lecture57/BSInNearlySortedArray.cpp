#include<iostream>
using namespace std;

int binarySearch(vector<int> arr, int target){
    int s=0;
    int e=arr.size()-1;
    int mid=s+(e-s)/2;

    while(s<=e){
        if(arr[mid] == target)
            return mid;
        else if(mid-1 >= s && arr[mid-1] == target)
            return mid-1;
        else if(mid+1 <= e && arr[mid+1] == target)
            return mid+1;

        else if(target > arr[mid])
            // right search
            s = mid+2;
        else
            // left search
            e = mid-2;                
    
        mid=s+(e-s)/2;
    }

    return -1;
}

int main(){

    vector<int> arr;
    arr.push_back(10);
    arr.push_back(3);
    arr.push_back(40);
    arr.push_back(20);
    arr.push_back(50);
    arr.push_back(80);
    arr.push_back(70);

    int target = 40;

    int ans = binarySearch(arr, target);
    cout<<"Index of "<<target<<" is "<<ans<<endl;

    return 0;
}