#include<iostream>
using namespace std;

void Selectionsort(int *arr , int n){ 

for(int i=0;i<(n-1);i++){
    int min_index = i;

    for(int j=(i+1);j<n;j++){

        if(arr[j]<arr[min_index]){
           min_index =j;

        }
    }

    if(min_index!=i){
        swap(arr[i],arr[min_index]);

    }
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

Selectionsort(arr,n);

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
    return 0;
}