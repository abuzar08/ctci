#include<bits/stdc++.h>
using namespace std;

string stringcompress(string s){
  string ans = "";
  int i =0;
  int l = s.length();

  while(i<l){
    char c = s[i];
    int count = 1;
    i++;

    while(s[i]==c && i<l){
      count++;
      i++;
    }

    ans = ans + c + to_string(count);
  }

  return ans;
}

int main(){
  string s;
  cin>>s;

  string compressed = stringcompress(s);
  cout<<(compressed.length()<=s.length()? compressed : s);

  return 0;
}
