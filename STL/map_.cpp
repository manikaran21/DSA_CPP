# include <bits/stdc++.h>
//# include <map>         //  map or unordered_map
using namespace std;

int main(){
  int arr []= {1,1,2,3,3,4,5,100};
  unordered_map<int , int > m ;  // map <int ,int ,greater<int> > m;
  for (int i=0; i< 8;i++){
    m[arr[i]] += 1;
  }
  //map <int> :: iterator it ;
  for(auto it = m.begin() ;it != m.end() ;it++){
    cout << it->first << " " <<it->second<<endl ;
  }
  return 0;
}
