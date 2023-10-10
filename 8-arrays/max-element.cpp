//to print the maximum element of an array.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    cout<<"Enter the elements of the array"<<endl;
    int array[n];
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    int max=array[0];
    for(int j=1;j<n;j++)
    {
       if(array[j]>=max)
       max=array[j];
       else
       continue;
    }
    cout<<"The maximum element of an array is = "<<max<<endl;
    return 0;
}