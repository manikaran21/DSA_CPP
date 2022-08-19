# include <bits/stdc++.h>
using namespace std ;

int main(){
  int a , b ;
  cin >> a >> b ;
  int  n1  ,  n2 ;
  n1 = max(a ,b) ;
  n2 = min( a,b) ;
  while(n1%n2){
    int r  = n1 % n2 ;
    n1  =  max( n2 ,r) ;
    n2  =  min(n2 ,r) ;
  }
  cout << n2 ;
  return 0 ;
}
