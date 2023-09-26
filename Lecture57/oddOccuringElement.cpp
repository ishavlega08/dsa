#include<iostream>
using namespace std;

int findOddOccuring(vector<int> arr){
    int s = 0;
    int e = arr.size()-1;
    int mid = s+(e-s)/2;

    while(s<=e){
        // single element
        if(s==e)
            return s;

        // case 2 -> mid - even or mid - odd
        if(mid%2==0){
            if(arr[mid] == arr[mid+1])
                s = mid+2;
            else
                e = mid;    
        }
        else{
            if(arr[mid] == arr[mid-1])
                s = mid+1;
            else    
                e = mid-1;
        }

        mid = s+(e-s)/2;
    }
    return -1;
}

int main(){

    vector<int> arr;
    arr.push_back(1);
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(4);
    arr.push_back(3);
    arr.push_back(3);
    arr.push_back(600);
    arr.push_back(600);
    arr.push_back(4);

    int ans = findOddOccuring(arr);
    cout<<"Index is "<<ans<<endl;
    cout<<"Value is "<<arr[ans]<<endl;

    return 0;
}