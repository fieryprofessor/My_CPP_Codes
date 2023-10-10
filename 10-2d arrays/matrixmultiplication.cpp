#include<bits/stdc++.h>
using namespace std;
int main(){
    //taking size of both arrays
    int r1,c1,r2,c2;
    cout<<"Enter the size of the matrices"<<endl;
    cout<<"Enter the number of rows in matrix 1"<<endl;
    cin>>r1;
    cout<<"Enter the number of columns in matrix 1"<<endl;
    cin>>c1;
    cout<<"Enter the number of rows in matrix 2"<<endl;
    cin>>r2;
    cout<<"Enter the number of columns in matrix 2"<<endl;
    cin>>c2;

   //taking elements and creating both the arrays
    int a[r1][c1],b[r2][c2];
    cout<<"Enter first array elements"<<endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>a[i][j];
        }
    }
    cout<<"Enter second array elements"<<endl;
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>b[i][j];
        }
    }
    //now creating multiplicative array
    int c[r1][c2];
    if(c1==r2){
        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                int expressionadder =0;
                for(int k=0;k<r2;k++){
                    expressionadder+=a[i][k]*b[k][j];
                }
                c[i][j]=expressionadder;
            }
        }
    }
    else{
        cout<<"Multiplication of the two matrices is not possible"<<endl;
    }

    //printing the final array
    for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                cout<<c[i][j]<<" ";
            }
            cout<<endl;
    }
    return 0;
}