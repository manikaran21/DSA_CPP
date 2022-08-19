#include<bits/stdc++.h>
using namespace std ;
string temp = "";
string remove_duplicates(string s){
  if(s.length()==0){
    return temp;
  }
  else{
    for( int i=1 ;i<s.length() ;i++){
      if(s[0]==s[i]){
        return remove_duplicates(s.substr(1)) ;
      }
    }
    temp = temp + s[0] ;
    //cout << temp <<endl;
    return remove_duplicates(s.substr(1)) ;
    }



}
int main(){
  string str = "abcdabcd" ;
  string s1 = remove_duplicates(str) ;
  cout << s1 ;
  return 0 ;
}
