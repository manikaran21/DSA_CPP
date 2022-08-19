# include <iostream>
using namespace std ;

int main(){
  int n ;
  cin >> n ;
  int k=n ;
  if((n & n-1) == 0 ){
    cout << k <<" is power of 2";
  }
  else{
    cout << " no " ;
  }
  return 0;
}
