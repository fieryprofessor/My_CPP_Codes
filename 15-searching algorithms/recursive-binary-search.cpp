#include<iostream>
using namespace std;

int Binarysearch(int a[],int k,int low, int high){
   if(low>high)
   return-1;
   int mid = (low+high)/2;
   if(a[mid]==k)
   return mid;
   if(a[mid]<k){
    return Binarysearch(a,k,mid+1,high);
   }
   else{
    return Binarysearch(a,k,low,mid-1);
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
int k;
cout<<"Enter the number to be searched"<<endl;
cin>>k;
cout<<"Index of k is :"<<endl;
cout<<Binarysearch(a,k,0,n-1);
    return 0;
}