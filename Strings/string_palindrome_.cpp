# include <iostream>
using namespace std ;

int main(){
  string c ="racecar" ;
  int n = c.length() ;
  int i=0 , j=n-1 ,flag =1;
  while(i<j){
    if(c[i]!=c[j]){
      flag-- ;
      break ;
    }
    else{
      i++ ;
      j-- ;
    }
  }
  if(flag){
    cout<<"palindrome" ;
  }
  else{
    cout << "not palindrome" ;
  }
  return 0;
}
