#include <iostream>
#include <string>
using namespace std;
/*
void mifuncion();


int main() {
mifuncion();
mifuncion();
mifuncion();
return 0;
}
void mifuncion() {
  cout <<"hoba";
}
*/
class myclass {
  public:
  void WriteLine(string fname){
    cout << fname;
  }
};

int main(){
  myclass Console;

  Console.WriteLine("");
}




