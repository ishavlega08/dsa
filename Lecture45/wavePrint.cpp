#include<iostream>
using namespace std;

void wavePrintMatrix(vector<vector<int>> v){
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

int main(){

    vector<vector<int> > v{
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    wavePrintMatrix(v);

    return 0;
}