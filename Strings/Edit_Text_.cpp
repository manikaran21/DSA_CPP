#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int q ;
    string s = "";
    vector <string> op ;
    stack <string> edit ;
    cin >> q ;
    for(int i=0 ;i<q;i++){
        int j ;
        string w ;
        cin >> j ;
        if(j !=4){
           cin >> w ;
           op.push_back(to_string(j)+" "+ w) ;
        }
        else{
            op.push_back(to_string(j)) ;
        }

    }
    edit.push(s) ;

    for(int i=0 ;i<q ;i++){
        if(op[i][0] == '1'){
            s = s+op[i].substr(2) ;
            edit.push(s) ;
        }
        if(op[i][0] == '2'){
            int val = stoi(op[i].substr(2)) ;
            while(val>0){
                s.pop_back() ;
                val-- ;
            }
            if(s.empty()){
              s = "" ;
            }
            edit.push(s) ;

        }
        if(op[i][0] == '3'){
            int value = stoi(op[i].substr(2)) ;
            //cout << s ;
            cout << s[value-1] <<endl ;


        }
        if(op[i][0] == '4'){
            edit.pop() ;
            s = edit.top() ;
            edit.push(s) ;
        }
    }
    return 0;
}
