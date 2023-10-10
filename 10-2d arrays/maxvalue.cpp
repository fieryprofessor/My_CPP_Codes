#include<bits/stdc++.h>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter number of rows and columns"<<endl;
    cin>>r>>c;

    int a[r][c];
    cout<<"Enter array elements"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
int maxele=a[0][0];
 for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(a[i][j]>maxele){
                maxele=a[i][j];
            }
        }
    }
    cout<<"the largest element of the matrix is = "<<maxele;

    return 0;
}