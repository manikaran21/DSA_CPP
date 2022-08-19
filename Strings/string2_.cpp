# include <iostream>
# include <string>
# include <algorithm>
using namespace std ;

int main(){
  string s ="ManiKaran" ;
  transform(s.begin() ,s.end() ,s.begin() , ::toupper) ;
  cout << s <<endl;
  sort(s.begin() ,s.end()) ;
  cout << s ;
  return 0;
}
