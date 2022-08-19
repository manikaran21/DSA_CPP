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
//
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
//
void DeleteHead(Node* &head){
  Node* temp = head ;
  head  = head->next ;
  temp -> next = NULL ;
}
//
void ReverseList(Node* &preNode ,Node* &currentNode ,Node* &newHead){
  if(currentNode->next){
    ReverseList(preNode->next ,currentNode->next ,newHead) ;
  }
  if(newHead == NULL ){
    currentNode->next = preNode ;
    newHead = currentNode ;
  }
  else{
    currentNode->next = preNode ;
  }
}
//
Node* RHead = NULL ;
Node* ReverseKNodes(Node* &head , int  k ){
      Node* prevptr = NULL ;
      Node* currentptr =  head ;
      Node* nextptr ;
      int count  = 0 ;
      while(currentptr!=NULL  &&  count<k){
        nextptr = currentptr->next ;
        currentptr->next  = prevptr ;
        prevptr = currentptr ;
        currentptr = nextptr ;
        count++ ;
      }
      //cout<< prevptr->data <<endl ;
      if(RHead==NULL){
        RHead = prevptr ;
      }
      if(nextptr != NULL){
        head->next  = ReverseKNodes(nextptr , k ) ;
      }

      return prevptr ;

}

//
int main(){
  Node* head = NULL ;
  Node* tail = NULL ;

  Node* newHead = NULL ;
  Node* preNode = NULL ;
  Node* currentNode = NULL ;

  for(int i =0 ;i<6 ;i++){
      InsertAtTail(head ,tail ,i) ;
  }
  ReverseKNodes(head ,2) ;
  //cout << head->data ;
  cout << RHead->data <<"  "<< RHead->next->next->data;


return 0 ;
}
