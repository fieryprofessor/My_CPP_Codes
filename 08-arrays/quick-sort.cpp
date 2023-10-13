#include<bits/stdc++.h>
using namespace std;

int partition(int b[],int low,int high){
    int pivot=b[high];
    int i= low-1;
    for(int j=low;j<high;j++){
         if (b[j] < pivot) {
            i++;
            swap(b[i], b[j]);
        }
    }
    swap(b[i + 1], b[high]);
    return (i + 1);
    }
void quickSort(int arr[], int low, int high)
{
    if (low < high) {
        int x = partition(arr, low, high);
        quickSort(arr, low, x - 1);
        quickSort(arr, x + 1, high);
    }
}
int main()
{
    int n;
    cout<<"enter array length"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter array elements"<<endl;
    for(int k=0;k<n;k++){
        cin>>a[k];
    }
    quickSort(a, 0, n- 1);
    cout << "Sorted array: " << endl;
    for (int m = 0; m < n; m++)
        cout << a[m] << " ";
    return 0;
}
