#include<bits/stdc++.h>
using namespace std;

int main(){
  string s = "hello there my fri.end!";
  istringstream iss(s);
  string word;
  string ans="";
  char delim = ' ';

  while(getline(iss, word, delim)){
    ans+=word;
    ans+="%20";
  }

  ans.pop_back();
  ans.pop_back();
  ans.pop_back();

  cout<<ans;

  return 0;



}
