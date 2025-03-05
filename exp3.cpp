
/*Program to create a class with name PayAPP  , with function as:
Accept() function will accept amount from user
Validate() function will check amount is valid(>0)
Discount() function will calculate discount 10% on amount
Display() function will display Payable Bill on Screen */
#include<iostream>
using namespace std;
class PayApp {
    private : float amount,dis;
public : void Accpet(){
cout<<"Enter Amount";
cin>>amount;
}
public : void Validate(){
if(amount > 0)

{
cout<<"\n Amount is valid";
Discount();
Display();
} 
}
public : void Discount(){
dis = amount/100*10;
cout<<"\n Discount ="<<dis;
}
public : void Display(){ // types of application
cout<<"\n Your Payable Bill is"<<amount-dis;   // 1 Standalone application
}                // 2 
};
int main(){
    PayApp obj; 
    obj.Accpet();
    obj.Validate();
    return 0;
}
