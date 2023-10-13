//printing the elements of an array without user input .
#include<iostream>
using namespace std;
int main(){
    int array[]={1,2,3,4,5};
    int length=sizeof(array)/sizeof(array[0]);
    for(int i=0;i<=length-1;i++)
    {
        cout<<array[i]<<endl;
    }
    return 0;
}