# include <iostream>
using namespace std ;

int main(){
  int number ,result ,rev_num =0, ;
  cin >> number ;
  while(number>0){
    result = number % 10 ;
    number = number / 10 ;
    rev_num = rev_num *10 + result ;
  }
  cout << "reversed number :"<<rev_num ;
  return 0;
}
