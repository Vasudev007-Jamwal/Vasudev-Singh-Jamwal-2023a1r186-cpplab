
/* Program to create a class and a function to accept username and password as parameter.
e.g Function with no return type and with parameter  */
#include <iostream>
using namespace std;

class Program{
    private : int pin;
    string Username1, Password1;
    public : void Pin_Validate(){
        cout<<"Enter Pin";
        cin>>pin;
        if(pin == 123){
            cout<<"Login Successful";
            cout<<"\n Enter Username and password";
            cin>>Username1>>Password1;
            Accept(Username1, Password1);
        }
    }

    public: void Accept(string Username, string Password){ //Formal Parameters 
        cout <<"Username ="<<Username;
        cout<<"\n Password ="<<Password;
    }
};
int main(){
    Program obj;
    obj.Pin_Validate();
    return 0;
}
