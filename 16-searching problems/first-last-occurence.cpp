/*given an array of integers sorted in ascending order. 
find the first and the last position of the given target element in the sorted array.
follow 0 based indexing and if target is not found in the array then return [-1,-1]. */
#include<iostream>
#include<vector>
using namespace std;

int firstOccurence(int a[],int n,int k){
    int low=0;
    int high= n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(a[mid]==k){
            while(a[mid]==k){
                mid--;
            }
        return mid+1;
        }
        else if(a[mid]<k){
          low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return -1;
}

int lastOccurence(int a[],int n,int k){
    int low=0;
    int high= n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(a[mid]==k){
            while(a[mid]==k){
                mid++;
            }
        return mid-1;
        }
        else if(a[mid]<k){
          low = mid+1;
        }
        else{
            high = mid-1;
        }
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
int k;
cout<<"Enter the target number"<<endl;
cin>>k;
int b[2];
b[0]=firstOccurence(a,n,k);
b[1]=lastOccurence(a,n,k);
cout<<b[0]<<" "<<b[1];
    return 0;
}