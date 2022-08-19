#include<bits/stdc++.h>
using namespace std ;

int Pre(char  op){
  int  k ;
  if(op == '-'){
    k = 1 ;
  }
  if(op == '+'){
    k =  1 ;
  }
  if(op == '*'){
    k =  2 ;
  }
  if(op == '/'){
    k =  2 ;
  }
  if(op == '('){
    k =  0 ;
  }
  return k ;
}
int main(){
  string infix = "(a-b/c)*(a/k-l)" ;
  string postfix = "" ;
  stack <  char  > S ;
  int i =0 ;
 while(i < infix.length()){
    if(infix[i] >= 'a' && infix[i] <= 'z'){
      postfix = postfix + infix[i] ;
    }
    else{
      if(infix[i] == '('){
        S.push(infix[i]) ;
      }
      else{
        if(infix[i] == ')'){
          while(S.top() != '('){
            postfix = postfix + S.top() ;
            S.pop() ;
          }
          S.pop() ;
        }
        else{
          if(S.empty()  || Pre(infix[i]) > Pre(S.top()) ){
            S.push(infix[i]) ;
          }
          else{
            while(Pre(infix[i]) <= Pre(S.top())){
              postfix  = postfix + S.top() ;
              S.pop() ;
            }
            S.push(infix[i]) ;
          }
        }
      }

    }
    i++ ;
  }
  while(!S.empty()){
    postfix = postfix + S.top() ;
    S.pop() ;
  }
  cout << postfix ;
  return 0 ;
}
