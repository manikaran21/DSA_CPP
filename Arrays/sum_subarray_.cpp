# include <iostream>
using namespace std ;

int main(){
   int size ,target,sum =0 ;
   cin >> size >> target;
   int arr[size] ;
   for (int i =0 ;i<size ;i++){
     cin >> arr[i] ;
   }
   int i =0 ,j=0 ;
   while(i<size && j<size){
     if (arr[j]>target || sum>target){
       i=i+1 ;
       j=i ;
       sum = 0 ;
     }
     else{
       sum = sum + arr[j]  ;
       if(sum == target ){
         cout << i <<" "<< j;
         break ;
       }
       else{
         j++ ;
       }
     }
   }
   return 0;
 }
