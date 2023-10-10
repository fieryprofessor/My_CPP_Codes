#include<iostream>
using namespace std;
int main(){
    int numbers[5];
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<5;i++){
        cin>>numbers[i];
    }
     for(int j=0;j<5;j++){
        cout<<(numbers[j])<<" ";
    }
    return 0;
}