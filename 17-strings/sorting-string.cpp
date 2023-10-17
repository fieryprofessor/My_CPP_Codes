/*sort and display the given string */

#include<iostream>
#include<vector>
#include<string>
using namespace std;

string Countsort(string &s, int n){
    //storing frequency of each character of string
    vector<int>f(26,0);
    for(int i=0;i<n;i++){
       int index = s[i]-'a';
       f[index]++;
    }
    //create our sorted string
    int j=0;
    for(int i=0;i<26;i++){
        while(f[i]--){
            s[j++]= i +'a';
        }
    }
    return s;  
}

int main(){
    cout<<"Enter the string"<<endl;
    string s="";
    cin>>s;
    int n = s.length();
   cout<<Countsort(s,n);
    
      return 0;
}