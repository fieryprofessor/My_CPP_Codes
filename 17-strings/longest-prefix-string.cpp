/*given an array of strings. write a program to find the longest common prefix string amongst  an array of strings.*/
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

string prefixchecker(vector<string>&v ,int n){
  sort(v.begin(),v.end());
string s1 = v[0];
int i=0;
string s2 = v[n-1];
int j=0;
string ans="";
while(i<s1.size() && j<s2.size()){
if(s1[i]==s2[j]){
    ans+=s1[i];
    i++,j++;
}
else{
    break;
}
}
return ans;
}


int main(){
int n;
cout<<"Enter array size"<<endl;
cin>>n;
vector<string>v(n);
cout<<"Enter array elements"<<endl;
for(int i=0;i<n;i++){
    cin>>v[i];
}
cout<<prefixchecker(v,n);
    return 0;
}