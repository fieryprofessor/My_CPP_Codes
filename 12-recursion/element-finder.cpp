//given an array of length n,find if x exist in the array or not.
#include<iostream>
using namespace std;

bool finder(int a[], int n, int x,int i){
    if(i==n)
    return false;

     return ((a[i]==x)||finder(a,n,x,i+1));
}

int main(){
int n,x;
cout<<"Enter n and x"<<endl;
cin>>n>>x;
int a[n];
cout<<"Enter array elements"<<endl;
for(int i=0;i<n;i++){
    cin>>a[i];
}
bool r = finder(a,n,x,0);
if(r)
cout<<"Yes";
else
cout<<"No";
    return 0;
}