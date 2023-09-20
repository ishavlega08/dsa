#include<iostream>
using namespace std;

int firstOccurence(vector<int> arr, int target){
    int s = 0;
    int e = arr.size()-1;
    
    int mid = s + (e-s)/2;

    int ans = -1;

    while(s<=e){

        if(arr[mid] == target){
            // ans store and then left search
            ans = mid;
            e = mid-1;
        }
        else if(target>arr[mid]){
            // right search
            s = mid+1;
        }
        else{
            // left search
            e = mid-1;
        }

        mid = s + (e-s)/2;
    }

    return ans;
}

int lastOccurence(vector<int> arr, int target){
    int s = 0;
    int e = arr.size()-1;
    
    int mid = s + (e-s)/2;

    int ans = -1;

    while(s<=e){

        if(arr[mid] == target){
            // ans store and then right search
            ans = mid;
            s = mid+1;
        }
        else if(target>arr[mid]){
            // right search
            s = mid+1;
        }
        else{
            // left search
            e = mid-1;
        }

        mid = s + (e-s)/2;
    }

    return ans;
}

int main(){

    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(3);
    v.push_back(3);
    v.push_back(4);
    v.push_back(4);
    v.push_back(4);
    v.push_back(4);
    v.push_back(4);
    v.push_back(6);
    v.push_back(7);
    v.push_back(9);

    int target = 4;

    int firstOcc = firstOccurence(v, target);
    int lastOcc = lastOccurence(v, target);

    int totalOcc = lastOcc - firstOcc + 1;
    cout<<"Total no of occurence "<<totalOcc<<endl;

    return 0;
}