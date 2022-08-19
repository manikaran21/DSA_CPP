# include <iostream>
# include <set>     // # include <bits/stdc++.h>
using namespace std ;

int main() {
  int arr[] = {1,1,2,3,4,3,6,6,5,5} ;
  set <int> s;
  for (int i=0 ;i<10 ;i++ ){
    if(s.find(arr[i]) == s.end()){
      s.insert(arr[i]) ;
    }

  }
  set <int> :: iterator it ;
  for(it = s.begin() ;it != s.end() ; it++){
    cout << *it << " ";
  }

  return 0;
}
