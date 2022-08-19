# include <iostream>
using namespace std ;

class Manikaran {
  public :
      string name ;
      int age ;
      Manikaran (string name , int age){
        name = name ;
        age = age ;
        cout << name <<" "<< age ;

      }

} ;
int main (){
  Manikaran a ("Mani" ,22);
  //a.name ="Mani" ;
  //a.age = 22 ;
//  cout << a.name <<" "<< a.age ;
//a.print("mani" ,22) ;
}
