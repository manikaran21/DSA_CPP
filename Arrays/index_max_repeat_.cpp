# include <iostream>
# include <map>
using namespace std ;

int main() {
  int size ;
  cin >> size ;
  int arr [ size ] ;
  for( int i = 0 ; i<size ; i++){
    cin >> arr[i] ;
  }

  map<int ,int ,greater<int> >  m ;
  map<int ,int ,greater<int> >  n ;
  map <int ,int> :: iterator it ;

  for ( int i = 0 ; i<size ;i++ ){
    m[arr[i]] +=  1 ;
  }
  for(it = m.begin() ;it!=m.end() ;it++){
    n.insert(pair<int,int>(it->second , it->first)) ;
  }
  for ( int i = 0 ; i<size ;i++ ){
    if(n.begin()->second == arr[i]){
      cout << i ;
      break ;
    }
  }
  return 0 ;
}
