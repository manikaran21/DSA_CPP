# include <iostream>
// # include <bits/stdc++.h>
using namespace std ;

int main() {
  int arr [] = { 7,6,5,4,3,2,1 } ;
  for( int i =1 ; i< 7 ; i++){
    int key = arr[i] ;
    int j = i-1;
    while(j>=0  &&  arr[j] > key  ){
      arr[j+1] = arr[j] ;
      j-- ;
    }
    arr[j+1] = key ;
  }
  for( int i =0 ; i< 7 ; i++){
    printf("%d  ", arr[i]) ;
  }
  return 0;
}
