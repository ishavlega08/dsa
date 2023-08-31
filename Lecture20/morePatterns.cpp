#include<iostream>
using namespace std;

int main()
{

    int n;
    cin>>n;
    
    cout<<"Solid Diamond"<<endl;
    for(int row=0; row<n; row++){
        // spaces
        for(int col=0; col<n-row-1; col++){
            cout<<" ";
        }

        // stars
        for(int col=0; col<row+1; col++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int row=0; row<n; row++){
        // spaces
        for(int col=0; col<row; col++){
            cout<<" ";
        }

        // stars
        for(int col=0; col<n-row; col++){
            cout<<"* ";
        }
        cout<<endl;
    }

    // cout<<"Inverted Pyramid"<<endl;
    // for(int row=0; row<n; row++){
    //     // spaces
    //     for(int col=0; col<row; col++){
    //         cout<<" ";
    //     }

    //     // stars
    //     for(int col=0; col<n-row; col++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // cout<<"Full Pyramid"<<endl;
    // for(int row=0; row<n; row++){
    //     // spaces
    //     for(int col=0; col<n-row-1; col++){
    //         cout<<" ";
    //     }

    //     // stars
    //     for(int col=0; col<row+1; col++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

 return 0;
}