# include <iostream>
using namespace std ;
 int main(){
   int size ;
   cin >> size ;
   int arr [size] ;
   for (int i=0 ;i<size ; i++){
     cin >> arr[i] ;
   }

   int ans =0 ,max = -1;
   if(arr[0]>arr[1]){
     max = arr [0] ;
     ans++ ;
   }
   for (int i=1 ;i<size-1 ;i++){
     if (arr[i]>max && arr[i]>arr[i+1]){
       ans++ ;
       max = arr[i] ;
     }
   }
   if(arr[size-1]>arr[size-2] && arr[size-1]>max){
     ans++ ;
   }
   cout << ans ;
   return 0 ;
 }
