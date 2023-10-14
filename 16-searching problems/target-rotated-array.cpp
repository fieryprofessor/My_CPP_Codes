/*given a rotated sorted array of integers,which contains distinct elements,and an integer target,return the index of the target 
if it is found in the array else return -1.*/
#include<iostream>
using namespace std;

int targetfinder(int a[],int n,int k){
    int low=0;
    int high = n-1;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(a[mid]==k)
        return mid;
        if(a[mid]>=a[low]){
            if(k>=a[low] && k<=a[mid]){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        else{
            if(k>=a[mid] && k<=a[high]){
                low = mid+1;
            }
            else{
                high=mid-1;
            }
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
cout<<"Enter target number"<<endl;
cin>>k;
cout<<targetfinder(a,n,k);
    return 0;
}