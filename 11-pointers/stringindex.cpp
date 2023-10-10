#include<iostream>
#include<string>
using namespace std;

void cal(string s,char ch, int *first_index,int *last_index){
for(int i=0;i<s.size();i++){
    if(s[i]==ch){
        *first_index=i;
        break;
    }
}

for(int i=s.size()-1;i>=0;i--){
    if(s[i]==ch){
        *last_index=i;
        break;
    }
}
}

int main(){
    string s;
    cout<<"Enter the string"<<"\n";
    cin>>s;
    char ch;
    cout<<"Enter the character to be searched"<<"\n";
    cin>>ch;
    int first_index=-1;
    int last_index=-1;
    int *ptr1 = &first_index;
    int *ptr2 = &last_index;
    cal(s,ch,ptr1,ptr2);
    cout<<"The indexes are:"<<"\n";
    cout<<*ptr1<<" "<<*ptr2;
    return 0;
}