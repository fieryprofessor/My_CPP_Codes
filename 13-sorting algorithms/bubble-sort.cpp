#include<iostream>
using namespace std;

void Bubblesort(int *arr , int n){ 

for(int i=0;i<(n-1);i++){
    bool swapped = false;

    for(int j=0;j<(n-1-i);j++){

        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            swapped = true;
        }
    }
    if(swapped==false)
    break;
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

Bubblesort(arr,n);

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
    return 0;
}