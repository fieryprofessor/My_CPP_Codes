#include<iostream>
#include<vector>
using namespace std;

void Countsort(vector<int>&v){
    int n = v.size();
    //finding max element
    int max_ele=v[0];
    for(int i=0;i<n;i++){
        if(v[i]>max_ele){
            max_ele=v[i];
        }
    }
//calculating frequency of each element
    vector<int>freq(max_ele+1,0);
    for(int i=0;i<n;i++){
        freq[v[i]]++;
    }
    //calculating cumulative frequency
    for(int i=1;i<=max_ele;i++){
        freq[i] += freq[i-1];
    }
    //calculating the sorted array
   vector<int>ans(n);
    for(int i=(n-1);i>=0;i--){
        ans[--freq[v[i]]]=v[i];
    }
    //copying back ans array to original array
    for(int i=0;i<n;i++){
        v[i]=ans[i];
    }
}

int main(){
int n;
cout<<"Enter array size"<<endl;
cin>>n;

vector<int> v(n);
cout<<"Enter array elements"<<endl;
for(int i=0;i<n;i++){
   cin>>v[i]; 
}

Countsort(v);

for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
}
    return 0;
}