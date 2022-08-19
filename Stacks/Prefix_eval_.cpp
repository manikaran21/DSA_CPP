#include<bits/stdc++.h>
using namespace std ;

tuple < int , int > foo(stack <int>* S ){
  int x = S->top() ;
  S->pop();
  int y = S->top() ;
  S->
  pop() ;
  return { x , y } ;
}
int main(){
  string prefix = "-+7*45+20";
  int size = prefix.length();

  stack <int> S ;

  int i = size-1 ;
  int a ,b ;
  while(i>=0){
    switch(prefix[i]){
      case '+': tie(a,b) = foo(&S) ;
                S.push(a+b) ;
                break ;
      case '-': tie(a,b) = foo(&S) ;
                S.push(a-b) ;
                break ;
     case '*': tie(a,b) = foo(&S) ;
               S.push(a*b) ;
               break ;
      default : int k = (int) prefix[i] - 48 ;
                S.push(k) ;
                break ;

    }
    i-- ;
  }
 cout << S.top() ;
  return 0 ;
}
