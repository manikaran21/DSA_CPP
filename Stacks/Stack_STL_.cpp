#include<bits/stdc++.h>
using namespace std ;

int main(){
  stack <string> s ;
  string name = "ma ni ka ra noooooo" ;
  int i = 0 ;
  string temp = "";
  while(i<name.length()){
    string temp = "";
    while(name[i]!= ' '  && i<name.length() ){
      temp = temp+name[i] ;
      i++ ;
    }
      s.push(temp) ;
      i++ ;
    }
  s.pop() ;
  cout << s.top();
  return 0 ;
}
