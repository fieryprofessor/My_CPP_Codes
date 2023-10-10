#include<iostream>
#include<string>
using namespace std;

string remover(string s,int idx,char ch,int n){
    if(idx==n)
    return "";

    string x="";
    x=s[idx];
    if(s[idx]==ch){
    return ""+remover(s,idx+1,ch,n);
    }
    else{
        return x +remover(s,idx+1,ch,n);
    }
}

int main(){
string s;
cout<<"Enter the string"<<endl;
cin>>s;
char ch;
cout<<"Enter the character to be removed"<<endl;
cin>>ch;
int n=s.length();
cout<<"new string after removing the character is:"<<endl;
cout<<remover(s,0,ch,n);
    return 0;
}