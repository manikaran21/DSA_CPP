#include<bits/stdc++.h>
using namespace std ;

int main(){
  string str = "abc" ;
  int k = 1 << str.length() ;
  for( int i =1 ;i < k ;i++){
    int pos = 0;
    int j = i ;
    string s1 = "";
    while(j != 0){
       if((j & 1) == 1){
         s1 = str[pos] + s1 ;
       }
       pos++ ;
       j = j >> 1 ;
    }
    cout << s1 <<endl;
  }
  return 0 ;
}
