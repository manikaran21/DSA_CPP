# include <iostream>
# include <map>
using namespace std ;

int main() {
  int size ;
  cin >> size ;
  int arr [size] ;
  for(int i =0 ; i<size ; i++) {
    cin >> arr[i] ;
  }
  map <int ,int  , greater <int> >  m;
  map <int ,int> :: iterator it ;
  for(int i = 0 ; i<size-1 ; i++ ){
    int difference ;
    difference = arr[i+1] - arr[i] ;
    m[ difference ] += 1 ;
  }
  cout << m.begin() -> second +1 ;
  return 0 ;
}
