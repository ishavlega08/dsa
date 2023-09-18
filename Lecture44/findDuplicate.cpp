#include<iostream>
using namespace std;

// this question have more approaches but till now what have been studied these are the approaches 

// Method 1 -> SORTING METHOD
// this method will modify the array
// TC -> O(nlogn)
// SC -> O(n)
int findDuplicate(vector<int> nums){
    sort(nums.begin(), nums.end());
    int ans=0;

    for(int i=0; i<nums.size()-1; i++){
        if(nums[i]==nums[i+1])
            ans = nums[i];
    }

    return ans;
}

// Method 2 ->  NEGATIVE MARKING METHOD
// this method will modify the array
// in this we will treat the elements in the array as index
// TC -> O(n)
// SC -> O(1)
int findDuplicate2(vector<int> nums){
    int ans = -1;

    for(int i=0; i<nums.size(); i++){
        int index = abs(nums[i]); // abs is absolute as we have marked elements negative

        // already visited?
        if(nums[index]<0){
            ans = index;
            break;
        }

        // mark visited
        nums[index] *= -1;
    }

    return ans;    
}

// Method 3 -> positing - in this we will position the elements with their index no
// this will modify the array
// TC -> O(n)
// SC -> O(1)
int findDuplicate3(vector<int> nums){
    while(nums[0]!=nums[nums[0]]){
        swap(nums[0], nums[nums[0]]);
    }

    return nums[0];
}

int main(){

    vector<int> arr;
    arr.push_back(3);
    arr.push_back(1);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(2);

    cout<<"Duplicate no is "<<findDuplicate3(arr)<<endl;

 return 0;
}