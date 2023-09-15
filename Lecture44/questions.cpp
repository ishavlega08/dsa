#include<iostream>
using namespace std;

int findUnique(vector<int> arr){
    int ans=0;

    for(int i=0; i<arr.size(); i++){
        ans^=arr[i];
    }

    return ans;
}

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int main(){

    // ------------------- UNIQUE element ------------------
    // int n;
    // cout<<"Enter the size of array: ";
    // cin>>n;

    // vector<int> arr(n);
    // for(int i=0; i<n; i++){
    //     cin>>arr[i];
    // }

    // int uniqueElement = findUnique(arr);
    // cout<<"Unique element is "<<uniqueElement<<endl;

    // ------------------ UNION of 2 arrays ---------------
    // int arr[] = {1, 3, 5, 7, 9};
    // int arrSize = 5;
    // int brr[] = {2, 4, 6 , 8};
    // int brrSize = 4;

    // vector<int> ans;

    // // pushing elements of arr
    // for(int i=0; i<arrSize; i++){
    //     ans.push_back(arr[i]);
    // }

    // // pushing elements of brr
    // for(int i=0; i<brrSize; i++){
    //     ans.push_back(brr[i]);
    // }

    // // printing ans
    // for(int i=0; i<ans.size(); i++){
    //     cout<<ans[i]<<" ";
    // }cout<<endl;

    // ------------- INTERSECTION of 2 arrays -------------
    // int arr[] = {1, 2, 3, 3, 4, 6, 8};
    // int aSize = 7;
    // int brr[] = {3, 3, 4, 10};
    // int bSize = 4;

    // vector<int> ans;

    // // outer loop for arr array
    // for(int i=0; i<aSize; i++){
        
    //     int element = arr[i];
    //     // for every element, run loop brr
    //     for(int j=0; j<bSize; j++){
    //         if(element==brr[j]){
    //             // mark
    //             brr[j] = -1;
    //             ans.push_back(element);
    //         }    
    //     }
    // }

    // // print ans
    // for(auto value: ans){
    //     cout<<value<<" ";
    // }

    // ------------------ PAIR SUM -------------------------
    // vector<int> arr;
    // arr.push_back(10);
    // arr.push_back(20);
    // arr.push_back(40);
    // arr.push_back(60);
    // arr.push_back(70);

    // int sum = 80;

    // // print all pairs
    // // outer loop will traverse for each element
    // for(int i=0; i<arr.size(); i++){
    //     int element = arr[i];

    //     // for every element, will traverse for aage k elements
    //     for(int j=i+1; j<arr.size(); j++){
    //         // cout<<"("<<element<<", "<<arr[j]<<")"<<endl;

    //         if(element+arr[j]==sum)
    //             cout<<"Pair have sum "<<sum<<" is ("<<element<<", "<<arr[j]<<")"<<endl;
    //     }
    // }

    // ------------------ TRIPLET SUM -------------------------
    // vector<int> arr;
    // arr.push_back(10);
    // arr.push_back(20);
    // arr.push_back(30);
    // arr.push_back(40);

    // int sum = 80;

    // // print all pairs
    // // outer loop will traverse for each element
    // for(int i=0; i<arr.size(); i++){
    //     for(int j=i+1; j<arr.size(); j++){
    //         for(int k=j+1; k<arr.size(); k++){
    //             if(arr[i]+arr[j]+arr[k]==sum)
    //             cout<<"Pair have sum "<<sum<<" is ("<<arr[i]<<", "<<arr[j]<<", "<<arr[k]<<")"<<endl;
    //         }
    //     }
    // }

    // ------------------ FOUR PAIR SUM -------------------------
    // vector<int> arr;
    // arr.push_back(10);
    // arr.push_back(20);
    // arr.push_back(30);
    // arr.push_back(40);
    // arr.push_back(50);
    // arr.push_back(60);
    // arr.push_back(70);
    // arr.push_back(80);
    // arr.push_back(90);

    // int sum = 150;

    // // print all pairs
    // // outer loop will traverse for each element
    // for(int i=0; i<arr.size(); i++){
    //     for(int j=i+1; j<arr.size(); j++){
    //         for(int k=j+1; k<arr.size(); k++){
    //             for(int p=k+1; p<arr.size(); p++){
    //                 if(arr[i]+arr[j]+arr[k]+arr[p]==sum)
    //             cout<<"Pair have sum "<<sum<<" is ("<<arr[i]<<", "<<arr[j]<<", "<<arr[k]<<", "<<arr[p]<<")"<<endl;
    //             }
    //         }
    //     }
    // }

    // ------------------ SORT 0's and 1's (Dutch National Flag problem) -------------------------
    int arr[10] = {0, 1, 1, 0, 1, 0, 1, 1, 0, 0};
    int size = 10;

    int start = 0;
    int end = size-1;
    int i=0;

    while(i!=end){
        if(arr[i]==0){
            swap(arr[i], arr[start]);
            start++;
            i++;
        }
        else{
            swap(arr[i], arr[end]);
            end--;
        }
    }

    printArray(arr, size);

    return 0;
}