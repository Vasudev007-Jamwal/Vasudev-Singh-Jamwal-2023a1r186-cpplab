
/*Program to demonstrate working of constructor and Destructor in program*/
#include <iostream>
using namespace std;
class A{
    private : int x;
    public : A(){
        x = 10;
        cout << "constructor Invoked x="<< x ;
    }
   
  public : void f1(){
    cout << "\n function 1";
  }
  public : void f2(){
    cout << "\n function 2";
  }
  public : ~A(){
    cout << "\n Destructor Invoked x= " << x;
  }
};
int main(){
    A obj;
    obj.f2();
    obj.f1();
}
