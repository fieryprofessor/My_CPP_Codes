#include<bits/stdc++.h>
using namespace  std;

int search(int b[],int k,int x){
    int c=0;
    for(int p=0;p<k;p++){
        if(b[p]==x)
        return 0;
        else 
        c++;
        continue;
    }
    if (c==k)
    return 1;
}

int main(){

    int n;
    cout<<"Enter array size"<<endl;
    cin>>n;

    int a[n];
    cout<<"Enter array elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int m=a[0];
      for(  int j=0;j<n;j++){
        if(a[j]>=m)
        m=a[j];
    }

    for(int z=0;z<=m;z++){
        if(search(a,n,z)==0)
        continue;
        else
        cout<<z<<" ";
    }
    return  0;
}