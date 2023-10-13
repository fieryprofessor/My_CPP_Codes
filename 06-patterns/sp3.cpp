#include<iostream>
using namespace std;
int main()
{
    int n;int m;
    cout<<"Enter the number of lines"<<endl;
    cin>>n;
    cout<<"Enter the value of j iteration"<<endl;
    cin>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(i%2==0)
            {
                if(j%2==0)
                {
                    cout<<"1";
                }
                else
                {
                    cout<<"2";
                }
            }
            else
            {
                 if(j%2==0)
                {
                    cout<<"2";
                }
                else
                {
                    cout<<"1";
                }
            }
        }
         cout<<endl; 
    }
    return 0;
}
 