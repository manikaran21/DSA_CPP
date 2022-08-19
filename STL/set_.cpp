# include <iostream>
# include <set>
using namespace std;
                      // set implemented in c++ using balanced binary tree in  ---> O(n)
int main(){
  set <int> s;
  int arr [] = {1,1,2,2,3,4,3,4,5,6,6,5} ;
  set <int> :: iterator it ;
  for(int i = 0; i<12 ; i++ ){
    s.insert(arr [i]) ;
  }
  for(it = s.begin() ; it != s.end() ;it++ ){
    cout << *it << endl ;
  }

  if(s.find(5) == s.end()){
    cout << "element not found" ;
    }
  else {
    cout << "element found";
  }
  return 0;
}
