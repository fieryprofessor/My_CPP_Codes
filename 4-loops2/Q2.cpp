// Write a program to print all Armstrong numbers between 100 to 500.
#include<iostream>
using namespace std;

int main()
{    

    for(int i=100;i<=500;i++)
    {
        int sum=0;
        int m=i;
        while(m!=0)
        {
            int r=m%10;
            sum=sum+(r*r*r);
            m=m/10;
        }
        if(sum==i)
        cout<<i<<endl;
    }
    return 0;
}