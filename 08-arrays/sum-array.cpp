//to print the sum of the elements of an array.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of the array"<<endl;
    cin>>n;
    int array[n];
    cout<<"Enter the numbers"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    int sum=0;
    for(int j=0;j<n;j++)
    {
       sum=sum+array[j];
    }
    cout<<"The sum of elements is = "<<sum<<endl;
    return 0;
}