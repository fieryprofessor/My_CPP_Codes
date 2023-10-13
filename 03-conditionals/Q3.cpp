/*Write a program to take input from user for Cost Price (C.P.) and 
Selling Price(S.P.) and calculate Profit or Loss. */
#include<iostream>
using namespace std;

int main()
{
    int cp,sp;
    cout<<"Enter cost price"<<endl;
    cin>>cp;
    cout<<"Enter selling price"<<endl;
    cin>>sp;
    if(sp>cp)
    {
        int profit = sp-cp;
        cout << "Profit is = "<<profit<<endl;
    }
    else
    {
        int loss = cp-sp;
        cout << "Loss is = "<<loss<<endl;
    }
    return 0;
}