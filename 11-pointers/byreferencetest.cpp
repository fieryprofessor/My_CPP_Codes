#include<iostream>
using namespace std;

void swap(int *x, int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

int main(){
    int x,y;
    x=10;y=20;
    int *ptrx=&x;
    int *ptry=&y;
    swap(ptrx,ptry);
    cout<<x<<" "<<y;
    return 0;
}