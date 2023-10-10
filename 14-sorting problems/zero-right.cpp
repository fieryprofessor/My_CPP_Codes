//given an array arr, move all the 0's to the end of it while maintaining the relative order of non zero elements.
#include<iostream>
using namespace std;

void zeroshifter(int *arr , int n){
for(int i=n-1;i>=0;i--){
bool swapped = false;
int j=0;
  while (j!=i){
          if((arr[j]==0) && (arr[j+1]!=0))
            swap(arr[j],arr[j+1]);
            j++;
            swapped = true;
        }
        if(swapped == false)
        break;
    }
}


int main(){
int n;
cout<<"Enter array size"<<endl;
cin>>n;
int arr[n];
cout<<"Enter array elements"<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];
}

zeroshifter(arr,n);

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
    return 0;
}