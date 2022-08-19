#include<bits/stdc++.h>
using namespace std ;
class Node {
  public :
  int data ;
  Node* next ;
  Node( int val ){
    data = val ;
    next = NULL ;
  }
} ;
void CreateList(Node* &head , Node* &tail , int value ){
  Node* newNode  = new Node(value) ;
  if(head == NULL){
    head  = newNode ;
    tail = newNode ;
  }
  else{
    tail->next = newNode ;
    tail = newNode ;
  }
}
void DetectLoop(Node* &temp){
    set < Node* > s ;
    while(temp){
      if(s.find(temp) != s.end() ){
        break ;
      }
      else{
        s.insert(temp) ;
        temp = temp->next ;
      }
    }
    cout << temp->data ;
}
int main(){
  Node* head = NULL ;
  Node* tail = NULL ;
  for( int i=0 ;i<6 ;i++){
    CreateList( head,tail, i);
  }
  //tail->next = head->next->next  ;
  //cout << tail->next->data << "  "<< head->next->data ;
//  Node* temp = head ;
//  DetectLoop(temp) ;
  return 0 ;
}
