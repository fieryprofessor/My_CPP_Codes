#include<bits/stdc++.h>
using namespace std;

int sumcal(vector<vector<int>>&matrix,int l1,int r1,int l2, int r2){
int sum=0;
for(int i=l1;i<=l2;i++){
    for(int j=r1;j<=r2;j++){
        sum+=matrix[i][j];
    }
}
return sum;
}

int main(){
    int n,m;
    cout<<"Enter the size of the matrix"<<endl;
    cin>>n>>m;

    vector<vector<int>>matrix(n,vector<int>(m));
    cout<<"Enter the matrix elements"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }

int l1,r1,l2,r2;
cout<<"Enter the limitations for finding the sum"<<endl;
cin>>l1>>r1>>l2>>r2;

    cout<<"original matrix is:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    int sum =sumcal(matrix,l1,r1,l2,r2);
    cout<<"the sum is:"<<sum;

    return 0;
}