#include<iostream>
using namespace std;

// DUTCH NATIONAL FLAG ALGO
// TC -> O(n)
// SC -> O(1)
void moveAllNegToLeft(vector<int>& arr){
    int start = 0;
    int end = arr.size()-1;

    while(start<end){
        if(arr[start]<0){
            start++;
        }    
        else if(arr[end]>0){
            end--;
        }    
        else{
            swap(arr[start], arr[end]);
        }        
    }
}

void printArr(vector<int> arr){
    for(int i=0; i<arr.size(); i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

int main(){

    vector<int> arr;
    arr.push_back(-1);
    arr.push_back(2);
    arr.push_back(-3);
    arr.push_back(4);
    arr.push_back(-5);
    arr.push_back(0);
    arr.push_back(23);
    arr.push_back(-6);
    arr.push_back(-34);

    // TC -> O(nlogn)
    // sort(arr.begin(), arr.end());

    moveAllNegToLeft(arr);
    printArr(arr);

 return 0;
}