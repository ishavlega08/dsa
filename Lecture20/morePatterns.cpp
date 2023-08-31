#include<iostream>
using namespace std;

int main()
{

    int n;
    cin>>n;

    cout<<"Fancy Pattern"<<endl;
    // 1
    // 2*2
    // 3*3*3
    // 4*4*4*4
    // 4*4*4*4
    // 3*3*3
    // 2*2
    // 1
    for(int row=0; row<n; row++){
        for(int col=0; col<row+1; col++){
            cout<<row+1;
            if(col!=row){ //not a last character
                cout<<"*";
            } 
        }
        cout<<endl;
    }
    for(int row=0; row<n; row++){
        for(int col=0; col<n-row; col++){
            cout<<n-row;
            if(col!=n-row-1){
                cout<<"*";
            }
        }
        cout<<endl;
    }

    // cout<<"Flipped Solid Diamond"<<endl;
    // for(int row=0; row<n; row++){
    //     // inverted half pyramid
    //     for(int col=0; col<n-row; col++){
    //         cout<<"*";
    //     }

    //     // space wala full pyramid
    //     for(int col=0; col<2*row+1; col++){
    //         cout<<" ";
    //     }

    //     // inverted half pyramid
    //     for(int col=0; col<n-row; col++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // for(int row=0; row<n; row++){
    //     // half pyramid
    //     for(int col=0; col<row+1; col++){
    //         cout<<"*";
    //     }

    //     // space wala inverted full pyramid
    //     for(int col=0; col<2*n-2*row-1; col++){
    //         cout<<" ";
    //     }

    //     // half pyramid
    //     for(int col=0; col<row+1; col++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // cout<<"Hollow Diamond"<<endl;
    // for(int row=0; row<n; row++){
    //     // spaces
    //     for(int col=0; col<n-row-1; col++){
    //         cout<<" ";
    //     }

    //     // stars
    //     for(int col=0; col<2*row+1; col++){
    //         if(col==0 || col==2*row){
    //             // first character
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }
    // for(int row=0; row<n; row++){
    //     // spaces
    //     for(int col=0; col<row; col++){
    //         cout<<" ";
    //     }

    //     // stars
    //     for(int col=0; col<2*n-2*row-1; col++){
    //         if(col==0 || col==2*n-2*row-2){
    //             // first character
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // cout<<"Solid Diamond"<<endl;
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