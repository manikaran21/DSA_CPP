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
  Node* ptr1 = NULL ;
  Node* ptr2  = NULL ;
  if(temp1->data < temp2->data){
    MergeHead = temp1 ;
  }
  else{
    MergeHead = temp2 ;
  }
  while(temp1 && temp2){
    if(temp1->data < temp2->data){
      ptr1 = temp1 ;
      temp1 = temp1->next ;
    }
    else{
      ptr2 = temp2 ;
      temp2 = temp2->next ;
    }
    if( ptr1 && ptr2 ){
      if( ptr1->data < ptr2->data ){
        ptr1->next = ptr2 ;
        ptr1 = NULL ;
      }
      else{
        ptr2->next = ptr1 ;
        ptr2 = NULL ;

      }
    }
  }
  if(temp1 == NULL ){
    ptr1->next = temp2 ;
  }
  if( temp2 == NULL ){
    ptr2->next = temp1 ;
  }
}
int main(){
  Node* head = NULL ;
  Node* tail = NULL ;
  for(int i =0 ;i<4 ;i++){
      InsertAtTail(head ,tail ,i) ;
  }
  Node* newhead = NULL ;
  Node* newtail = NULL ;
  for(int i =4 ;i<9 ;i=i++){
      InsertAtTail(newhead ,newtail ,i) ;
  }
  Node* MergeHead = NULL ;
  Merge( head, newhead , MergeHead);
  Node* ex = MergeHead ;
  while(ex){
    cout << ex->data << " " ;
    ex = ex->next ;
  }
return 0 ;
}
