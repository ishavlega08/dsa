#include<iostream>
using namespace std;

// Method 1 -> VISITED METHOD
// TC -> O(n)
// SC -> O(1)
void missingNumber(vector<int>& nums){
    for(int i=0; i<nums.size(); i++){
        int index = abs(nums[i]);
        if(nums[index-1]>0){
            nums[index-1]*=-1;
        }
    }

    // for(int i=0; i<nums.size(); i++){
    //     cout<<nums[i]<<" ";
    // }cout<<endl;

    for(int i=0; i<nums.size(); i++){
        if(nums[i]>0){
            cout<<i+1<<" ";
        }
    }
    cout<<endl;
}

// Method 2 -> SORTING + SWAPPING METHOD
// TC -> O(n)
// SC -> O(1)
void missingNumber2(vector<int>& nums){
    int i=0;
    while(i<nums.size()){
        int index = nums[i]-1;
        if(nums[i]!=nums[index])
            swap(nums[i], nums[index]);
        else
            i++;    
    }

    // for(int i=0; i<nums.size(); i++)
    //     cout<<nums[i]<<" ";
    // cout<<endl;

    for(int i=0; i<nums.size(); i++){
        if(nums[i]!=i+1)
            cout<<i+1<<" ";
    }
    cout<<endl;
}

int main(){

    vector<int> arr;
    arr.push_back(5);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(3);
    arr.push_back(1);

    missingNumber2(arr);

    return 0;
}