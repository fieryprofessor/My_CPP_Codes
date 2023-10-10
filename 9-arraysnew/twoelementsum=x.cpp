#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"enter the array elements"<<endl;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        arr.push_back(ele);
    }
    int x;
    cout<<"Enter the element whose sum need to be searched"<<endl;
    cin>>x;
    int checker=0;
    for(int j:arr){
        for(int k:arr){
if((j+k)==x)
checker=1;
} 
   }
   if(checker==1){
    cout<<"YES"<<endl;
   }
   else{
    cout<<"NO"<<endl;
   }
    return 0;
}