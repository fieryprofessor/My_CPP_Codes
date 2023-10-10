//given an array of integers, print sums of all subsets in it.
#include<iostream>
#include<vector>
using namespace std;

void subset(int *arr,int n,int i,int s,vector <int>&result){

if(i==n){
 result.push_back(s);
 return;
}
subset(arr,n,i+1,s+arr[i],result);
subset(arr,n,i+1,s,result);

}

int main(){
int n;
cout<<"Enter array size"<<endl;
cin>>n;
int arr[n];
cout<<"Enter array elements"<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
vector<int>result;
subset(arr,n,0,0,result);
for(int i=0;i<result.size();i++){
    cout<<result[i]<<" ";
}
    return 0;
}