//print the sum off all elements of the array
#include<iostream>
using namespace std;

int sumcal(int arr[],int idx,int n){
    if(idx==(n-1))
    return arr[idx] ;

   return (arr[idx]+sumcal(arr,idx+1,n));

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
cout<<"The sum of all elements is : "<<"\n";
cout<<sumcal(arr,0,n);
    return 0;
}