# include<iostream>
# include <bits/stdc++.h>
using namespace std ;


int kadanes (int a[] ,int sum [] ,int n){
  int maximum = -1;
  sum[0] = a[0] ;
  for( int i=0 ;i<n-1 ;i++){
    if(sum[i]<0){
      sum[i] = 0;
    }
    sum[i+1] = sum[i] + a[i+1]  ;
  }
  for( int i = 0; i<n ;i++){
    if(a[i]>maximum){
      maximum = a[i] ;
    }
  }
  return maximum ;

}
int main(){
  int size , nowrap_sum ,wrap_sum ,total_sum = 0;;
  cin >> size ;
  int arr [ size ] ;
  int current_sum [ size ] ;
  for( int i = 0; i<size ;i++){
    cin >> arr[i] ;
  }
  nowrap_sum  = kadanes(arr , current_sum ,size) ;
  for( int i = 0; i<size ;i++){
    total_sum = total_sum + arr[i] ;
    arr[i] = -arr[i] ;
  }
  wrap_sum  = total_sum + kadanes(arr , current_sum ,size) ;
  cout << max( nowrap_sum , wrap_sum ) ;
  return 0 ;

}
