//print all the elements of the array
#include<iostream>
using namespace std;

void printer(int arr[],int idx,int n){
    if(idx==n|| n==0)
    return;

    cout<<arr[idx]<<" ";
    printer(arr,idx+1,n);
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
cout<<"The array elements are:"<<"\n";
printer(arr,0,n);
    return 0;
}