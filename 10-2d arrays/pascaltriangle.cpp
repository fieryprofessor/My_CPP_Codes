#include<bits/stdc++.h>
using namespace std;

int factorial(int x){
    int f=1;
    for(int i=1;i<=x;i++){
      f*=i;
    }
    if(f==0){
        return 1;
    }
    else{
    return f;
    }
}

int main(){
int n;
cout<<"Enter size of pascal triangle:"<<endl;
cin>>n;
cout<<endl;
cout<<"Pascal triangle is:"<<endl;

int C;
for(int i=0;i<n;i++){
    for(int k=1;k<=(n-(i+1));k++){
cout<<" ";
    }

    for(int j=0;j<=i;j++){

C=factorial(i)/(factorial(j)*factorial(i-j));
cout<<C<<" ";

    }
    cout<<endl;
}

return 0;
}