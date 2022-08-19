#include<bits/stdc++.h>
using namespace std ;

class Intersection {
    public:
       int data ;
       Intersection* next ;
       Intersection(int value){
         data = value ;
         next  = NULL ;
       }
} ;
void insert(Intersection* &head1 , Intersection* &tail ,int val){
  Intersection* newNode = new Intersection(val) ;
  if(head1 == NULL){
    head1 = newNode ;
    tail = newNode ;
  }
  else{
    tail->next = newNode ;
    tail = newNode ;
  }
}
void IntersectionPoint(Intersection* &temp1 , Intersection* &temp2){
  set <Intersection*> s ;
  while(temp1){
    s.insert(temp1);
    temp1 = temp1->next ;
  }
  while(temp2){
    if(s.find(temp2) != s.end()){
      break ;
    }
    else{
      temp2 = temp2->next ;
    }
  }
  cout << temp2->data ;
}
int main(){
  Intersection* head1 = NULL ;
  Intersection* tail = NULL ;
  for( int i =0 ;i<9 ;i++){
    insert(head1 ,tail ,i) ;
  }
  Intersection* head2 = new Intersection (10) ;
  Intersection* tail2 = new Intersection (9) ;
  head2->next = tail2 ;
  tail2->next = head1->next->next->next->next->next ;
  IntersectionPoint(head1 , head2) ;
  //cout << tail2->next->data ;
  return 0 ;
}
