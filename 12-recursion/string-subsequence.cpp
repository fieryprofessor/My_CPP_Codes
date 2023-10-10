//given a string , we have to find out all the subsequences of it.
#include<iostream>
#include<vector>
#include<string>
using namespace std;

void subs(string &s,int i,string result,vector<string>&li){

 if(i==s.length()){
    if(result=="")
    li.push_back("0");
    else
    li.push_back(result);
    return;
 }

 subs(s,i+1,result+s[i],li);
 subs(s,i+1,result,li);
}

int main(){
string s;
cout<<"Enter the string "<<endl;
cin>>s;
vector<string>li;
string result;
subs(s,0,"",li);
cout<<"The subsequences are:"<<endl;
for(int i=0;i<li.size();i++){
    cout<<li[i]<<" ";
}
    return 0;
}