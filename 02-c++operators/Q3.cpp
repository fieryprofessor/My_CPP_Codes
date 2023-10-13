/* There are 45 total pupils in the class, 25 of whom are boys. Write a program to find how many 
girls received grades "A" if 17 boys made up 80% of the students that received grades "A". */
#include<iostream>
using namespace std;

int main()
{
    int total;
    cout<<"Enter total number of students"<<endl;
    cin>>total;
    int p;
    cout<<"Enter percentage of students that got grade A"<<endl;
    cin>>p;
    int boys;
    cout<<"Enter number of boys that got grade A"<<endl;
    cin>>boys;
    int girls;
    girls= ((p*total)/100)-boys;
    cout<<"Number of girls that got grade A is = "<<girls<<endl;
    return 0;
}