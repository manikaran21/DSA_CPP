# include <iostream>
# include <algorithm>
using namespace std ;

int main(){
  int arr [] =  {2,7,1,8,3,8,9,15} ;
  sort(arr , arr+8)  ; //  ascending order
  for (int i=0 ; i<8 ;i++){
    cout << arr[i] <<" ";
  }
  cout << endl ;

  sort(arr , arr+8 , greater <int> ())  ;  // descending order

  for (int i=0 ; i<8 ;i++){
    cout << arr[i] <<" ";
  }



  return 0;

}
