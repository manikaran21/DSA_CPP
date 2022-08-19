#include<bits/stdc++.h>
using namespace std ;

int main(){
  deque < int > Q ;
  Q.push_front(1) ;
  Q.push_front(2) ;
  Q.push_back(3) ;
  Q.push_back(4) ;
  Q.push_front(5) ;

  cout << Q.front() << "  "<<Q.back() << "  " << Q.size() << endl;


  return  0 ;
}
