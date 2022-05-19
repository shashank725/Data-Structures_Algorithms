#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, target;
    cin>>n>>m>>target;
    int mat[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>mat[i][j];
        }
    }
    
    bool found = false;
    int row=0, col=m-1;
    while(row<n && col>=0)
    {
        if(mat[row][col]==target){
            found = true;
        }
        if(mat[row][col]>target){
            col--;
        }
        else{
            row++;
        }
    }

    if(found){
        cout<<"Found"<<"\n";
    }
    else{
        cout<<"Not Found";
    }

}