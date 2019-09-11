#include<iostream>
#define N 4
#define SQN 2
using namespace std;
int grid[N][N];
void input(){
   // cout<<"enter the size of sudoku matrix";
    //cin>>n;
    
    cout<<"enter the sudoku";
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin>>grid[i][j];
        }
    }
}
bool findunassignedlocation(int *row,int *col){
    for (int i= 0; i< N;i++){
         for (int j= 0;j< N; j++){
                if (grid[i][j] == 0){
                    *row = i;
                    *col = j;
                    return true;
                }
         }
    }
    return false;
}

bool UsedInRow( int row, int num){
    for (int col = 0; col < N; col++){
        if (grid[row][col] == num){
            return true;
        }
    }
return false; 
}

bool UsedInCol( int col, int num){
    for (int row = 0; row < N; row++){
        if (grid[row][col] == num){
            return true;
        }
    }
return false;
}
bool UsedInBox( int boxStartRow, int boxStartCol, int num){
    for (int row = 0; row < SQN; row++){
        for (int col = 0; col < SQN; col++){
            if (grid[row+boxStartRow][col+boxStartCol] == num){
                return true;}}}

return false;
}
bool isSafe( int row, int col, int num){
        return (!UsedInRow(row, num) && !UsedInCol(col, num) && !UsedInBox( row - row%SQN , col - col%SQN, num));
}
bool SolveSudoku(int grid[N][N]){ 
    int row, col;
    if (!findunassignedlocation(&row, &col)){
        return true; 
    }
    for (int num = 1; num <= N; num++){
        if (isSafe( row, col, num)) {
            grid[row][col] = num; 
            if (SolveSudoku(grid)) {
                return true;
            }
            grid[row][col] = 0;
        }
    }
return false; 
}
int main(){
    input();
    bool sudoku= SolveSudoku(grid);
    if(sudoku){
        for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<grid[i][j];
        }
        cout<<"\n";
    }

    }
}
