#include<bits/stdc++.h>
using namespace std ;


void permutation(string s , string ans){
  if(s.length() == 0){
    cout << ans <<endl;
    return ;
  }
  else{
  for ( int i =0 ; i<s.length() ;i++){
    char c = s[i] ;
    string ros = s.substr(0,i) + s.substr(i+1) ;
    permutation(ros , ans+c) ;
  }
}
}
int main (){
  string str =  "ABC" ;
  permutation(str , "") ;
  return 0 ;
}
