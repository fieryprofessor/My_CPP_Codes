#include<bits/stdc++.h>
using namespace std;

int main(){
    int rows,columns;
    cout<<"Enter the number of rows"<<endl;
    cin>>rows;
    cout<<"Enter the number of columns"<<endl;
    cin>>columns;
    int arr[rows][columns];
    cout<<"Enter the array elements"<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"The 2D array is = "<<endl;
    cout<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}