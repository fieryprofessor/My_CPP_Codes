#include<bits/stdc++.h>
using namespace std;

#include<bits/stdc++.h>
using namespace std;

//quick sort algorithm
int partition(int A[],int start ,int end){
    int pivot=A[start];
    int count=0;
    for(int i=start+1;i<=end;i++){
        if(A[i]<=pivot)
        count++;
    }
    int pivotIndex=start+count;
    swap(A[pivotIndex],A[start]);

    int i=start,j=end;
    while(i<pivotIndex && j>pivotIndex){
        while(A[i]<=pivot){
            i++;
        }
        while(A[j]>pivot){
            j--;
        }
        if(i<pivotIndex && j>pivotIndex){
            swap(A[i++],A[j--]);
        }
    }
    return pivotIndex;
}

void quicksort(int A[],int start,int end){
    if(start>=end)
    return;
    int p=partition(A,start,end);
    quicksort(A,start,p-1);
    quicksort(A,p+1,end);
}

int main(){
    int n;
    cout<<"Enter the array size"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter array elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int j=0;j<n;j++){
       arr[j] =arr[j]*arr[j];
  }
  quicksort(arr,0,n-1);
  for(int k=0;k<n;k++){
    cout<<arr[k]<<" ";
  }
    return 0;
}