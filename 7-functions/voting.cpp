#include<iostream>
using namespace std;
void votecheck(int a){
    if(a>=18)
    {
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}
int main(){
    int age;
    cout<<"Enter person's age"<<endl;
    cin>>age;
    votecheck(age);
    return 0;
}