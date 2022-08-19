# include <iostream>
using namespace std ;

int main(){
  int n , m , target ;
  cin >> m >> n >> target ;
  int arr[m][n] ;
  for( int i =0 ;i<m ;i++){
    for (int j=0 ;j<n;j++){
      cin >> arr[i][j] ;
    }
  }
  int r=0 ,c=n-1 ,flag = 0;
  while(r<m && c>=0){
    if(arr[r][c] == target){
      flag++ ;
      break ;
    }
    if(arr[r][c]>target){
      c-- ;
    }
    else{
      r++ ;
    }
  }
  if(flag){
    cout << "element found" ;
  }
  else{
    cout << "element not found" ;
  }
  return 0 ;
}
