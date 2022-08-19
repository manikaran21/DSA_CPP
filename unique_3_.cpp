# include <iostream>
# include <bits/stdc++.h>
using namespace std ;

int main(){
  int  n   , first;
  cin >> n ;
  int arr[n]  ;
  for( int i =0 ;i<n ;i++){
    cin >> arr[i] ;
  }
  first = arr[0] ;
  for(int i =1 ; i<n ;i++){
    first  = first ^ arr[i] ;
    if(i<n-1){
      first = first | 1  ;
    }
  }
  cout << first ;

return 0 ;
}
