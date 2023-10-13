//Program which takes the values of length and breadth from user and check if it is a square or not.
 #include<iostream>
 using namespace std;

 int main()
 {
    int l,b;
    cout<<"Enter length"<<endl;
    cin>>l;
    cout<<"Enter breadth"<<endl;
    cin>>b;
    if(l==b)
    {
        cout<<"It is a square"<<endl;
    }
    else
    {
        cout<<"It is a rectangle"<<endl;
    }
    return 0;
 }