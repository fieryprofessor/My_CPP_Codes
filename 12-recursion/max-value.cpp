//print the max value of the array
#include<iostream>
using namespace std;

int finder(int arr[],int idx,int n){
    if(idx==(n-1))
    return arr[idx] ;

   return max(arr[idx],finder(arr,idx+1,n));

}

int main(){
int n;
cout<<"Enter the size of the array"<<"\n";
cin>>n;
int arr[n];
cout<<"Enter the array elements"<<"\n";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<"The maximum element is : "<<"\n";
cout<<finder(arr,0,n);
    return 0;
}