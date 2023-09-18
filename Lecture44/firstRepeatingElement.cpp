#include<iostream>
using namespace std;

// Method 1 
// TC -> O(n^2)
// SC -> O(1)
int firstRepeated(vector<int> arr){

    int n = arr.size();

    for(int i=0; i<n; i++){
        bool visited = false;
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                return i+1;
            }
        }
    }
    return -1;
}

// Method 2 -> using HASHING 
// TC -> O(n)
// SC -> O(n)
int firstRepeated2(vector<int> arr){

    int n = arr.size();    

    unordered_map<int, int> hash;
    for(int i=0; i<n; i++){
        hash[arr[i]]++;
    }

    for(int i=0; i<n; i++){
        if(hash[arr[i]]>1)
            return i+1;
    }
    return -1;
}

int main(){

    vector<int> arr;
    arr.push_back(1);
    arr.push_back(5);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(3);
    arr.push_back(5);
    arr.push_back(6);

    cout<<firstRepeated2(arr)<<endl;

 return 0;
}