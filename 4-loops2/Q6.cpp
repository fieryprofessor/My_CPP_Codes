// Write a program to print alphabet diamond pattern:
#include<iostream>
using namespace std;

int main()
{
    for(int i=65;i<=69;i++)
    {
        for(int j=65;j<=(69-i);j++)
        {
            cout<<" ";
        }
        for(int k=65;k<=((2*i)-65);k++)
        {
            cout<<char(k);
        }
        cout<<endl;
    }
    for(int l=65;l<=68;l++)
    {
        for(int m=65;m<=l;m++)
        {
            cout<<" ";
        }
        for(int n=65;n<=(201-(2*l));n++)
        {
            cout<<char(n);
        }
        cout<<endl;
    }
    return 0;
}