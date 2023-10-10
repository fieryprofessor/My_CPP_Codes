#include<bits/stdc++.h>
using namespace std;

void spiralOrder(vector<vector<int>>&matrix){
    int top=0;
    int bottom=matrix.size()-1;
    int left=0;
    int right=matrix[0].size()-1;
    int direction=0;

    while(left<=right && top<=bottom){

        if(direction==0){
            // left -> right
         for(int column=left;column<=right;column++){
            cout<<matrix[top][column]<<" ";
         }
         top++;
        }

        if(direction==1){
            // top -> bottom
            for(int row=top;row<=bottom;row++){
                cout<<matrix[row][right]<<" ";
            }
            right--;
        }

        if(direction==2){
            // right -> left 
            for(int column=right;column>=left;column--){
                cout<<matrix[bottom][column]<<" ";
            }
            bottom--;
        }

        if(direction==3){
            // bottom -> top
            for(int row=bottom;row>=top;row--){
                cout<<matrix[row][left]<<" ";
            }
            left++;
        }
        direction = (direction+1)%4;
    }
}


int main(){
    int n,m;
    cout<<"Enter the number of rows and columns"<<endl;
    cin>>n>>m;

    vector<vector<int>>matrix(n,vector<int>(m));
    cout<<"Enter matrix elements"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }
    cout<<"The spiral matrix is:";
    spiralOrder(matrix);
    return 0;
}