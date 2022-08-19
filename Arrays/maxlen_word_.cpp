# include <iostream>
# include <bits/stdc++.h>
using namespace std ;

int main(){
  string s ;
  getline(cin ,s) ;  // cin.getline(arr , size) ;
                     // cin.ignore()
  cout << s;
  int length = s.length() ,maximum = -1;
  int i = 0 ,count = 0 ;
  while(i<length){
    if(s[i]==' '){
      maximum = max(maximum , count) ;
      count = 0 ;
    }
    else{
      count++ ;
    }
    i++ ;
  }
  cout << max(maximum , count) ;
  return 0;
}
