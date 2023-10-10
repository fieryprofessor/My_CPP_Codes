#include<iostream>
using namespace std;

void Insertionsort(int *arr , int n){ 

for(int i=1;i<n;i++){
    int current = arr[i];
    int j = i-1;
    while(j>=0 && arr[j]>current){
        arr[j+1]= arr[j];
        j--;
    }
    arr[j+1]=current;
}
}

int main(){
int n;
cout<<"Enter the size of array"<<endl;
cin>>n;

int arr[n];
cout<<"Enter array elements"<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];
}

Insertionsort(arr,n);

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
    return 0;
}