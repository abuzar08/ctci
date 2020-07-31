#include<bits/stdc++.h>
using namespace std;

int toggle(int bitV, int i){
  if(i<0) return bitV;

  int mask = 1<<i;

  if((bitV & mask) == 0) bitV |= mask;
  else bitV &= ~mask;

  return bitV;
}

int createBitV(string s){
  int bitV = 0;

  for(char c: s){
    int x = c;
    bitV = toggle(bitV, x);
  }

  return bitV;
}

bool check(int bitV){
  return ((bitV & (bitV-1))==0);
}

int main(){
  string s = "aabbccddef";
  int bitV = createBitV(s);

  cout<<check(bitV);

  return 0;
}
