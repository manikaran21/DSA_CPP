#include<bits/stdc++.h>
using namespace std;

int main(){

    int x1, y1, x2, y2, x3, y3, x4, y4;
    cout << "enter cooordinates"  <<endl;
    cin >>  x1 >> y1 >> x2 >> y2 ; 
    cin >>  x3 >> y3 >> x4 >> y4 ;
    int A1 = abs(( x1 - x2 ) * ( y1 - y2 ));
    int A2 = abs(( x3 - x4 ) * ( y3 - y4 ));
    int left = max( x1, x3 );
    int right = min( x2, x4  );
    int bottom = max( y1, y3 );
    int top = min( y2, y4 );
    int inter = abs((left - right) * (top - bottom)) ;
    int result_area = A1 + A2 - inter ;
    cout << result_area ;
   
    return 0;
}