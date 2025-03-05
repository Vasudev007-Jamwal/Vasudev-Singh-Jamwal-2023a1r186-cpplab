/*WAP in cpp with class,  name MYAPP and with a function , namewelcome(), that accepts student name, registration Number, address from user and this
function in execution will display a Welcome message on screen 
Welcome To MIET J*/

#include<iostream>
using namespace std;
class MYAPP{
    private : string Name , Address, RegNo;
    public : void WELCOME(){
        cout<<"\n Enter Your Name, Registration Number and Address ";
        cin>>Name>>RegNo>>Address;
        cout<<"Welcome To Miet jammu";
        cout<<"\n Your Details are as under : ";
        cout<<"\n Name ="<<Name<<"\n Registration Number ="<<RegNo<<"\n Address ="<<Address;
    }
};
int main(){
    MYAPP obj1;
    obj1.WELCOME();
    return 0;
}
