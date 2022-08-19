# include <bits/stdc++.h>
using namespace std ;
void pairsum( int a[] , int n , int t ){
  int low=0  , high = n-1 ;
  while(low<high){
    if(a[low]+a[high] == t ){
      cout << low <<" "<< high ;
      break ;
    }
    else if(a[low]+a[high]>t){
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
  int arr[size] ;
  for (int i =0 ; i<size ; i++){
    cin >> arr [i] ;
  }
  sort(arr ,arr+size) ;
  pairsum(arr,size,target) ;
  return 0 ;
}
