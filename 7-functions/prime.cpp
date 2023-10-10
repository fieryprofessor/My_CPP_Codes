//wap to print all prime numbers between a and b.
#include <iostream>
using namespace std;

bool  primecheck(int x){
   int c=0;
   for(int i=1;i<=x;i++)
   {
    if(x%i==0)
    c++;
   }
   if(c==2)
   return(true);
   else
   return (false);
} 

int main(){
    int a,b;
    cout<<"Enter the first number"<<endl;
    cin>>a;
    cout<<"Enter the second number"<<endl;
    cin>>b;
    for(int j=a;j<=b;j++)
    {
      if(primecheck(j))
      cout<<j<<" ";
    }

    return 0;
}