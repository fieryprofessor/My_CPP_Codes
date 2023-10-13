//find the first occurence of a given element x,given that the given array is sorted and if no occurence is found then return -1.

#include<iostream>
using namespace std;

int Binarysearch(int a[],int n,int k){
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
cout<<"Enter the number to be searched"<<endl;
cin>>k;
cout<<"first occurence of k is :"<<endl;
cout<<Binarysearch(a,n,k);
    return 0;
}