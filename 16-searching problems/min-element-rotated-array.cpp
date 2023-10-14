/* a rotated sorted array is a sorted array on which rotation operation has been performed several times
given a rotated sorted array ,find the index of the minimum element in the array
it is guaranteed that all the elements are unique*/
#include<iostream>
using namespace std;

int Minfinder(int a[],int n){
     int low=a[0];
    int high=a[n-1];
    if(n==1){
        return a[low];
    }
if(a[0]<a[n-1]){
    return a[low];
}
    while(low<=high){
    int mid = low + (high-low)/2;

    if(a[mid]>a[mid+1]){
        return mid+1;
    }
    if(a[mid]<a[mid-1]){
        return mid;
    }
 

if(a[mid]>a[low]){
    low = mid+1;
}
else{
    high = mid-1;
}
} 
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
cout<<Minfinder(a,n);
    return 0;
}