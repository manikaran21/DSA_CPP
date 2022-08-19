#include <iostream>
#include <utility>
using namespace std;

int main(){
  pair <int ,char> p(1,'M');
  pair <int ,char> p2 ;
  cout << p.first <<":"<<p.second <<endl ;
  p = make_pair(2,'A') ;
  cout << p.first <<":"<<p.second ;
  cout << p.first <<":"<<p.second ;
  return 0;
}
