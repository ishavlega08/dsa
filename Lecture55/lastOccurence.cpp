#include<iostream>
using namespace std;

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

    int target = 3;

    int indexOfLastOcc = lastOccurence(v, target);
    cout<<"Answer is "<<indexOfLastOcc<<endl;

    // in-built function
    auto indexOfLastOcc2 = upper_bound(v.begin(), v.end(), target);
    cout<<"Answer is "<< indexOfLastOcc2-v.begin() <<endl;

    return 0;
}