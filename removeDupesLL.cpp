#include<bits/stdc++.h>
using namespace std;

struct node{
  int val;
  node* next = nullptr;

};

int main(){
  int t;
  cin>>t;
  int n;
  while(t--)
  {
    node *head;
    node *ptr;
    head = nullptr;
    cin>>n;

    for(int i=0; i<n; i++){
      int x;
      cin>>x;
      node* temp = (node*) malloc(sizeof(node));
      temp->val = x;
      temp -> next = nullptr;
      if(head==nullptr) {
        head = temp;
        ptr = head;
      }

      else{
        ptr->next = temp;
        ptr = ptr->next;
      }

    }


    int bitv = 0;
    ptr = head;
    bitv = (bitv | (1<<head->val) );

    while(ptr->next!=nullptr){
      int mask = 1 << ptr->next->val;
      if((bitv & mask )== 0)
      {
        bitv |= mask;
        ptr = ptr->next;
      }

      else{
        ptr->next = ptr->next->next;
      }

    }

    ptr  = head;

    while(ptr!=nullptr){
      cout<<ptr->val<<" ";
      ptr= ptr->next;
    }

  }

return 0;

}
