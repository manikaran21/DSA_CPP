// maximum subarray sum or  kadane's algorithm
# include<iostream>
# include <bits/stdc++.h>
using namespace std ;

int main(){
  int size , max=-1;
  cin >> size ;
  int arr [ size ] ;
  int current_sum [ size ] ;
  for( int i = 0; i<size ;i++){
    cin >> arr[i] ;
  }
  current_sum[0] = arr[0] ;
  for( int i=0 ;i<size-1 ;i++){
    if(current_sum[i]<0){
      current_sum[i] = 0;
    }
    current_sum[i+1] = current_sum[i] + arr[i+1]  ;
  }
  for( int i = 0; i<size ;i++){
    if(arr[i]>max){
      max = arr[i] ;
    }
  }
  cout << "maximum sub array : "<< max ;
  return 0;
}
