// Write a program to calculate marks to grades . Follow the conversion rule as given below :
#include<iostream>
using namespace std;

int main()
{
    int marks;int p=0;;
    cout<<"Enter your marks :";
    cin>>marks;
    if((marks>=90)&&(marks<=100))
    {
        p=1;
    }
    else if((marks>=80)&&(marks<=90))
    {
        p=2;
    }
    else if((marks>=70)&&(marks<=80))
    {
        p=3;
    }
    else if((marks>=60)&&(marks<=70))
    {
        p=4;
    }
    else if((marks>=50)&&(marks<=60))
    {
        p=5;
    }
    else if((marks>=40)&&(marks<=50))
    {
        p=6;
    }
    else if((marks>=30)&&(marks<=40))
    {
        p=7;
    }
    else if(marks<30)
    {
        p=8;
    }
    else
    {
        p;
    }

    switch(p)
    {
        case 1:
            cout<<"Your Grade is A+";
            break;

         case 2:
            cout<<"Your Grade is A";
            break;

         case 3:
            cout<<"Your Grade is B+";
            break;

         case 4:
            cout<<"Your Grade is B";
            break;

         case 5:
            cout<<"Your Grade is C";
            break;

         case 6:
            cout<<"Your Grade is D";
            break;

         case 7:
            cout<<"Your Grade is E";
            break;

         case 8:
            cout<<"Your Grade is F";
            break;

         default:
         cout<<"Marks entered is Invalid";   
    }
    return 0;
}