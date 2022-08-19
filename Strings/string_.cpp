# include<iostream>
# include <string>
using namespace std ;

int main(){
  string str = "welcome to all" ;
  cout << str.find("to") <<endl;
  cout << str.erase(2 ,3)<<endl;
  cout << str.insert(2 , "hello") << endl ;
  cout << str.substr(5,3) ;
  string str1 = "123";
  int x = stoi(str1);
  cout << x << endl ;
  cout << to_string(x)+"hello" ;
  return 0;
}
