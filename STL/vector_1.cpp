#include <iostream>
#include <vector>
using namespace std ;

int main(){
  vector <int> v1;
  for(int i=0; i<5 ;i++){
    v1.push_back(i*10) ;
  }
  v1.push_back(60) ;
  vector <int> :: iterator it ;
  for(it=v1.begin() ; it!=v1.end() ;it++){
    cout << *it << endl;
  }
  v1.pop_back();
  cout <<"<< after pop >>" <<endl ;
  for(it=v1.begin() ; it!=v1.end() ;it++){
    cout << *it << endl;
  }


  return 0;
}
