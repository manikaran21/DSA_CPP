# include <iostream>
using namespace std ;

void merge(int arr2[] , int  x, int y ,int z ){
  int n1 = y-x+1;
  int n2 = z-y ;
  int a1[n1] ,a2[n2] ;
  for(int i=0 ;i<n1 ;i++){
    a1[i] = arr2[x+i] ;
  }
  for(int i=0 ;i<n2 ;i++){
    a2[i] = arr2[y+i+1] ;
  }
  int i=0 , j=0, k= x ;
  while(i<n1 && j<n2 ){
    if(a1[i]<a2[j]){
      arr2[k] = a1[i] ;
      i++ ;
    }
    else{
      arr2[k] = a2[j] ;
      j++ ;
    }
    k++ ;
  }
  while(i<n1){
    arr2[k] = a1[i] ;
    i++ ;
    k++ ;
  }
  while(j<n2){
    arr2[k] = a2[j] ;
    j++ ;
    k++ ;
  }

}
void merge_sort(int arr1[] , int p , int q ){
  int mid = p+ (q-p)/2 ;
  if( p<q ){
    merge_sort(arr1 , p ,mid) ;
    merge_sort(arr1 , mid+1 ,q) ;
    merge(arr1 , p , mid  ,q) ;
  }
}
int main() {
   int n ;
   cin >> n ;
   int arr [n] ;
   for (int i = 0; i< n ;i++){
     cin>> arr[i] ;
   }
   merge_sort(arr , 0 , n-1) ;
   for(int i = 0;i<n ;i++){
     cout<<arr[i] ;
   }

   return 0 ;
}
