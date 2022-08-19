#include<bits/stdc++.h>
using namespace std ;

int main(){
  //int maximum = INT_MIN ;int maximum = INT_MIN ;
  vector <vector<int>> v (6 ,vector<int>(6));
  for( int i =0 ;i<6 ;i++){
    for (int j=0; j<6;j++){
      cin >> v[i][j] ;
    }
  }
   int maximum = INT_MIN ;
   for(int i=0 ;i<4 ;i++){
    for (int j =0 ;j<4 ;j++){
      int sum = v[i][j]+v[i][j+1]+v[i][j+2]+v[i+1][j+1]+v[i+2][j]+v[i+2][j+1]+v[i+2][j+2] ;
      if(sum > maximum){
        maximum = sum ;
      }
    }
  }
 cout << maximum ;

return 0;
}
