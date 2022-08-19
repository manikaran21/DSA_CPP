# include <bits/stdc++.h>
using namespace std ;
void pairsum( vector <int> v1 , int n , int t ){
  int low=0  , high = n-1 ;
  while(low<high){
    if(v1[low]+v1[high] == t ){
      cout << low <<" "<< high ;
      break ;
    }
    else if(v1[low]+v1[high]>t){
      high-- ;
    }
    else{
      low++ ;
    }
  }
}
int main(){

  int size ,target ;
  cin >> size >> target;
  vector <int> v ;
  for (int i =0 ; i<size ; i++){
    int j ;
    cin >> j ;
    v.push_back(j) ;
  }
  cout << v.end() - v.begin() ;
  //sort(v.begin(),v.end()) ;
  //pairsum(v,size,target) ;
  return 0 ;
}
