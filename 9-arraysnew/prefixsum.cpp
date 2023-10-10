#include<bits/stdc++.h>
using namespace std;

void RunningSum(vector<int>&v){
    for(int i=1;i<v.size();i++){
        v[i]=v[i-1]+v[i];
    }
}

 int main(){
    int n;
    cout<<"Enter array length"<<endl;
    cin>>n;
    vector<int>v;
    cout<<"Enter array elements"<<endl;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    RunningSum(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
return 0;
 }