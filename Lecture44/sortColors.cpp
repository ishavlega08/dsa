#include<iostream>
using namespace std;

// method 1 -> by storing count, not an inplace solution
// TC -> O(N)
// SC -> O(1)
void sortColors(vector<int>& nums, int n){
    int zeroCount, oneCount, twoCount;
    zeroCount=oneCount=twoCount=0;

    for(int i=0; i<n; i++){
        if(nums[i]==0)
            zeroCount++;
        else if(nums[i]==1)
            oneCount++;
        else
            twoCount++;        
    }

    // spread
    int i = 0;
    while(zeroCount--){
        nums[i] = 0;
        i++;
    }
    while(oneCount--){
        nums[i] = 1;
        i++;
    }
    while(twoCount--){
        nums[i] = 2;
        i++;
    }
    
}

// method 2 -> 3 pointer approach
void sortColors2(vector<int>& nums) {
        int start = 0;
        int mid = 0;
        int end = nums.size()-1;

        while(mid<=end){
            if(nums[mid] == 0){
                swap(nums[mid], nums[start]);
                mid++;
                start++;
            }
            else if(nums[mid] == 2){
                swap(nums[mid], nums[end]);
                end--;
            }
            else{
                mid++;
            }
        }
    }

void printArr(vector<int> arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int main(){

    vector<int> arr;
    arr.push_back(2);
    arr.push_back(0);
    arr.push_back(2);
    arr.push_back(1);
    arr.push_back(1);
    arr.push_back(0);

    int n = arr.size();

    // sortColors(arr, n);
    sortColors2(arr);
    printArr(arr, n);

 return 0;
}