/*given two strings s and t, determine if they are isomorphic or not. isomorphic means one to one connection .*/
#include<iostream>
#include<vector>
using namespace std;

bool isomorphicchecker(string &s,string &t){
    if(s.size()!=t.size()){
        return false;
    }
vector<int>v1(128,-1);
vector<int>v2(128,-1);

for(int i=0;i<=s.size();i++){
if(v1[s[i]]!=v2[t[i]]){
    return false;
}
v1[s[i]]=v2[t[i]]=i;
}
return true;
}

int main(){
cout<<"Enter the strings"<<endl;
string s,t;
cin>>s>>t;
cout<<isomorphicchecker(s,t);

    return 0;
}