#include<bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin>>s;

  char x = s[0];

  for(int i=1; i<s.size(); i++){
    char c = s[i];
    x ^= c;
  }

  // if(x==1) cout<<"yes";
  // else cout<<"no";

  cout<<'a'^'b';

  return 0;
}
