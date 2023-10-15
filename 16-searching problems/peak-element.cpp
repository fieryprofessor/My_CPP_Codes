/*given a mountain array of length greater than 3,return its peak index.*/
#include<iostream>
using namespace std;

int peakfinder(int a[],int n){
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid = low +(high-low)/2;
        if(a[mid]>a[mid-1] && a[mid]>a[mid+1])
        return mid;
         if(a[mid]<a[mid+1])
         low=mid+1;
         else
         high = mid-1;
    }
    return -1;
}

int main(){
int n;
cout<<"Enter array size"<<endl;
cin>>n;
int a[n];
cout<<"Enter array elements"<<endl;
for(int i=0;i<n;i++){
    cin>>a[i];
}
cout<<"peak element index is:"<<endl;
cout<<peakfinder(a,n);
    return 0;
}