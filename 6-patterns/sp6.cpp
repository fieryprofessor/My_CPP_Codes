#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=(5-i);j++)
        {
            cout<<" ";
        }
        for(int k=65;k<=(64+i*2-1);k++)
        {
            cout<<char(k);
        }
      cout<<endl;
    }
    for(int a=1;a<=4;a++)
    {
        for(int b=1;b<=a;b++)
        {
            cout<< " ";
        }
        for(int c=65;c<=(73-(a*2));c++)
        {
            cout<<char(c);
        }
        cout<<endl;
    }
    return 0;
}