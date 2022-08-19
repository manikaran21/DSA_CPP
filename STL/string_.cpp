#include <iostream>
#include<string>
using namespace std;

int main(){
  string s ;
  getline(cin , s) ; //user input
  cout << s <<endl ;
  string s2(s) ;
  string s3(s,2,6);
  cout<<"s2:"<<s2<<endl;
  cout << "s3:"<<s3<<endl;
  if(s == s2){
    cout << "Both are same" <<endl ;
  }


  return 0;
}
