# include <iostream>
using namespace std ;

class Node {
  public :
      int data ;
      Node* next ;
      Node(int val){
        data = val ;
        next = NULL ;
      }
} ;
void InsertAtTail(Node* &head ,Node* &tail ,int val ){
  Node* create = new Node(val) ;
  if(head == NULL){
    head = create ;
    tail = create ;
  }
  else{
    tail->next = create ;
    tail = create ;
  }
}
void Merge(Node* &temp1 , Node* &temp2 , Node* &MergeHead){
  Node* end ;
  while(temp1 && temp2){
    if(temp1->data < temp2->data ){
      Node* newNode = new Node(temp1->data) ;
      if(MergeHead == NULL){
        MergeHead = newNode ;
        end = MergeHead ;
      }
      else{
        end->next = newNode ;
        end = newNode ;
      }
      temp1 = temp1->next ;
    }
    else{
      Node* newNode = new Node(temp2->data) ;
      if(MergeHead == NULL){
        MergeHead = newNode ;
        end = MergeHead ;
      }
      else{
        end->next = newNode ;
        end = newNode ;
      }
      temp2 = temp2->next ;
    }
  }
  if(!temp1){
    end->next = temp2 ;
  }
  if(!temp2){
    end->next = temp1 ;
  }
}

int main(){
  Node* head = NULL ;
  Node* tail = NULL ;
  for(int i =0 ;i<10 ;i=i+2){
      InsertAtTail(head ,tail ,i) ;
  }
  Node* newhead = NULL ;
  Node* newtail = NULL ;
  for(int i =1 ;i<10 ;i=i+2){
      InsertAtTail(newhead ,newtail ,i) ;
  }
  Node* MergeHead = NULL ;
  Merge( head, newhead , MergeHead);
return 0 ;
}
