#include<bits/stdc++.h>
using namespace std ;
int main(){
  int n ;
  int count = 0 ;
  cin >> n ;
  vector <int> a (n);
   //vector <int> :: iterator it ;
  for(int i=0 ;i< n ;i++){
    cin >> a[i] ;
  }
   int maximum = INT_MIN ;
  /* auto largest = min_element(a.begin(), a.end());
   auto secondLargest = min_element(a.begin(), a.end(),
                                     [&largest](int &x, int &y) {
                                         if (x == *largest) return true;
                                         if (y == *largest) return false;
                                         return x < y;
                                     }); */

  for( int i =0 ;i< a.size() ; i++){
    for(int j=i+1 ;j<a.size() ;j++ ){
       auto largest = min_element(a.begin()+i, a.begin()+ j );
       auto secondLargest = min_element(a.begin()+i , a.begin()+j,
                                      [&largest](int &x, int &y) {
                                          if (x == *largest) return false;
                                          if (y == *largest) return true;
                                          return x < y;
                                      });

           int m1 = *largest ;
           int m2 = *secondLargest ;
           int sum = ( ((m1 & m2) ^ (m1 | m2)) & (m1 ^ m2) ) ;
           if(sum > maximum){
               maximum = sum ;
           }

   }
 }
 cout << maximum ;
 //cout << *largest <<*secondLargest;



  return 0 ;
}
