#include <iostream>
#include <vector>
using namespace std ;

int main(){
  vector <int> v(5) ;
  for ( int i=0; i< v.size();i++){
    v[i] = i*10 ;
  }
  vector <int> :: iterator it ;
  for(it = v.begin() ;it != v.end() ;it++){
    cout << *it << endl ;
  }
  return 0;

}
