//Program to check whether two numbers (entered by user) are equal or not.
 #include<iostream>
 using namespace std;

 int main()
 {
    int n1,n2;
    cout << "Enter first number" << endl;
    cin >> n1;
    cout << "Enter second number" << endl;
    cin >> n2;
    if(n1==n2)
    {
        cout << 1<< endl; // 1 means true.
    }
    else
    {
        cout << 0<< endl; // 0 means false.
    }
    return 0;
 }