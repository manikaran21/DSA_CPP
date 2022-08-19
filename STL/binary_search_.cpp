# include <iostream>
# include <algorithm>
# include <cmath>
# include <utility>
using namespace std ;

int main(){
  int arr [] = {1,2,3,4,5,6}  ;   // must sorted or otherwise sort the array

  cout << binary_search(arr , arr+6 , 4 ) << endl ;  // return 1 or 0 (found or not found)
  cout << lower_bound(arr , arr+6 , 4) << endl;  // return pointer of the first key element
  cout << lower_bound(arr , arr+6 , 4) - arr << endl;  // return the index of first key element
  cout << upper_bound(arr , arr+6 , 4) << endl;  // return upper bound pointer of the first key element or pointer of next element
  cout << pow (2,5) <<endl ;
  cout << __gcd(2,5) <<endl ;

  int x=10 ,y=100 ;
  swap(x,y) ;
  cout << x <<":"<<y<< endl;
  cout << max(100,1005) << "  "<< endl ;
  cout << min(90,100)<<endl;
  return 0 ;
}
