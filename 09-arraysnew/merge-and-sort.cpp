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

    //creating size for the two arrays
    int m,n;
    cout<<"enter the size of first array"<<endl;
    cin>>m;
    cout<<"enter the size of second array"<<endl;
    cin>>n;

    //entering elements to both arrays
    int arr1[m],arr2[n];
    cout<<"enter first array elements"<<endl;
    for(int i=0;i<m;i++){
        cin>>arr1[i];
    }
    cout<<"enter second array elements"<<endl;
    for(int j=0;j<n;j++){
        cin>>arr2[j];
    }

    //creating the third array to store the initial array elements
    int p=m+n;
    int arr3[p];
    for(int i=0;i<m;i++){
        arr3[i]=arr1[i];
    }
    for(int j=0;j<n;j++){
        arr3[j+3]=arr2[j];
    }

    //calling quicksort function
    quicksort(arr3,0,p-1);

    //printing the final array
    for(int k=0;k<p;k++) {
        cout<<arr3[k]<<" ";
    }
    return 0;
}