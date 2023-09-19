#include<iostream>
#include<vector>
using namespace std;

void wavePrintMatrixCol(vector<vector<int>> v){
    int rowSize = v.size();
    int colSize = v[0].size();

    for(int startCol=0; startCol<colSize; startCol++){
        // even no of column -> Top to bottom
        if((startCol&1) == 0){
            for(int row = 0; row<rowSize; row++){
                cout<<v[row][startCol]<<" ";
            }
        }
        else{
            for(int row=rowSize-1; row>=0; row--){
                cout<<v[row][startCol]<<" ";
            }
        }
    }
}

void wavePrintMatrixRow(vector<vector<int>> v){
    int rowSize = v.size();
    int colSize = v[0].size();

    for(int row=0; row<rowSize; row++){
        // even no of column -> Top to bottom
        if((row&1) == 0){
            for(int col = 0; col<colSize; col++){
                cout<<v[row][col]<<" ";
            }
        }
        else{
            for(int col=colSize-1; col>=0; col--){
                cout<<v[row][col]<<" ";
            }
        }
    }
}

int main(){

    vector<vector<int> > v{
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    wavePrintMatrixCol(v);
    cout<<endl;
    wavePrintMatrixRow(v);

    return 0;
}