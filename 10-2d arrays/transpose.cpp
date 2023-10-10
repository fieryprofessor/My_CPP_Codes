#include<bits/stdc++.h>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter rows and columns"<<endl;
    cin>>r>>c;

    int a[r][c];
    cout<<"Enter array elements"<<endl;

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
    }

     cout<<"Original matrix is = "<<endl;
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
cout<<endl;
     int b[c][r];
    cout<<"Transpose matrix is = "<<endl;
     for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            b[i][j]=a[j][i];
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}