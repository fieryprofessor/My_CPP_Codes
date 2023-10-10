/*find the unique number in a given array where all the elements
 are being repeated twice with one value being unique*/
#include<bits/stdc++.h>
using namespace std;

int unicheck(int b[],int x){
    int s=0;
    for(int j=0;j<x;j++){
        int c=0;
        for(int k=0;k<x;k++){
            if(b[j]==b[k])
            c++;
        }
        if(c==1)
        s=b[j];
    }
     return (s);
}

int main(){
    int N;
    cout<<"Enter array size"<<"\n";
    cin>>N;
    int A[N];
    cout<<"Enter array elements"<<"\n";
    for(int i=0;i<N;i++){
        cin>>A[i];
    }
    cout<<"Unique no. is = "<<unicheck(A,N);
    return 0;
}