#include<bits/stdc++.h>
using namespace std ;

int main(){
   list <int> l1 ,l2;
  list <int> :: iterator it ;
  for( int i = 1 ;i<10 ;i ){
    l1.push_back(i*4) ;
    l2.push_front(i*4) ;
  }
  for(it = l1.begin() ; it!=l1.end() ;it++){
    cout << *it << " " ;
  }
  //cout << "    MANIKARAN" ;
  return 0 ;
}
