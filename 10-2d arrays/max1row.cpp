#include<bits/stdc++.h>
using namespace std;
int main(){
    int row,column;
    cout<<"Enter rows and columns"<<endl;
    cin>>row>>column;

vector<vector <int>>A;
cout<<"Enter array elements"<<endl;
for(int i=0;i<row;i++){
    vector <int>a;
    for(int j=0;j<column;j++){
        int ele;
        cin>>ele;
        a.push_back(ele);
    }
    A.push_back(a);
}

int count=0;int finalcount=0;int rowstorer=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            if(A[i][j]==1){
                count=column-j;
            }
        }
            if(count>finalcount){
                finalcount=count;
                rowstorer=i;
            }
    }
    cout<<rowstorer;
    return 0;
}