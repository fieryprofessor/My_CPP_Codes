//Write a Program to find the kth smallest element in an array using quicksort.

#include<iostream>
using namespace std;

int partition (int a[],int first, int last){
int pivot=a[last];
int i=first-1;
for(int j=first;j<last;j++){
    if(a[j]<pivot){
        i++;
        swap(a[i],a[j]);
    }
}
swap(a[i+1],a[last]);
return i+1;
}

void Quicksort(int a[], int first ,int last)
{
    if(first>=last)
    return;

    int pi = partition(a,first,last);
    Quicksort(a,first,pi-1);
    Quicksort(a,pi+1,last);
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
cout<<"Enter the kth smallest number to be found"<<endl;
cin>>k;

Quicksort(a,0,n-1);

cout<<"The value is-"<<endl;
cout<<a[k-1];
    return 0;
}