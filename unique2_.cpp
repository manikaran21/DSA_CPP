// print two unique numbers in given array
# include <iostream>
using namespace std ;

int setBit( int n , int pos){
  return (n >> pos) & 1 ;
}

int main(){
  int n ;
  cin >> n;
  int arr[n];
  for (int i =0;i<n ;i++){
    cin >> arr[i] ;
  }
  int exor =0 ;
  for( int i =0 ;i<n ;i++){
    exor = exor ^ arr[i] ;
  }
  int temp = exor ;
  int setbit = 0 , pos =0;
  while(!setbit){
    setbit = temp & 1 ;
    pos++ ;
    temp = temp >> 1 ;

  }
  int newexor = 0 ;
  for( int i =0 ; i<n ;i++){
    if(setBit(arr[i] ,pos-1)){
      newexor = newexor ^ arr[i] ;

    }
  }
  cout << newexor << "  ";
  int k = newexor ^ exor ;
  cout << k ;
  return 0 ;
}
