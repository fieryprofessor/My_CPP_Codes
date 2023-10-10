//Program to print ascii value of a character.
#include<iostream>
using namespace std;

int main()
{
    char x ;
    cout << "Enter your character";
    cin >> x;
    int y = (int)x;
    cout << "The numeric value of your character is = " << y << endl;
    return 0;
}