#include<bits/stdc++.h>
using namespace std ;
string replace(string s){
  if (s.length()==0){
    return "";
  }
  if(s[0]=='p' && s[1]=='i'){
    cout << "3.14" ;
    return replace(s.substr(2)) ;
  }
  else{
    cout<<s[0];
    return replace (s.substr(1)) ;
  }
}
int main(){
  string str = "pippxxppixipi" ;
  replace(str) ;
  return 0 ;
}
