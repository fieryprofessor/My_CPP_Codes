#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter array length "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter array elements "<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
  int x;
  cout<<"Enter element whose index to be known "<<endl;
  cin>>x;
  int c=-1;
  for(int j=0;j<n;j++){
    if(a[j]==c);
    c=j;
  }
  cout<<"Index is ="<<c;
  return 0;
}