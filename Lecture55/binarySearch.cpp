#include<iostream>
// #include<algorithm>
using namespace std;

int binarySearch(int arr[], int n, int target){
    int start = 0;
    int end = n-1;
    
    // int mid = (start+end)/2;
    int mid = start + (end-start)/2;

    while(start<=end){
        int element = arr[mid];

        if(element == target){
            return mid;
        }
        else if(target<element){
            // left part m search krege
            end = mid-1;
        }
        else{
            // right part m search krege
            start = mid+1;
        }

        // mid=(start+end)/2;
        mid = start + (end-start)/2;
    }
    // target not found
    return -1;
}

int main(){

    // int arr[] = {2, 4, 7, 10, 15, 19, 21};
    // int n = 7;
    // int target;
    // cin>>target;

    // int indexOfTarget = binarySearch(arr, n, target);

    // if(indexOfTarget == -1)
    //     cout<<"Target not found"<<endl;
    // else
    //     cout<<"Target found at "<<indexOfTarget<<" index"<<endl;

    // in-built binary search function in "algorithm" library
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);

    // in-built binary search function for vector
    if(binary_search(v.begin(), v.end(), 20))
        cout<<"Found"<<endl;
    else 
        cout<<"Not found"<<endl; 


    int arr[] = {2, 4, 6, 8, 10};
    int size = 5;

    // in-built binary search function for array
    // binary_search(base_address, last_address, target)
    if(binary_search(arr, arr + size, 6))
        cout<<"Found"<<endl;
    else 
        cout<<"Not found"<<endl;        

    return 0;
}