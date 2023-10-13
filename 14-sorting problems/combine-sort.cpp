//given two sorted arrays, write a program to merge them in a sorted manner.

#include<iostream>
using namespace std;

void Merge(int a[],int b[],int arr[], int n1,int n2){
    int i=0,j=0,k=0; 

    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            arr[k++]=a[i++];
        }
        else{
            arr[k++]=b[j++];
        }
    }
    while(i<n1){
        arr[k++]=a[i++];
    }
    while(j<n2){
        arr[k++]=b[j++];
    }
}

int main(){
int n1;
cout<<"Enter size of first array"<<endl;
cin>>n1;
int a[n1];
cout<<"Enter first array elements"<<endl;
for(int i=0;i<n1;i++){
    cin>>a[i];
}

int n2;
cout<<"Enter size of second array"<<endl;
cin>>n2;
int b[n2];
cout<<"Enter second array elements"<<endl;
for(int i=0;i<n2;i++){
    cin>>b[i];
} 

int n3=n1+n2;
int arr[n3];
Merge(a,b,arr,n1,n1);

for(int i=0;i<n3;i++){
cout<<arr[i]<<" ";
}
    return 0;
}