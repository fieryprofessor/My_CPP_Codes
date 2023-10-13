/*to search if a given element is present in the array or not .if it is not present then
return -1 else return its index.*/ 
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
    int m;
    cout<<"Enter the element to be searched"<<endl;
    cin>>m;
    int c=0;
    for(int j=0;j<n;j++)
    {
        if(array[j]==m){
        cout<<"Element present!"<<endl;
        cout<<"Index is = "<<j<<endl;}

        else{ c++;
            continue;
        } 
    }
    if(c==n)
    cout<<"-1"<<endl;
return 0;
}