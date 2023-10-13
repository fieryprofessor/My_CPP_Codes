#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of lines"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=(n-i);j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=(i*2-1);k++)
        {
            if(i!=n)
            {
                if((k==1)||(k==(i*2-1)))
                {
                    cout<<i;
                }
                else
                {
                    cout<<" ";
                }
            }
            else
            {
                cout<<i;
            }
        }
        cout<<endl;
    }
    return 0;
}