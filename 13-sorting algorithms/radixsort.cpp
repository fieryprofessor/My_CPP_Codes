#include<iostream>
#include<vector>
using namespace std;

void Countsort(vector<int>&v,int n,int pos){
    //creating frequency array
    vector<int>freq(10,0);
    for(int i=0;i<n;i++){
        freq[(v[i]/pos)%10]++;
    }
    //finding cumulative frequency
    for(int i=1;i<10;i++){
        freq[i]+=freq[i-1];
    }
    //sorting the elements in ans array
    vector<int>ans(n);
    for(int i=n-1;i>=0;i--){
        ans[--freq[(v[i]/pos)%10]]=v[i];
    }
    //copying back elements to main array
    for(int i=0;i<n;i++){
        v[i]=ans[i];
    }
}

void Radixsort(vector<int>&v , int n){
    int max=v[0];
    for(int i=0;i<n;i++){
        if(v[i]>max){
            max=v[i];
        }
    }
    for(int pos=1;(max/pos)>0;pos*=10){
        Countsort(v,n,pos);
    }
}

int main(){
int n;
cout<<"Enter array size"<<endl;
cin>>n;

vector<int>v(n);
cout<<"Enter array elements"<<endl;
for(int i=0;i<n;i++){
    cin>>v[i];
}

Radixsort(v,n);

for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
}
    return 0;
}