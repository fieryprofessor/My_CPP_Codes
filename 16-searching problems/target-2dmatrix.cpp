/*search a target in a 2d matrix of size n*m and return 1 if found else return 0.
this matrix has following properties:
1. intergers in each row are sorted.
2. the first integer in each row is greater than the last integer of the previous row.*/
#include<iostream>
#include<vector>
using namespace std;


int targetfinder(int n,int m,int k,vector<vector <int>> &a){
int low=0;
int high = (n*m)-1;
while(low<=high){
    int mid = low+ (high-low)/2;
    int x = mid/m;
    int y=mid%m;
    if(a[x][y]==k)
    return true;
    if(a[x][y]<k)
    low= mid+1;
    else
    high = mid-1;
}
return false;
}


int main(){
int n,m;
cout<<"Enter the rows and columns"<<endl;
cin>>n>>m;

vector<vector<int>>a(n,vector<int>(m));
cout<<"Enter array elements"<<endl;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>a[i][j];
    }
}
int k;
cout<<"Enter target number"<<endl;
cin>>k;
cout<<targetfinder(n,m,k,a);
    return 0;
}

