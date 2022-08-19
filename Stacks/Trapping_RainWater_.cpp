#include<bits/stdc++.h>
using namespace std ;

int main(){
  int i , sum = 0;
  int arr [] = {0,1,0,2,1,0,1,3,2,1,2,1} ;
  stack < pair < int , int> > Area ;
  for( i =0 ;i<12 ;i++ ){
    if(arr[i] != 0 ){
      break ;
    }
  }
//  cout << i ;
  Area.push(make_pair(i,arr[i])) ;
  //cout<< endl<< Area.top().first << " "<< Area.top().second;
  for( int j = i+1 ; j< sizeof(arr)/sizeof(arr[0]);j++){
    if(arr[j] < Area.top().second ){
      Area.push(make_pair(j, arr[j])) ;
    }
    else{
      int h = Area.top().second ;
      Area.pop() ;
      h = Area.top().second - h ;
      h = min(h,Area.top().second ) ;
      int l = j - Area.top().first - 1 ;
      sum = sum + h * l ;
      Area.pop() ;
      Area.push(make_pair(j, arr[j])) ;
    }
  }
  cout << sum ;
  return 0 ;
}
