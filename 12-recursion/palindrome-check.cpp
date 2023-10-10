//to find whether the given number is palindrome or not.
#include<iostream>
using namespace std;

bool f(int num , int *temp){
    if(num>=0 && num<=9){
        int lastdigittemp =(*temp)%10;
        (*temp) /= 10;
        return ( num == lastdigittemp);
    }


    bool result = (f(num/10,temp) && (num%10)==((*temp)%10));
    (*temp) /= 10;
    return result;
}

int main(){
int n;
cout<<"Enter the number"<<"\n";
cin>>n;
int x=n;
int *temp = &x;
cout<<f(n,temp);

    return 0;
}