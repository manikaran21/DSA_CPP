#include<bits/stdc++.h>
using namespace std ;

int main(){
  int arr [] = { 3 , 3 , 4 , 4 , 9 } ;
  int q = 2 ;
  vector < int > primes ;
    int n = 2 ;
    int count = 0 ;
    while(count < q){
        int flag = 0 ;
        for( int i =1 ; i<= n ; i++ ){
            if(n%i == 0){
                flag++ ;
            }
        }
        if( flag == 2){
            primes.push_back(n) ;
            count++ ;
        }
        n++ ;
    }
  //  cout << primes[0] << primes[primes.size()-1] ;
    vector < int > A ;
    stack < int > B ;
    vector < int > Ans ;
    for( int i=4 ; i>=0 ;i-- ){
      if (arr[i]%2 == 0 ){
        B.push(arr[i]) ;
      }
      else{
        A.push_back(arr[i]) ;
      }
    }
    while(!B.empty()){
      Ans.push_back(B.top()) ;
      B.pop() ;
    }
    for( int i = 1 ; i< q ;i++){
      int size = A.size() ;
      for( int j = size-1 ; j >=0 ;j--){
        if( A[j] % primes[i] == 0 ){
          B.push(A[j]) ;
        }
        else{
          A.push_back(A[j]);
        }
      }
      for(int i=0; i<size ;i++){
        A.erase(A.begin()) ;
      }
      while(!B.empty()){
        Ans.push_back(B.top()) ;
        B.pop() ;
      }
    }
   for ( int i = A.size() -1 ; i >=0 ;i--){
     Ans.push_back(A[i]) ;
   }


    for( int i =0 ; i< Ans.size() ; i++ ){
      cout << Ans[i] << "  " ;
    }

    return 0 ;
}
