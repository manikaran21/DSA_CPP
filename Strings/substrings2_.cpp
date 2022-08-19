#include<bits/stdc++.h>
using namespace std ;
void substrings(string s , string ans){
  if (s.length()==0){
    cout << ans <<endl;
    return ;
  }
  char c = s[0] ;
  substrings(s.substr(1) , ans ) ;
  substrings(s.substr(1) , ans + c ) ;
}
int main(){
  string str = "abc" ;
  substrings(str , "") ;
  cout<<endl ;

  return 0 ;
}
