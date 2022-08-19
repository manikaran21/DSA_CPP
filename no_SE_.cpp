// Number of paths possible from start to end
// using dice from 1 to 6
#include<bits/stdc++.h>
using namespace std ;
int p(int f){
  if(f<=0){
    return 0 ;
  }
  else{
    return p(f-1)+p(f-2)+p(f-3)+p(f-4)+p(f-5)+p(f-6)+1 ;
  }
}
int main(){
  int start_point = 0 ;
  int end_point = 0 ;
  int ans = p(end_point) ;
  cout << ans ;
}
