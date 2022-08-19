# include <bits/stdc++.h>
using namespace std ;
int main() {
  int n1 , n2 ,n3 ;
  cin >> n1 >> n2 >> n3;
  int arr1[n1] , arr2[n2] , arr3[n3] ;
  for(int i =0 ;i<n1 ; i++){
    cin >> arr1[i] ;
  }
  for(int i =0 ;i<n2 ; i++){
    cin >> arr2[i] ;
  }
  for(int i =0 ;i<n3 ; i++){
    cin >> arr3[i] ;
  }
  map <int ,int> id ;
  map <int ,int > :: iterator it ;
  for(int i=0 ;i<n1 ;i++){
    id[arr1[i]] += 1;
  }

  for(int i=0 ;i<n2 ;i++){
    id[arr2[i]] += 1;
  }

 for(int i=0 ;i<n3 ;i++){
    id[arr3[i]] += 1;
  }
  int count = 0;
  for(it = id.begin() ; it != id.end() ;it++){
    if(it->second > 1){
      count ++;
    }
  }
  cout << "the final list:" << endl ;
  cout<<count<<endl;
  for(it = id.begin() ; it != id.end() ;it++){
    if(it->second > 1){
      cout << it->first<<endl ;
    }
  }
  return 0;
}
