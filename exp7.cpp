
/* Write a Program to create a class with name Area, default constructor which set default value of pi = 3.14, create different
parametrized constructors to calculate , area of circle , area of triangle , area of rectangle.
Accept choice from user whose*/

#include<iostream>
using namespace std;
class Area {
    private : float pi,res;
    public : Area(){
        pi = 3.14;
    }
    public : Area(float radius){
        res = 3.14*radius*radius;
        cout << "\n Area of circle is " << res;
    }
    public : Area(float l , float b){
        res = l*b;
        cout << "\n Area of Rectangle is "<<  res;
   }
};
int main(){
    Area obj1;
    Area obj2(8);
    Area obj3(8,9);
    return 0;

}
