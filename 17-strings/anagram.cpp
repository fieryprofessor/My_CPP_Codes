/*given two strings s and t, return true if t is an anagram of s else return false
Constraints:both strings only contain lower case characters.*/
#include<iostream>
#include<string>
#include<vector>
using namespace std;

bool Anagramchecker(string &s,string&t){
    vector<int>f1(26,0);
    for(int i=0;i<s.length();i++){
        int index = s[i]-'a';
        f1[index]++;
    }
    vector<int>f2(26,0);
    for(int i=0;i<t.length();i++){
        int index = t[i]-'a';
        f2[index]++;
    }
    int c=0;
    for(int i=0;i<26;i++){
        if(f1[i]==f2[i]){
            c+=1;
        }
    }
    if(c==26){
        return true;
    }
    else{
        return false;
    }
}

int main(){
  cout<<"Enter the strings"<<endl;
  string s,t;
  cin>>s>>t;
  if(Anagramchecker(s,t)==1)
  cout<<"YES";
  else
  cout<<"NO";
    return 0;
}