#include<iostream>
using namespace std;

void Merge(int arr[], int l, int mid , int r){
     int an = mid - l + 1;
     int bn = r - mid;
     int a[an];
     int b[bn];

     for(int i=0 ; i<an ;i++){
        a[i]= arr[l+i];
     }
     for(int j=0 ; j<bn ;j++){
        b[j]= arr[mid+1+j];
     }

     int i=0;
     int j=0;
     int k=l;

     while(i<an && j<bn){
        if(a[i]<b[j]){
        arr[k++]=a[i++];
        }
        else{
        arr[k++]=b[j++];
        }
     }

     while(i<an){
        arr[k++]=a[i++];
     }

     while(j<bn){
        arr[k++]=b[j++];
     }

}

 void Mergesort(int arr[], int l, int r){
   if(l>=r){
   return;
   }
   int mid = (l+r)/2;
   Mergesort(arr,l,mid);
   Mergesort(arr,mid+1,r);
   Merge(arr,l,mid,r);
}

int main(){
int n;
cout<<"Enter array size"<<endl;
cin>>n;
int arr[n];
cout<<"Enter array elements"<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
Mergesort(arr,0,n-1);

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
    return 0;
}