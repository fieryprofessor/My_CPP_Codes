#include<bits/stdc++.h>
using namespace std;

int sumtask(vector<int>&a,int x ,int y){
    int s=0;
    for (int j=x;j<=y;j++){
      s=s+a[j];
    }
    return s;
}

int main(){
    int n;
    cout<<"Enter array length"<<endl;
    cin>>n;
    vector<int>a;
    cout<<"Enter array elements"<<endl;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        a.push_back(ele);
    }
    int l,r;
    cout <<"Enter left and right limits"<<endl;
    cin>>l;cin>>r;
   cout<< "the sum is ="<<sumtask(a,l,r)<<endl;
}