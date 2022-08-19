#include<bits/stdc++.h>
using namespace std ;

int main(){
  int arr [] = {100 , 80 , 60 ,70 ,60 ,75 , 85 } ;
  stack < pair <  int , int > > Span ;
  int n = sizeof(arr)/sizeof(arr[0]) ;
  Span.push(make_pair(arr[0] , 1 )) ;
  for ( int i = 1 ; i < n ; i++ ){
    if(arr[i] < Span.top().first ){
      Span.push(make_pair(arr[i] , 1 )) ;
    }
    else{
      int d = 1 ;
      while(arr[i] > Span.top().first ){

        d = d + Span.top() . second ;
        Span.pop() ;

      }

      Span.push(make_pair(arr[i] , d )) ;

    }
  }

  cout << Span.top().first << "  " <<  Span.top() . second ;
  return 0 ;
}
