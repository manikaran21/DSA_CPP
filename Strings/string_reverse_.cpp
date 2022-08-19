#include<bits/stdc++.h>
using namespace std ;

string t="" ;
string reverse ( string str ,  int n ){
        if (n<0){
           return t ;
        }
        else{
           t = t+str[n] ;
           return reverse (str , n-1) ;
        }
}
int main(){
  string s ="manikaran" ;
  int length = s.length() ;
  string result = reverse( s , length ) ;
  cout << result ;
  return 0 ;
}
