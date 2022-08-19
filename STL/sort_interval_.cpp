# include <iostream>
# include <algorithm>
// # include <bits/stdc++.h>
using namespace std ;

struct Interval {
  int st ;
  int end ;
} ;

bool compare(Interval t1 , Interval t2){
      return t1.st < t2.st ;  // or t1.st > t2.st
}

int main(){
  Interval arr [] = { {6,4} , {3,4} , {4,6} , {8,13} } ;
  sort(arr , arr+4 ,compare) ;

  for (int i=0 ; i<4 ;i++){
    cout << arr[i].st <<" : "<<arr[i].end <<endl ;
    }
  return 0;
}
