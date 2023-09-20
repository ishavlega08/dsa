#include<iostream>
using namespace std;

int findSqrt(int n){
    int target = n;
    int s = 0;
    int e = n;

    int mid = s+(e-s)/2;

    int ans = -1;

    while(s<=e){
        if(mid*mid==target){
            return mid;
        }
        else if(mid*mid>target){
            // left search
            e = mid-1;
        }
        else{
            // right search
            ans = mid;
            s = mid+1;
        }

        mid = s+(e-s)/2;
    }

    return ans;
}

int main(){

    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int ans = findSqrt(n);
    cout<<"Ans is "<<ans<<endl;

    int precision;
    cout<<"Enter the number of floating digits in precision: ";
    cin>>precision;

    double step = 0.1;
    double finalAns = ans;

    for(int i=0; i<precision; i++){
        for(double j=finalAns; j*j<=n; j = j+step){
            finalAns = j;
        }
        step/=10;
    }

    cout<<"Final ans is "<<finalAns<<endl;

    return 0;
}