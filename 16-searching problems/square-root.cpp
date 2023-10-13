//find the square root of the given non negative value x.round it off to the nearest floor value.

#include<iostream>
#include<math.h>
using namespace std;

int BinarySearch(int x){
    int low=1;
    int high = x;
    int ans=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(pow(mid,2)<=x){
       ans =mid;
       low= mid+1;
    }
        else{
            high = mid-1;
        }
    }
    return ans;
}

int main(){
int x;
cout<<"Enter the number"<<endl;
cin>>x;

cout<<BinarySearch(x);
    return 0;
}