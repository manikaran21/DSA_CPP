# include <iostream>
# include <map>   //   #include<bits/stdc++.h>
# include <string>
using namespace std ;

int main() {
  string s;
  cin >> s;
  map < char , int >  m ;
  for ( int i = 0; i < s.length() ; i++) {
    m[s[i]] += 1;
  }
  int count = 0 ;
  for ( int i = 0; i<s.length() ; i++) {
    if ( m [s[i]] == 1){
      cout << s[i];
      count ++ ;
      break ;
    }
  }
  if( count == 0 ) {
    cout <<s[0] ;
  }
  return 0 ;
}
