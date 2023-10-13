#include<iostream>
using namespace std;

int Binarysearch(int a[],int n,int k){
    int low=0;
    int high= n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(a[mid]==k){
        return mid;
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
cout<<"Index of k is :"<<endl;
cout<<Binarysearch(a,n,k);
    return 0;
}